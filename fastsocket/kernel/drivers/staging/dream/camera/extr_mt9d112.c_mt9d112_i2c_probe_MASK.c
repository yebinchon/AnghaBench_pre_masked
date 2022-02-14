
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9d112_work {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 struct i2c_client* VAR_4 ;
 int FUNC_5 (struct i2c_client*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
 const struct i2c_device_id *VAR_7)
{
 int VAR_8 = 0;
 if (!FUNC_1(VAR_6->adapter, VAR_3)) {
  VAR_8 = -VAR_1;
  goto probe_failure;
 }

 VAR_5 =
  FUNC_4(sizeof(struct mt9d112_work), VAR_2);

 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto probe_failure;
 }

 FUNC_2(VAR_6, VAR_5);
 FUNC_5(VAR_6);
 VAR_4 = VAR_6;

 FUNC_0("mt9d112_probe succeeded!\n");

 return 0;

probe_failure:
 FUNC_3(VAR_5);
 VAR_5 = ((void*)0);
 FUNC_0("mt9d112_probe failed!\n");
 return VAR_8;
}
