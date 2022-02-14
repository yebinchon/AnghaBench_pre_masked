
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_pixel_format {int dummy; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct vpfe_device {int lock; struct v4l2_format fmt; int v4l2_dev; scalar_t__ started; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct vpfe_device* FUNC_4 (struct file*) ;
 struct vpfe_pixel_format* FUNC_5 (struct vpfe_device*,int *) ;
 int FUNC_6 (struct vpfe_device*) ;
 int FUNC_7 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct vpfe_device *VAR_6 = FUNC_4(VAR_3);
 const struct vpfe_pixel_format *VAR_7;
 int VAR_8 = 0;

 FUNC_2(1, VAR_2, &VAR_6->v4l2_dev, "vpfe_s_fmt_vid_cap\n");


 if (VAR_6->started) {
  FUNC_3(&VAR_6->v4l2_dev, "Streaming is started\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_5(VAR_6, &VAR_5->fmt.pix);

 if (((void*)0) == VAR_7)
  return -VAR_1;


 VAR_8 = FUNC_0(&VAR_6->lock);
 if (VAR_8)
  return VAR_8;


 FUNC_7(VAR_6);
 VAR_6->fmt = *VAR_5;

 VAR_8 = FUNC_6(VAR_6);
 FUNC_1(&VAR_6->lock);
 return VAR_8;
}
