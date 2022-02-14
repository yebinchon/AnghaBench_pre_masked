
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct soc_camera_host {TYPE_2__ v4l2_dev; struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_6__ {int parent; } ;
struct soc_camera_device {int devnum; TYPE_3__ dev; } ;
struct sh_mobile_ceu_dev {struct soc_camera_device* icd; int lock; TYPE_1__* active; } ;
struct TYPE_4__ {int done; int state; int queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sh_mobile_ceu_dev*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct soc_camera_host* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct soc_camera_device *VAR_3)
{
 struct soc_camera_host *VAR_4 = FUNC_7(VAR_3->dev.parent);
 struct sh_mobile_ceu_dev *VAR_5 = VAR_4->priv;
 unsigned long VAR_6;

 FUNC_0(VAR_3 != VAR_5->icd);


 FUNC_1(VAR_5, VAR_1, 0);
 FUNC_1(VAR_5, VAR_0, 1 << 16);


 FUNC_5(&VAR_5->lock, VAR_6);
 if (VAR_5->active) {
  FUNC_3(&VAR_5->active->queue);
  VAR_5->active->state = VAR_2;
  FUNC_8(&VAR_5->active->done);
  VAR_5->active = ((void*)0);
 }
 FUNC_6(&VAR_5->lock, VAR_6);

 FUNC_4(VAR_4->v4l2_dev.dev);

 FUNC_2(VAR_3->dev.parent,
   "SuperH Mobile CEU driver detached from camera %d\n",
   VAR_3->devnum);

 VAR_5->icd = ((void*)0);
}
