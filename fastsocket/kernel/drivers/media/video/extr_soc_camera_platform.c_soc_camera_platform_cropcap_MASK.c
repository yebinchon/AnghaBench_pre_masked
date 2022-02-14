
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_5__ {int numerator; int denominator; } ;
struct TYPE_6__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_cropcap {TYPE_2__ pixelaspect; int type; TYPE_3__ bounds; TYPE_3__ defrect; } ;
struct TYPE_4__ {int height; int width; } ;
struct soc_camera_platform_info {TYPE_1__ format; } ;


 int VAR_0 ;
 struct soc_camera_platform_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
           struct v4l2_cropcap *VAR_2)
{
 struct soc_camera_platform_info *VAR_3 = FUNC_0(VAR_1);

 VAR_2->bounds.left = 0;
 VAR_2->bounds.top = 0;
 VAR_2->bounds.width = VAR_3->format.width;
 VAR_2->bounds.height = VAR_3->format.height;
 VAR_2->defrect = VAR_2->bounds;
 VAR_2->type = VAR_0;
 VAR_2->pixelaspect.numerator = 1;
 VAR_2->pixelaspect.denominator = 1;

 return 0;
}
