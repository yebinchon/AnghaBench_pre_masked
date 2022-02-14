
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ priv; int colorspace; int sizeimage; scalar_t__ bytesperline; int field; int pixelformat; int height; int width; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_3__ fmt; } ;
struct TYPE_4__ {int height; int width; } ;
struct camera_data {int frame_size; int pixelformat; TYPE_1__ vw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(void *VAR_4,struct camera_data *VAR_5)
{
 struct v4l2_format *VAR_6 = VAR_4;

 if (VAR_6->type != VAR_1)
        return -VAR_0;

 VAR_6->fmt.pix.width = VAR_5->vw.width;
 VAR_6->fmt.pix.height = VAR_5->vw.height;
 VAR_6->fmt.pix.pixelformat = VAR_5->pixelformat;
 VAR_6->fmt.pix.field = VAR_3;
 VAR_6->fmt.pix.bytesperline = 0;
 VAR_6->fmt.pix.sizeimage = VAR_5->frame_size;
 VAR_6->fmt.pix.colorspace = VAR_2;
 VAR_6->fmt.pix.priv = 0;

 return 0;
}
