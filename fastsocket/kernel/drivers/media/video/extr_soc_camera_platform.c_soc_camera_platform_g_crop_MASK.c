
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_crop {int type; TYPE_1__ c; } ;
struct TYPE_4__ {int height; int width; } ;
struct soc_camera_platform_info {TYPE_2__ format; } ;


 int VAR_0 ;
 struct soc_camera_platform_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
          struct v4l2_crop *VAR_2)
{
 struct soc_camera_platform_info *VAR_3 = FUNC_0(VAR_1);

 VAR_2->c.left = 0;
 VAR_2->c.top = 0;
 VAR_2->c.width = VAR_3->format.width;
 VAR_2->c.height = VAR_3->format.height;
 VAR_2->type = VAR_0;

 return 0;
}
