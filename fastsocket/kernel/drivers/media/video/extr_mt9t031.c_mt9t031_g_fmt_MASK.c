
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int field; int colorspace; int code; } ;
struct TYPE_2__ {int width; int height; } ;
struct mt9t031 {int xskip; int yskip; TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mt9t031* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
    struct v4l2_mbus_framefmt *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_3);
 struct mt9t031 *VAR_6 = FUNC_0(VAR_5);

 VAR_4->width = VAR_6->rect.width / VAR_6->xskip;
 VAR_4->height = VAR_6->rect.height / VAR_6->yskip;
 VAR_4->code = VAR_2;
 VAR_4->colorspace = VAR_0;
 VAR_4->field = VAR_1;

 return 0;
}
