
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct bq27x00_device_info* name; } ;
struct bq27x00_device_info {int id; TYPE_1__ bat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bq27x00_device_info* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bq27x00_device_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct bq27x00_device_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_5(&VAR_3->bat);

 FUNC_2(VAR_3->bat.name);

 FUNC_3(&VAR_1);
 FUNC_1(&VAR_0, VAR_3->id);
 FUNC_4(&VAR_1);

 FUNC_2(VAR_3);

 return 0;
}
