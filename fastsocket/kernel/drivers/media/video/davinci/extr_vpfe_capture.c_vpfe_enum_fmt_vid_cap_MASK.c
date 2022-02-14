
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_fmtdesc {int index; } ;
struct vpfe_pixel_format {struct v4l2_fmtdesc fmtdesc; } ;
struct vpfe_device {int v4l2_dev; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* enum_pix ) (int *,int) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_2 (struct file*) ;
 struct vpfe_pixel_format* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
       struct v4l2_fmtdesc *VAR_5)
{
 struct vpfe_device *VAR_6 = FUNC_2(VAR_3);
 const struct vpfe_pixel_format *VAR_7;
 int VAR_8;
 u32 VAR_9;

 FUNC_1(1, VAR_2, &VAR_6->v4l2_dev, "vpfe_enum_fmt_vid_cap\n");

 if (VAR_1->hw_ops.enum_pix(&VAR_9, VAR_5->index) < 0)
  return -VAR_0;


 VAR_7 = FUNC_3(VAR_9);
 if (((void*)0) != VAR_7) {
  VAR_8 = VAR_5->index;
  *VAR_5 = VAR_7->fmtdesc;
  VAR_5->index = VAR_8;
  return 0;
 }
 return -VAR_0;
}
