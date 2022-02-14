
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; } ;
struct hexium {int i2c_adapter; } ;
struct TYPE_2__ {int adr; int byte; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int ,int ,int ,int ,union i2c_smbus_data*) ;

__attribute__((used)) static int FUNC_2(struct hexium *VAR_3, int VAR_4)
{
 union i2c_smbus_data VAR_5;

 FUNC_0((".\n"));

 VAR_5.byte = VAR_2[VAR_4].byte;
 if (0 != FUNC_1(&VAR_3->i2c_adapter, 0x6c, 0, VAR_1, VAR_2[VAR_4].adr, VAR_0, &VAR_5)) {
  return -1;
 }

 return 0;
}
