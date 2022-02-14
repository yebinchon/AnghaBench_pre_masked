
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ top; scalar_t__ left; int width; scalar_t__ height; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ height; int bytesperline; int sizeimage; } ;
struct TYPE_11__ {TYPE_3__ pix; } ;
struct TYPE_12__ {TYPE_4__ fmt; } ;
struct TYPE_8__ {scalar_t__ active_pixels; scalar_t__ active_lines; } ;
struct vpfe_device {int lock; TYPE_6__ crop; TYPE_5__ fmt; int v4l2_dev; TYPE_1__ std_info; scalar_t__ started; } ;
struct v4l2_crop {TYPE_6__ c; } ;
struct file {int dummy; } ;
struct TYPE_9__ {int (* get_line_length ) () ;int (* set_image_window ) (TYPE_6__*) ;} ;
struct TYPE_14__ {TYPE_2__ hw_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct vpfe_device* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5,
        struct v4l2_crop *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_6(VAR_4);
 int VAR_8 = 0;

 FUNC_4(1, VAR_3, &VAR_7->v4l2_dev, "vpfe_s_crop\n");

 if (VAR_7->started) {

  FUNC_5(&VAR_7->v4l2_dev,
   "Cannot change crop when streaming is ON\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(&VAR_7->lock);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->c.top < 0 || VAR_6->c.left < 0) {
  FUNC_5(&VAR_7->v4l2_dev,
   "doesn't support negative values for top & left\n");
  VAR_8 = -VAR_1;
  goto unlock_out;
 }


 VAR_6->c.width = ((VAR_6->c.width + 15) & ~0xf);


 if ((VAR_6->c.left + VAR_6->c.width >
  VAR_7->std_info.active_pixels) ||
     (VAR_6->c.top + VAR_6->c.height >
  VAR_7->std_info.active_lines)) {
  FUNC_5(&VAR_7->v4l2_dev, "Error in S_CROP params\n");
  VAR_8 = -VAR_1;
  goto unlock_out;
 }
 VAR_2->hw_ops.set_image_window(&VAR_6->c);
 VAR_7->fmt.fmt.pix.width = VAR_6->c.width;
 VAR_7->fmt.fmt.pix.height = VAR_6->c.height;
 VAR_7->fmt.fmt.pix.bytesperline =
  VAR_2->hw_ops.get_line_length();
 VAR_7->fmt.fmt.pix.sizeimage =
  VAR_7->fmt.fmt.pix.bytesperline *
  VAR_7->fmt.fmt.pix.height;
 VAR_7->crop = VAR_6->c;
unlock_out:
 FUNC_1(&VAR_7->lock);
 return VAR_8;
}
