
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int right; int left; int bottom; int top; } ;
struct vino_channel_settings {int decimation; size_t data_format; int line_size; TYPE_2__ clipping; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; scalar_t__ priv; int colorspace; int field; int pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int colorspace; int pixelformat; } ;
struct TYPE_7__ {int input_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 struct vino_channel_settings *VAR_6 = FUNC_2(VAR_3);
 unsigned long VAR_7;
 struct v4l2_pix_format *VAR_8 = &VAR_5->fmt.pix;

 FUNC_0(&VAR_2->input_lock, VAR_7);

 VAR_8->width = (VAR_6->clipping.right - VAR_6->clipping.left) /
  VAR_6->decimation;
 VAR_8->height = (VAR_6->clipping.bottom - VAR_6->clipping.top) /
  VAR_6->decimation;
 VAR_8->pixelformat =
  VAR_1[VAR_6->data_format].pixelformat;

 VAR_8->field = VAR_0;
 VAR_8->bytesperline = VAR_6->line_size;
 VAR_8->sizeimage = VAR_6->line_size *
  (VAR_6->clipping.bottom - VAR_6->clipping.top) /
  VAR_6->decimation;
 VAR_8->colorspace =
  VAR_1[VAR_6->data_format].colorspace;

 VAR_8->priv = 0;

 FUNC_1(&VAR_2->input_lock, VAR_7);
 return 0;
}
