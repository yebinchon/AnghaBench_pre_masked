
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* priv; } ;
typedef TYPE_3__ wlandevice_t ;
struct TYPE_6__ {int lock; } ;
struct TYPE_9__ {TYPE_1__ ctlxq; int usb_work; int usb_flags; TYPE_2__* wlandev; } ;
typedef TYPE_4__ hfa384x_t ;
struct TYPE_7__ {int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(wlandevice_t *VAR_2)
{
 hfa384x_t *VAR_3 = VAR_2->priv;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->ctlxq.lock, VAR_4);

 if (!VAR_3->wlandev->hwremoved &&

     (!FUNC_3(VAR_1, &VAR_3->usb_flags) |
      !FUNC_3(VAR_0, &VAR_3->usb_flags))) {
  FUNC_0(&VAR_3->usb_work);
 }

 FUNC_2(&VAR_3->ctlxq.lock, VAR_4);
}
