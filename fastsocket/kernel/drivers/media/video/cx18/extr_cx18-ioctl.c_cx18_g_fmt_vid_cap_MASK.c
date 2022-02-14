
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int height; int sizeimage; int bytesperline; int pixelformat; scalar_t__ priv; int field; int colorspace; int width; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18_open_id {scalar_t__ type; struct cx18* cx; } ;
struct TYPE_4__ {int height; int width; } ;
struct cx18 {TYPE_2__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_5, void *VAR_6,
    struct v4l2_format *VAR_7)
{
 struct cx18_open_id *VAR_8 = VAR_6;
 struct cx18 *VAR_9 = VAR_8->cx;
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;

 VAR_10->width = VAR_9->params.width;
 VAR_10->height = VAR_9->params.height;
 VAR_10->colorspace = VAR_1;
 VAR_10->field = VAR_2;
 VAR_10->priv = 0;
 if (VAR_8->type == VAR_0) {
  VAR_10->pixelformat = VAR_3;

  VAR_10->sizeimage = VAR_10->height * 720 * 3 / 2;
  VAR_10->bytesperline = 720;
 } else {
  VAR_10->pixelformat = VAR_4;
  VAR_10->sizeimage = 128 * 1024;
  VAR_10->bytesperline = 0;
 }
 return 0;
}
