
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct TYPE_4__ {int height; int width; } ;
struct mt9m001 {TYPE_1__* fmt; TYPE_2__ rect; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int colorspace; int code; } ;


 int VAR_0 ;
 struct mt9m001* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
    struct v4l2_mbus_framefmt *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_1);
 struct mt9m001 *VAR_4 = FUNC_0(VAR_3);

 VAR_2->width = VAR_4->rect.width;
 VAR_2->height = VAR_4->rect.height;
 VAR_2->code = VAR_4->fmt->code;
 VAR_2->colorspace = VAR_4->fmt->colorspace;
 VAR_2->field = VAR_0;

 return 0;
}
