
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_link {int dummy; } ;
struct soc_camera_device {int * ops; } ;
struct TYPE_3__ {int height; int width; int top; int left; } ;
struct mt9m001 {int autoexposure; TYPE_1__ rect; scalar_t__ y_skip_top; int subdev; } ;
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
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct mt9m001*) ;
 struct mt9m001* FUNC_4 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct soc_camera_device*,struct i2c_client*) ;
 struct i2c_adapter* FUNC_6 (int ) ;
 struct soc_camera_link* FUNC_7 (struct soc_camera_device*) ;
 int FUNC_8 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 struct mt9m001 *VAR_13;
 struct soc_camera_device *VAR_14 = VAR_11->dev.platform_data;
 struct i2c_adapter *VAR_15 = FUNC_6(VAR_11->dev.parent);
 struct soc_camera_link *VAR_16;
 int VAR_17;

 if (!VAR_14) {
  FUNC_0(&VAR_11->dev, "MT9M001: missing soc-camera data!\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_7(VAR_14);
 if (!VAR_16) {
  FUNC_0(&VAR_11->dev, "MT9M001 driver needs platform data\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_15, VAR_4)) {
  FUNC_1(&VAR_15->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_4(sizeof(struct mt9m001), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 FUNC_8(&VAR_13->subdev, VAR_11, &VAR_10);


 VAR_14->ops = &VAR_9;

 VAR_13->y_skip_top = 0;
 VAR_13->rect.left = VAR_5;
 VAR_13->rect.top = VAR_8;
 VAR_13->rect.width = VAR_7;
 VAR_13->rect.height = VAR_6;





 VAR_13->autoexposure = 1;

 VAR_17 = FUNC_5(VAR_14, VAR_11);
 if (VAR_17) {
  VAR_14->ops = ((void*)0);
  FUNC_3(VAR_13);
 }

 return VAR_17;
}
