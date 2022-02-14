
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zr364xx_camera {int width; int height; } ;
struct TYPE_4__ {int width; int height; int bytesperline; int sizeimage; scalar_t__ priv; scalar_t__ colorspace; int field; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 struct zr364xx_camera* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
        struct v4l2_format *VAR_5)
{
 struct zr364xx_camera *VAR_6;

 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_3);

 VAR_5->fmt.pix.pixelformat = VAR_2[0].fourcc;
 VAR_5->fmt.pix.field = VAR_1;
 VAR_5->fmt.pix.width = VAR_6->width;
 VAR_5->fmt.pix.height = VAR_6->height;
 VAR_5->fmt.pix.bytesperline = VAR_5->fmt.pix.width * 2;
 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.colorspace = 0;
 VAR_5->fmt.pix.priv = 0;
 return 0;
}
