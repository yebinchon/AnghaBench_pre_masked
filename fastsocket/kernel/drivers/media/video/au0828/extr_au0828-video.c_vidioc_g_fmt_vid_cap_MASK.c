
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int colorspace; int sizeimage; int bytesperline; int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int frame_size; int bytesperline; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct au0828_fh *VAR_6 = VAR_4;
 struct au0828_dev *VAR_7 = VAR_6->dev;

 VAR_5->fmt.pix.width = VAR_7->width;
 VAR_5->fmt.pix.height = VAR_7->height;
 VAR_5->fmt.pix.pixelformat = VAR_2;
 VAR_5->fmt.pix.bytesperline = VAR_7->bytesperline;
 VAR_5->fmt.pix.sizeimage = VAR_7->frame_size;
 VAR_5->fmt.pix.colorspace = VAR_0;
 VAR_5->fmt.pix.field = VAR_1;
 return 0;
}
