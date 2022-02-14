
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap24xxcam_fh {int vbq; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {TYPE_2__* sdev; int mutex; int users; int reset_disable; TYPE_1__* dev; struct file* streaming; } ;
struct file {struct omap24xxcam_fh* private_data; } ;
struct TYPE_4__ {int module; } ;
struct TYPE_3__ {int kobj; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct omap24xxcam_fh*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct omap24xxcam_device*) ;
 int FUNC_9 (struct omap24xxcam_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,char*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_0)
{
 struct omap24xxcam_fh *VAR_1 = VAR_0->private_data;
 struct omap24xxcam_device *VAR_2 = VAR_1->cam;

 FUNC_2(&VAR_2->reset_disable);

 FUNC_3();


 FUNC_12(&VAR_1->vbq);

 FUNC_6(&VAR_2->mutex);
 if (VAR_2->streaming == VAR_0) {
  VAR_2->streaming = ((void*)0);
  FUNC_7(&VAR_2->mutex);
  FUNC_11(&VAR_2->dev->kobj, ((void*)0), "streaming");
 } else {
  FUNC_7(&VAR_2->mutex);
 }

 FUNC_0(&VAR_2->reset_disable);

 FUNC_10(&VAR_1->vbq);







 FUNC_3();

 FUNC_6(&VAR_2->mutex);
 if (FUNC_1(&VAR_2->users) == 0) {
  FUNC_9(VAR_2);
  FUNC_8(VAR_2);
 }
 FUNC_7(&VAR_2->mutex);

 VAR_0->private_data = ((void*)0);

 FUNC_5(VAR_2->sdev->module);
 FUNC_4(VAR_1);

 return 0;
}
