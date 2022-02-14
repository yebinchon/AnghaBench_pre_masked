
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct TYPE_4__ {int height; int width; int top; int left; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_1__ pixelaspect; TYPE_2__ bounds; TYPE_2__ defrect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_6, struct v4l2_cropcap *VAR_7)
{
 if (VAR_7->type != VAR_5)
  return -VAR_0;

 VAR_7->bounds.left = VAR_3;
 VAR_7->bounds.top = VAR_4;
 VAR_7->bounds.width = VAR_2;
 VAR_7->bounds.height = VAR_1;
 VAR_7->defrect = VAR_7->bounds;
 VAR_7->pixelaspect.numerator = 1;
 VAR_7->pixelaspect.denominator = 1;

 return 0;
}
