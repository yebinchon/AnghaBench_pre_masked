
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_streamparm {int dummy; } ;
struct omap24xxcam_fh {struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int mutex; int sdev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
    struct v4l2_streamparm *VAR_2) {
 struct omap24xxcam_fh *VAR_3 = VAR_1;
 struct omap24xxcam_device *VAR_4 = VAR_3->cam;
 int VAR_5;

 FUNC_0(&VAR_4->mutex);
 VAR_5 = FUNC_2(VAR_4->sdev, VAR_2);
 FUNC_1(&VAR_4->mutex);

 return VAR_5;
}
