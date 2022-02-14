
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; } ;
struct video_device {TYPE_1__ dev; } ;
struct mt9t031 {int exposure; int gain; int model; } ;
struct i2c_client {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 struct video_device* FUNC_6 (struct i2c_client*) ;
 struct mt9t031* FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5)
{
 struct mt9t031 *VAR_6 = FUNC_7(VAR_5);
 struct video_device *VAR_7 = FUNC_6(VAR_5);
 s32 VAR_8;
 int VAR_9;


 VAR_8 = FUNC_5(VAR_5, VAR_1, 1);
 FUNC_0(&VAR_5->dev, "write: %d\n", VAR_8);


 VAR_8 = FUNC_4(VAR_5, VAR_2);

 switch (VAR_8) {
 case 0x1621:
  VAR_6->model = VAR_3;
  break;
 default:
  FUNC_1(&VAR_5->dev,
   "No MT9T031 chip detected, register read %x\n", VAR_8);
  return -VAR_0;
 }

 FUNC_2(&VAR_5->dev, "Detected a MT9T031 chip ID %x\n", VAR_8);

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9 < 0)
  FUNC_1(&VAR_5->dev, "Failed to initialise the camera\n");
 else
  VAR_7->dev.type = &VAR_4;


 VAR_6->exposure = 255;
 VAR_6->gain = 64;

 return VAR_9;
}
