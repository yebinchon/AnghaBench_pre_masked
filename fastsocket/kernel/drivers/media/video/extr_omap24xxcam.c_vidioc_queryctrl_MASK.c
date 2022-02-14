
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int dummy; } ;
struct omap24xxcam_fh {struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int sdev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
       struct v4l2_queryctrl *VAR_2)
{
 struct omap24xxcam_fh *VAR_3 = VAR_1;
 struct omap24xxcam_device *VAR_4 = VAR_3->cam;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->sdev, VAR_2);

 return VAR_5;
}
