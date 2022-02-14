
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpfe_device {int v4l2_dev; } ;
struct v4l2_rect {int height; int width; } ;
struct TYPE_6__ {int height; int bytesperline; int sizeimage; int field; int pixelformat; int width; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;
typedef enum ccdc_buftype { ____Placeholder_ccdc_buftype } ccdc_buftype ;
struct TYPE_5__ {int (* get_line_length ) () ;int (* get_buftype ) () ;int (* get_frame_format ) () ;int (* get_pixel_format ) () ;int (* get_image_window ) (struct v4l2_rect*) ;} ;
struct TYPE_8__ {TYPE_1__ hw_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 int FUNC_1 (struct v4l2_rect*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct vpfe_device *VAR_10,
     struct v4l2_format *VAR_11)
{
 struct v4l2_rect VAR_12;
 enum ccdc_buftype VAR_13;
 enum ccdc_frmfmt VAR_14;

 FUNC_0(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->type = VAR_5;
 VAR_9->hw_ops.get_image_window(&VAR_12);
 VAR_11->fmt.pix.width = VAR_12.width;
 VAR_11->fmt.pix.height = VAR_12.height;
 VAR_11->fmt.pix.bytesperline = VAR_9->hw_ops.get_line_length();
 VAR_11->fmt.pix.sizeimage = VAR_11->fmt.pix.bytesperline *
    VAR_11->fmt.pix.height;
 VAR_13 = VAR_9->hw_ops.get_buftype();
 VAR_11->fmt.pix.pixelformat = VAR_9->hw_ops.get_pixel_format();
 VAR_14 = VAR_9->hw_ops.get_frame_format();
 if (VAR_14 == VAR_3)
  VAR_11->fmt.pix.field = VAR_7;
 else if (VAR_14 == VAR_2) {
  if (VAR_13 == VAR_0)
   VAR_11->fmt.pix.field = VAR_6;
  else if (VAR_13 == VAR_1)
   VAR_11->fmt.pix.field = VAR_8;
  else {
   FUNC_6(&VAR_10->v4l2_dev, "Invalid buf_type\n");
   return -VAR_4;
  }
 } else {
  FUNC_6(&VAR_10->v4l2_dev, "Invalid frm_fmt\n");
  return -VAR_4;
 }
 return 0;
}
