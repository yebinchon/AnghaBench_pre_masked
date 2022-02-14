
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct soc_camera_device {scalar_t__ iface; TYPE_1__ dev; } ;
struct mt9m111 {int autoexposure; int autowhitebalance; int swap_rgb_even_odd; int swap_rgb_red_blue; int model; } ;
struct i2c_client {int dev; } ;
typedef int s32 ;
struct TYPE_4__ {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 struct mt9m111* FUNC_4 (struct i2c_client*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_4,
          struct i2c_client *VAR_5)
{
 struct mt9m111 *VAR_6 = FUNC_4(VAR_5);
 s32 VAR_7;
 int VAR_8;





 if (!VAR_4->dev.parent ||
     FUNC_5(VAR_4->dev.parent)->nr != VAR_4->iface)
  return -VAR_1;

 VAR_6->autoexposure = 1;
 VAR_6->autowhitebalance = 1;

 VAR_6->swap_rgb_even_odd = 1;
 VAR_6->swap_rgb_red_blue = 1;

 VAR_7 = FUNC_3(VAR_0);

 switch (VAR_7) {
 case 0x143a:
  VAR_6->model = VAR_2;
  FUNC_1(&VAR_5->dev,
   "Detected a MT9M111/MT9M131 chip ID %x\n", VAR_7);
  break;
 case 0x148c:
  VAR_6->model = VAR_3;
  FUNC_1(&VAR_5->dev, "Detected a MT9M112 chip ID %x\n", VAR_7);
  break;
 default:
  VAR_8 = -VAR_1;
  FUNC_0(&VAR_5->dev,
   "No MT9M111/MT9M112/MT9M131 chip detected register read %x\n",
   VAR_7);
  goto ei2c;
 }

 VAR_8 = FUNC_2(VAR_5);

ei2c:
 return VAR_8;
}
