
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* slave; } ;
struct v4l2_int_device {TYPE_3__ u; } ;
struct omap24xxcam_device {int * sdev; int dev; TYPE_4__* vfd; } ;
struct TYPE_9__ {int minor; } ;
struct TYPE_7__ {TYPE_1__* master; } ;
struct TYPE_6__ {struct omap24xxcam_device* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct omap24xxcam_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_int_device *VAR_1)
{
 struct omap24xxcam_device *VAR_2 = VAR_1->u.slave->master->priv;

 FUNC_1(VAR_2);

 if (VAR_2->vfd) {
  if (VAR_2->vfd->minor == -1) {




   FUNC_2(VAR_2->vfd);
  } else {





   FUNC_3(VAR_2->vfd);
  }
  VAR_2->vfd = ((void*)0);
 }

 FUNC_0(VAR_2->dev, &VAR_0);

 VAR_2->sdev = ((void*)0);
}
