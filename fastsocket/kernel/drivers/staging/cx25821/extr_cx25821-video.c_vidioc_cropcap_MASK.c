
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ bounds; TYPE_2__ defrect; TYPE_1__ pixelaspect; } ;
struct file {int dummy; } ;
struct cx25821_fh {struct cx25821_dev* dev; } ;
struct cx25821_dev {scalar_t__ tvnorm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct file *VAR_3, void *VAR_4, struct v4l2_cropcap *VAR_5)
{
 struct cx25821_dev *VAR_6 = ((struct cx25821_fh *)VAR_4)->dev;

 if (VAR_5->type != VAR_1)
  return -VAR_0;
 VAR_5->bounds.top = VAR_5->bounds.left = 0;
 VAR_5->bounds.width = 720;
 VAR_5->bounds.height = VAR_6->tvnorm == VAR_2 ? 576 : 480;
 VAR_5->pixelaspect.numerator =
     VAR_6->tvnorm == VAR_2 ? 59 : 10;
 VAR_5->pixelaspect.denominator =
     VAR_6->tvnorm == VAR_2 ? 54 : 11;
 VAR_5->defrect = VAR_5->bounds;
 return 0;
}
