
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union i2c_smbus_data {int byte; } ;
struct hexium {int i2c_adapter; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int adr; int byte; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int ,int ,int,int ,union i2c_smbus_data*) ;
 int FUNC_2 (char*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct hexium *VAR_3, int VAR_4)
{
 union i2c_smbus_data VAR_5;
 int VAR_6 = 0;

 FUNC_0((".\n"));

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  int VAR_7 = VAR_2[VAR_4].data[VAR_6].adr;
  VAR_5.byte = VAR_2[VAR_4].data[VAR_6].byte;
  if (0 != FUNC_1(&VAR_3->i2c_adapter, 0x4e, 0, VAR_1, VAR_7, VAR_0, &VAR_5)) {
   return -1;
  }
  FUNC_2("%d: 0x%02x => 0x%02x\n",VAR_4, VAR_7,VAR_5.byte);
 }

 return 0;
}
