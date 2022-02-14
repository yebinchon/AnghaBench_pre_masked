
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7146_fh {int video_fmt; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 VAR_2->fmt.pix = ((struct saa7146_fh *)VAR_1)->video_fmt;
 return 0;
}
