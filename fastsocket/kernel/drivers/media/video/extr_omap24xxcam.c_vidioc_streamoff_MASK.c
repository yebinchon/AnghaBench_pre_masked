
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {int dummy; } ;
struct omap24xxcam_fh {struct videobuf_queue vbq; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int reset_disable; TYPE_1__* dev; int mutex; int * streaming; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (struct videobuf_queue*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0, void *VAR_1, enum v4l2_buf_type VAR_2)
{
 struct omap24xxcam_fh *VAR_3 = VAR_1;
 struct omap24xxcam_device *VAR_4 = VAR_3->cam;
 struct videobuf_queue *VAR_5 = &VAR_3->vbq;
 int VAR_6;

 FUNC_1(&VAR_4->reset_disable);

 FUNC_2();

 VAR_6 = FUNC_6(VAR_5);
 if (!VAR_6) {
  FUNC_3(&VAR_4->mutex);
  VAR_4->streaming = ((void*)0);
  FUNC_4(&VAR_4->mutex);
  FUNC_5(&VAR_4->dev->kobj, ((void*)0), "streaming");
 }

 FUNC_0(&VAR_4->reset_disable);

 return VAR_6;
}
