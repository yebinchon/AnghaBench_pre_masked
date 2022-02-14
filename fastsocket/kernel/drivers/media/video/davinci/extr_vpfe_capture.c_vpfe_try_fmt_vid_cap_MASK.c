
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_pixel_format {int dummy; } ;
struct vpfe_device {int v4l2_dev; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 struct vpfe_pixel_format* FUNC_2 (struct vpfe_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct vpfe_device *VAR_5 = FUNC_1(VAR_2);
 const struct vpfe_pixel_format *VAR_6;

 FUNC_0(1, VAR_1, &VAR_5->v4l2_dev, "vpfe_try_fmt_vid_cap\n");

 VAR_6 = FUNC_2(VAR_5, &VAR_4->fmt.pix);
 if (((void*)0) == VAR_6)
  return -VAR_0;
 return 0;
}
