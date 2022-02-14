
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ov7670_info {int clock_speed; int sat; int clkrc; int * fmt; int use_smbus; int min_height; int min_width; } ;
struct ov7670_config {int clock_speed; int use_smbus; int min_height; int min_width; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct ov7670_info*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int * VAR_1 ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct i2c_client*,char*,int,int ) ;
 int FUNC_5 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2, int VAR_3, void *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_2);
 struct ov7670_config *VAR_6 = VAR_4;
 struct ov7670_info *VAR_7 = FUNC_2(VAR_2);
 int VAR_8;

 VAR_7->clock_speed = 30;





 if (VAR_6) {
  VAR_7->min_width = VAR_6->min_width;
  VAR_7->min_height = VAR_6->min_height;
  VAR_7->use_smbus = VAR_6->use_smbus;

  if (VAR_6->clock_speed)
   VAR_7->clock_speed = VAR_6->clock_speed;
 }


 VAR_8 = FUNC_1(VAR_2);
 if (VAR_8) {
  FUNC_4(1, VAR_0, VAR_5,
   "chip found @ 0x%x (%s) is not an ov7670 chip.\n",
   VAR_5->addr << 1, VAR_5->adapter->name);
  FUNC_0(VAR_7);
  return VAR_8;
 }
 FUNC_5(VAR_5, "chip found @ 0x%02x (%s)\n",
   VAR_5->addr << 1, VAR_5->adapter->name);

 VAR_7->fmt = &VAR_1[0];
 VAR_7->sat = 128;
 VAR_7->clkrc = VAR_7->clock_speed / 30;

 return 0;
}
