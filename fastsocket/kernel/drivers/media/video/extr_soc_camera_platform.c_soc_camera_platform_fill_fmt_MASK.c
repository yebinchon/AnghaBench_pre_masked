
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct TYPE_2__ {int field; int colorspace; int code; int height; int width; } ;
struct soc_camera_platform_info {TYPE_1__ format; } ;


 struct soc_camera_platform_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
     struct v4l2_mbus_framefmt *VAR_1)
{
 struct soc_camera_platform_info *VAR_2 = FUNC_0(VAR_0);

 VAR_1->width = VAR_2->format.width;
 VAR_1->height = VAR_2->format.height;
 VAR_1->code = VAR_2->format.code;
 VAR_1->colorspace = VAR_2->format.colorspace;
 VAR_1->field = VAR_2->format.field;

 return 0;
}
