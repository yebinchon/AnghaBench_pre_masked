
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_framebuffer {int capability; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {struct v4l2_framebuffer ovbuf; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
    struct v4l2_framebuffer *VAR_3)
{
 struct saa7134_fh *VAR_4 = VAR_2;
 struct saa7134_dev *VAR_5 = VAR_4->dev;

 *VAR_3 = VAR_5->ovbuf;
 VAR_3->capability = VAR_0;

 return 0;
}
