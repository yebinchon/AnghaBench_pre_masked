
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct TYPE_4__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_cropcap {TYPE_1__ pixelaspect; int type; TYPE_2__ bounds; TYPE_2__ defrect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3, struct v4l2_cropcap *VAR_4)
{
 VAR_4->bounds.left = 0;
 VAR_4->bounds.top = 0;
 VAR_4->bounds.width = VAR_2;
 VAR_4->bounds.height = VAR_1;
 VAR_4->defrect = VAR_4->bounds;
 VAR_4->type = VAR_0;
 VAR_4->pixelaspect.numerator = 1;
 VAR_4->pixelaspect.denominator = 1;

 return 0;
}
