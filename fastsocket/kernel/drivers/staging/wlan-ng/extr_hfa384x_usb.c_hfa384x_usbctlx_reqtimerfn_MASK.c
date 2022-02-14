
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int state; } ;
typedef TYPE_2__ hfa384x_usbctlx_t ;
struct TYPE_7__ {int lock; int active; } ;
struct TYPE_10__ {int transfer_flags; } ;
struct TYPE_9__ {int req_timer_done; int resp_timer_done; TYPE_1__ ctlxq; int resptimer; TYPE_4__ ctlx_urb; } ;
typedef TYPE_3__ hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 hfa384x_t *VAR_4 = (hfa384x_t *) VAR_3;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->ctlxq.lock, VAR_5);

 VAR_4->req_timer_done = 1;




 if (!FUNC_2(&VAR_4->ctlxq.active)) {




  VAR_4->ctlx_urb.transfer_flags |= VAR_2;
  if (FUNC_5(&VAR_4->ctlx_urb) == -VAR_1) {
   hfa384x_usbctlx_t *VAR_6 = FUNC_1(VAR_4);

   VAR_6->state = VAR_0;
   if (FUNC_0(&VAR_4->resptimer) != 0)
    VAR_4->resp_timer_done = 1;
  }
 }

 FUNC_4(&VAR_4->ctlxq.lock, VAR_5);
}
