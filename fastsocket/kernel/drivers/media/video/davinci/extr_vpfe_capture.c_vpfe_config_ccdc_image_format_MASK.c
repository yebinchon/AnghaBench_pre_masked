
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int field; int pixelformat; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct vpfe_device {TYPE_3__ fmt; int crop; int v4l2_dev; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;
struct TYPE_9__ {scalar_t__ (* set_pixel_format ) (int ) ;int (* set_buftype ) (int ) ;int (* set_frame_format ) (int) ;int (* set_image_window ) (int *) ;} ;
struct TYPE_10__ {TYPE_4__ hw_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 TYPE_5__* VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct vpfe_device *VAR_6)
{
 enum ccdc_frmfmt VAR_7 = VAR_2;
 int VAR_8 = 0;

 if (VAR_5->hw_ops.set_pixel_format(
   VAR_6->fmt.fmt.pix.pixelformat) < 0) {
  FUNC_5(&VAR_6->v4l2_dev,
   "couldn't set pix format in ccdc\n");
  return -VAR_4;
 }

 VAR_5->hw_ops.set_image_window(&VAR_6->crop);

 switch (VAR_6->fmt.fmt.pix.field) {
 case 130:

  VAR_8 = VAR_5->hw_ops.set_buftype(
    VAR_0);
  break;
 case 129:
  VAR_7 = VAR_3;

  break;
 case 128:
  VAR_8 = VAR_5->hw_ops.set_buftype(
    VAR_1);
  break;
 default:
  return -VAR_4;
 }


 if (!VAR_8)
  VAR_8 = VAR_5->hw_ops.set_frame_format(VAR_7);
 return VAR_8;
}
