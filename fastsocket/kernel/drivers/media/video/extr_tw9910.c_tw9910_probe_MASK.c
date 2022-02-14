
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw9910_video_info {int dummy; } ;
struct tw9910_priv {int subdev; struct tw9910_video_info* info; } ;
struct soc_camera_link {int bus_id; struct tw9910_video_info* priv; } ;
struct soc_camera_device {int * ops; int iface; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int parent; struct soc_camera_device* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct tw9910_priv*) ;
 struct tw9910_priv* FUNC_3 (int,int ) ;
 struct i2c_adapter* FUNC_4 (int ) ;
 struct soc_camera_link* FUNC_5 (struct soc_camera_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct soc_camera_device*,struct i2c_client*) ;
 int FUNC_7 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)

{
 struct tw9910_priv *VAR_9;
 struct tw9910_video_info *VAR_10;
 struct soc_camera_device *VAR_11 = VAR_7->dev.platform_data;
 struct i2c_adapter *VAR_12 =
  FUNC_4(VAR_7->dev.parent);
 struct soc_camera_link *VAR_13;
 int VAR_14;

 if (!VAR_11) {
  FUNC_0(&VAR_7->dev, "TW9910: missing soc-camera data!\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_5(VAR_11);
 if (!VAR_13 || !VAR_13->priv)
  return -VAR_0;

 VAR_10 = VAR_13->priv;

 if (!FUNC_1(VAR_12, VAR_4)) {
  FUNC_0(&VAR_7->dev,
   "I2C-Adapter doesn't support "
   "I2C_FUNC_SMBUS_BYTE_DATA\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->info = VAR_10;

 FUNC_7(&VAR_9->subdev, VAR_7, &VAR_6);

 VAR_11->ops = &VAR_5;
 VAR_11->iface = VAR_13->bus_id;

 VAR_14 = FUNC_6(VAR_11, VAR_7);
 if (VAR_14) {
  VAR_11->ops = ((void*)0);
  FUNC_2(VAR_9);
 }

 return VAR_14;
}
