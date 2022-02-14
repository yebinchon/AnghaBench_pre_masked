
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_link {int dummy; } ;
struct soc_camera_device {int * ops; } ;
struct TYPE_3__ {int height; int width; int top; int left; } ;
struct mt9v022 {int y_skip_top; TYPE_1__ rect; int chip_control; int subdev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int parent; struct soc_camera_device* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct mt9v022*) ;
 struct mt9v022* FUNC_4 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct soc_camera_device*,struct i2c_client*) ;
 struct i2c_adapter* FUNC_6 (int ) ;
 struct soc_camera_link* FUNC_7 (struct soc_camera_device*) ;
 int FUNC_8 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_12,
    const struct i2c_device_id *VAR_13)
{
 struct mt9v022 *VAR_14;
 struct soc_camera_device *VAR_15 = VAR_12->dev.platform_data;
 struct i2c_adapter *VAR_16 = FUNC_6(VAR_12->dev.parent);
 struct soc_camera_link *VAR_17;
 int VAR_18;

 if (!VAR_15) {
  FUNC_0(&VAR_12->dev, "MT9V022: missing soc-camera data!\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_7(VAR_15);
 if (!VAR_17) {
  FUNC_0(&VAR_12->dev, "MT9V022 driver needs platform data\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_16, VAR_4)) {
  FUNC_1(&VAR_16->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_4(sizeof(struct mt9v022), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 FUNC_8(&VAR_14->subdev, VAR_12, &VAR_11);

 VAR_14->chip_control = VAR_5;

 VAR_15->ops = &VAR_10;




 VAR_14->y_skip_top = 1;
 VAR_14->rect.left = VAR_6;
 VAR_14->rect.top = VAR_9;
 VAR_14->rect.width = VAR_8;
 VAR_14->rect.height = VAR_7;

 VAR_18 = FUNC_5(VAR_15, VAR_12);
 if (VAR_18) {
  VAR_15->ops = ((void*)0);
  FUNC_3(VAR_14);
 }

 return VAR_18;
}
