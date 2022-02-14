
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytesperline; int width; int pixelformat; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;
struct saa7134_format {int depth; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {struct v4l2_framebuffer ovbuf; struct saa7134_format* ovfmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct saa7134_format* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     struct v4l2_framebuffer *VAR_6)
{
 struct saa7134_fh *VAR_7 = VAR_5;
 struct saa7134_dev *VAR_8 = VAR_7->dev;
 struct saa7134_format *VAR_9;

 if (!FUNC_0(VAR_0) &&
    !FUNC_0(VAR_1))
  return -VAR_3;


 VAR_9 = FUNC_1(VAR_6->fmt.pixelformat);
 if (((void*)0) == VAR_9)
  return -VAR_2;


 VAR_8->ovbuf = *VAR_6;
 VAR_8->ovfmt = VAR_9;
 if (0 == VAR_8->ovbuf.fmt.bytesperline)
  VAR_8->ovbuf.fmt.bytesperline =
   VAR_8->ovbuf.fmt.width*VAR_9->depth/8;
 return 0;
}
