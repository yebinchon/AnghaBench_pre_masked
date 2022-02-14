
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_framebuffer {int capability; } ;
struct saa7146_vv {struct v4l2_framebuffer ov_fb; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2, struct v4l2_framebuffer *VAR_3)
{
 struct saa7146_dev *VAR_4 = ((struct saa7146_fh *)VAR_2)->dev;
 struct saa7146_vv *VAR_5 = VAR_4->vv_data;

 *VAR_3 = VAR_5->ov_fb;
 VAR_3->capability = VAR_0;
 return 0;
}
