
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_streamparm {int type; } ;
struct omap24xxcam_fh {struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int mutex; int sdev; scalar_t__ streaming; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (int ,struct v4l2_streamparm*) ;
 int FUNC_4 (int ,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
    struct v4l2_streamparm *VAR_4)
{
 struct omap24xxcam_fh *VAR_5 = VAR_3;
 struct omap24xxcam_device *VAR_6 = VAR_5->cam;
 struct v4l2_streamparm VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6->mutex);
 if (VAR_6->streaming) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7.type = VAR_1;
 VAR_8 = FUNC_3(VAR_6->sdev, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_4(VAR_6->sdev, VAR_4);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_2(VAR_6);




 if (VAR_8)
  FUNC_4(VAR_6->sdev, &VAR_7);

out:
 FUNC_1(&VAR_6->mutex);

 return VAR_8;
}
