
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011 {int global_gain; int width; int height; int xtal; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct mt9v011*) ;
 struct mt9v011* FUNC_2 (int,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_5 (struct v4l2_subdev*,char*,scalar_t__) ;
 int FUNC_6 (struct i2c_client*,char*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 u16 VAR_12;
 struct mt9v011 *VAR_13;
 struct v4l2_subdev *VAR_14;


 if (!FUNC_0(VAR_10->adapter,
      VAR_4 | VAR_5))
  return -VAR_1;

 VAR_13 = FUNC_2(sizeof(struct mt9v011), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_14 = &VAR_13->sd;
 FUNC_4(VAR_14, VAR_10, &VAR_9);


 VAR_12 = FUNC_3(VAR_14, VAR_8);
 if ((VAR_12 != VAR_7) &&
     (VAR_12 != VAR_6)) {
  FUNC_5(VAR_14, "*** unknown micron chip detected (0x%04x).\n",
     VAR_12);
  FUNC_1(VAR_13);
  return -VAR_0;
 }

 VAR_13->global_gain = 0x0024;
 VAR_13->width = 640;
 VAR_13->height = 480;
 VAR_13->xtal = 27000000;

 FUNC_6(VAR_10, "chip found @ 0x%02x (%s - chip version 0x%04x)\n",
   VAR_10->addr << 1, VAR_10->adapter->name, VAR_12);

 return 0;
}
