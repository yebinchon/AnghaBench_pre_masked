
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_3__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ pixelaspect; TYPE_1__ bounds; TYPE_1__ defrect; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
     struct v4l2_cropcap *VAR_4)
{
 struct au0828_fh *VAR_5 = VAR_3;
 struct au0828_dev *VAR_6 = VAR_5->dev;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 VAR_4->bounds.left = 0;
 VAR_4->bounds.top = 0;
 VAR_4->bounds.width = VAR_6->width;
 VAR_4->bounds.height = VAR_6->height;

 VAR_4->defrect = VAR_4->bounds;

 VAR_4->pixelaspect.numerator = 54;
 VAR_4->pixelaspect.denominator = 59;

 return 0;
}
