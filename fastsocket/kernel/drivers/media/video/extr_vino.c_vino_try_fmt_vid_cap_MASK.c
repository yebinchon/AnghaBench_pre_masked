
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int right; int left; int bottom; int top; } ;
struct vino_channel_settings {size_t data_format; int decimation; int line_size; TYPE_2__ clipping; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; scalar_t__ priv; int colorspace; int field; int pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int colorspace; int description; int pixelformat; } ;
struct TYPE_7__ {int input_lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct vino_channel_settings*,struct vino_channel_settings*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_4 (struct file*) ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct vino_channel_settings*,int,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, void *VAR_6,
        struct v4l2_format *VAR_7)
{
 struct vino_channel_settings *VAR_8 = FUNC_4(VAR_5);
 struct vino_channel_settings VAR_9;
 unsigned long VAR_10;
 struct v4l2_pix_format *VAR_11 = &VAR_7->fmt.pix;

 FUNC_0("requested: w = %d, h = %d\n",
   VAR_11->width, VAR_11->height);

 FUNC_2(&VAR_4->input_lock, VAR_10);
 FUNC_1(&VAR_9, VAR_8, sizeof(struct vino_channel_settings));
 FUNC_3(&VAR_4->input_lock, VAR_10);

 VAR_9.data_format = FUNC_5(VAR_11->pixelformat);
 if (VAR_9.data_format == VAR_2) {
  VAR_9.data_format = VAR_1;
  VAR_11->pixelformat =
   VAR_3[VAR_9.data_format].
   pixelformat;
 }


 FUNC_6(&VAR_9, VAR_11->width, VAR_11->height);

 FUNC_0("data format = %s\n",
   VAR_3[VAR_9.data_format].description);

 VAR_11->width = (VAR_9.clipping.right - VAR_9.clipping.left) /
  VAR_9.decimation;
 VAR_11->height = (VAR_9.clipping.bottom - VAR_9.clipping.top) /
  VAR_9.decimation;

 VAR_11->field = VAR_0;
 VAR_11->bytesperline = VAR_9.line_size;
 VAR_11->sizeimage = VAR_9.line_size *
  (VAR_9.clipping.bottom - VAR_9.clipping.top) /
  VAR_9.decimation;
 VAR_11->colorspace =
  VAR_3[VAR_9.data_format].colorspace;

 VAR_11->priv = 0;
 return 0;
}
