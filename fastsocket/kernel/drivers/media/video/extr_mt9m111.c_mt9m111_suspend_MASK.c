
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_device {int dummy; } ;
struct mt9m111 {int gain; } ;
struct i2c_client {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (int ) ;
 struct mt9m111* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_0, pm_message_t VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(FUNC_3(VAR_0));
 struct mt9m111 *VAR_3 = FUNC_2(VAR_2);

 VAR_3->gain = FUNC_0(VAR_2);

 return 0;
}
