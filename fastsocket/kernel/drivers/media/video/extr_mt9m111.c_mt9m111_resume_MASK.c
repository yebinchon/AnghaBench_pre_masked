
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_device {int dummy; } ;
struct mt9m111 {scalar_t__ powered; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (int ) ;
 struct mt9m111* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_3(FUNC_5(VAR_0));
 struct mt9m111 *VAR_2 = FUNC_4(VAR_1);
 int VAR_3 = 0;

 if (VAR_2->powered) {
  VAR_3 = FUNC_0(VAR_1);
  if (!VAR_3)
   VAR_3 = FUNC_1(VAR_1);
  if (!VAR_3)
   VAR_3 = FUNC_2(VAR_1);
 }
 return VAR_3;
}
