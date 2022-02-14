
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_5__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_4__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_cropcap {TYPE_3__ pixelaspect; int type; TYPE_2__ defrect; TYPE_1__ bounds; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_1, struct v4l2_cropcap *VAR_2)
{
 VAR_2->bounds.left = 0;
 VAR_2->bounds.top = 0;
 VAR_2->bounds.width = 768;
 VAR_2->bounds.height = 576;
 VAR_2->defrect.left = 0;
 VAR_2->defrect.top = 0;
 VAR_2->defrect.width = 640;
 VAR_2->defrect.height = 480;
 VAR_2->type = VAR_0;
 VAR_2->pixelaspect.numerator = 1;
 VAR_2->pixelaspect.denominator = 1;

 return 0;
}
