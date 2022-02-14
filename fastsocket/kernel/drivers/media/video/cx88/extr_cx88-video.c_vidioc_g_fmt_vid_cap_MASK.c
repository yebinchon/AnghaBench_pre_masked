
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; int bytesperline; int sizeimage; int pixelformat; int field; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int field; } ;
struct cx8800_fh {int width; int height; TYPE_2__* fmt; TYPE_1__ vidq; } ;
struct TYPE_6__ {int depth; int fourcc; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct cx8800_fh *VAR_3 = VAR_1;

 VAR_2->fmt.pix.width = VAR_3->width;
 VAR_2->fmt.pix.height = VAR_3->height;
 VAR_2->fmt.pix.field = VAR_3->vidq.field;
 VAR_2->fmt.pix.pixelformat = VAR_3->fmt->fourcc;
 VAR_2->fmt.pix.bytesperline =
  (VAR_2->fmt.pix.width * VAR_3->fmt->depth) >> 3;
 VAR_2->fmt.pix.sizeimage =
  VAR_2->fmt.pix.height * VAR_2->fmt.pix.bytesperline;
 return 0;
}
