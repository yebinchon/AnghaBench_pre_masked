
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ pixelaspect; int defrect; int bounds; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__* tvnorm; int crop_defrect; int crop_bounds; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_5, void *VAR_6,
     struct v4l2_cropcap *VAR_7)
{
 struct saa7134_fh *VAR_8 = VAR_6;
 struct saa7134_dev *VAR_9 = VAR_8->dev;

 if (VAR_7->type != VAR_1 &&
     VAR_7->type != VAR_2)
  return -VAR_0;
 VAR_7->bounds = VAR_9->crop_bounds;
 VAR_7->defrect = VAR_9->crop_defrect;
 VAR_7->pixelaspect.numerator = 1;
 VAR_7->pixelaspect.denominator = 1;
 if (VAR_9->tvnorm->id & VAR_3) {
  VAR_7->pixelaspect.numerator = 11;
  VAR_7->pixelaspect.denominator = 10;
 }
 if (VAR_9->tvnorm->id & VAR_4) {
  VAR_7->pixelaspect.numerator = 54;
  VAR_7->pixelaspect.denominator = 59;
 }
 return 0;
}
