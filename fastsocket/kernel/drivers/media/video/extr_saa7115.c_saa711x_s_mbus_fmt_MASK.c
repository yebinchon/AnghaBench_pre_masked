
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; int colorspace; int field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4, struct v4l2_mbus_framefmt *VAR_5)
{
 if (VAR_5->code != VAR_3)
  return -VAR_0;
 VAR_5->field = VAR_2;
 VAR_5->colorspace = VAR_1;
 return FUNC_0(VAR_4, VAR_5->width, VAR_5->height);
}
