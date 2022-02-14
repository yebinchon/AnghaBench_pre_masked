
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int width; unsigned int height; int bytesperline; unsigned int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx231xx_fmt {int depth; int fourcc; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 struct cx231xx_fmt* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct cx231xx*) ;
 unsigned int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (unsigned int*,int,unsigned int,int,unsigned int*,int,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 struct cx231xx_fh *VAR_6 = VAR_4;
 struct cx231xx *VAR_7 = VAR_6->dev;
 unsigned int VAR_8 = VAR_5->fmt.pix.width;
 unsigned int VAR_9 = VAR_5->fmt.pix.height;
 unsigned int VAR_10 = FUNC_3(VAR_7);
 unsigned int VAR_11 = FUNC_2(VAR_7);
 struct cx231xx_fmt *VAR_12;

 VAR_12 = FUNC_1(VAR_5->fmt.pix.pixelformat);
 if (!VAR_12) {
  FUNC_0("Fourcc format (%08x) invalid.\n",
     VAR_5->fmt.pix.pixelformat);
  return -VAR_0;
 }



 FUNC_4(&VAR_8, 48, VAR_10, 1, &VAR_9, 32, VAR_11, 1, 0);

 VAR_5->fmt.pix.width = VAR_8;
 VAR_5->fmt.pix.height = VAR_9;
 VAR_5->fmt.pix.pixelformat = VAR_12->fourcc;
 VAR_5->fmt.pix.bytesperline = (VAR_7->width * VAR_12->depth + 7) >> 3;
 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.bytesperline * VAR_9;
 VAR_5->fmt.pix.colorspace = VAR_1;
 VAR_5->fmt.pix.field = VAR_2;

 return 0;
}
