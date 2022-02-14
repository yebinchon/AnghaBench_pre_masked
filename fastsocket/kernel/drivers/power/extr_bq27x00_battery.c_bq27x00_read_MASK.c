
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bq27x00_device_info {TYPE_1__* bus; } ;
struct TYPE_2__ {int (* read ) (int ,int*,int,struct bq27x00_device_info*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,int,struct bq27x00_device_info*) ;

__attribute__((used)) static int FUNC_2(u8 VAR_0, int *VAR_1, int VAR_2,
   struct bq27x00_device_info *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3->bus->read(VAR_0, VAR_1, VAR_2, VAR_3);
 *VAR_1 = FUNC_0(*VAR_1);

 return VAR_4;
}
