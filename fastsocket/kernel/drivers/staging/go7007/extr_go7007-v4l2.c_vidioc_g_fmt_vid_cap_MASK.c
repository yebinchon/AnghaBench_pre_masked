
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorspace; int sizeimage; scalar_t__ bytesperline; int field; int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {scalar_t__ format; int height; int width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_7, void *VAR_8,
     struct v4l2_format *VAR_9)
{
 struct go7007 *VAR_10 = ((struct go7007_file *) VAR_8)->go;

 VAR_9->type = VAR_2;
 VAR_9->fmt.pix.width = VAR_10->width;
 VAR_9->fmt.pix.height = VAR_10->height;
 VAR_9->fmt.pix.pixelformat = (VAR_10->format == VAR_1) ?
       VAR_5 : VAR_6;
 VAR_9->fmt.pix.field = VAR_4;
 VAR_9->fmt.pix.bytesperline = 0;
 VAR_9->fmt.pix.sizeimage = VAR_0;
 VAR_9->fmt.pix.colorspace = VAR_3;

 return 0;
}
