
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9p012_work {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 struct i2c_client* VAR_3 ;
 int FUNC_5 (struct i2c_client*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
 const struct i2c_device_id *VAR_6)
{
 int VAR_7 = 0;
 FUNC_0("mt9p012_probe called!\n");

 if (!FUNC_1(VAR_5->adapter, VAR_2)) {
  FUNC_0("i2c_check_functionality failed\n");
  goto probe_failure;
 }

 VAR_4 = FUNC_3(sizeof(struct mt9p012_work), VAR_1);
 if (!VAR_4) {
  FUNC_0("kzalloc failed.\n");
  VAR_7 = -VAR_0;
  goto probe_failure;
 }

 FUNC_2(VAR_5, VAR_4);
 FUNC_5(VAR_5);
 VAR_3 = VAR_5;

 FUNC_4(50);

 FUNC_0("mt9p012_probe successed! rc = %d\n", VAR_7);
 return 0;

probe_failure:
 FUNC_0("mt9p012_probe failed! rc = %d\n", VAR_7);
 return VAR_7;
}
