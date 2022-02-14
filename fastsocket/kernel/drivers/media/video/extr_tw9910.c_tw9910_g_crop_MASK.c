
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_crop {int type; TYPE_1__ c; } ;
struct tw9910_priv {TYPE_2__* scale; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;


 int VAR_0 ;
 struct tw9910_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_crop*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_crop *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_1);
 struct tw9910_priv *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4->scale) {
  int VAR_5;
  struct v4l2_crop VAR_6 = {
   .c = {
    .left = 0,
    .top = 0,
    .width = 640,
    .height = 480,
   },
  };
  VAR_5 = FUNC_1(VAR_1, &VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_2->c.left = 0;
 VAR_2->c.top = 0;
 VAR_2->c.width = VAR_4->scale->width;
 VAR_2->c.height = VAR_4->scale->height;
 VAR_2->type = VAR_0;

 return 0;
}
