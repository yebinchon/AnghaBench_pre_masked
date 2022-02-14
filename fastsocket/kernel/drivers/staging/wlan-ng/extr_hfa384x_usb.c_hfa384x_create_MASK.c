
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_8__ {unsigned long data; int function; } ;
struct TYPE_6__ {int reapable; int completing; int active; int pending; int lock; } ;
struct TYPE_7__ {TYPE_4__ commsqual_timer; int commsqual_bh; int state; int link_status; int ctlx_urb; int tx_urb; int rx_urb; TYPE_4__ reqtimer; TYPE_4__ resptimer; TYPE_4__ throttle; int usb_work; int link_bh; int completion_bh; int reaper_bh; int authq; TYPE_1__ ctlxq; int cmdq; int endp_out; int endp_in; struct usb_device* usb; } ;
typedef TYPE_2__ hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int) ;

void FUNC_11(hfa384x_t *VAR_11, struct usb_device *VAR_12)
{
 FUNC_4(VAR_11, 0, sizeof(hfa384x_t));
 VAR_11->usb = VAR_12;


 VAR_11->endp_in = FUNC_9(VAR_12, 1);
 VAR_11->endp_out = FUNC_10(VAR_12, 2);


 FUNC_3(&VAR_11->cmdq);


 FUNC_6(&VAR_11->ctlxq.lock);
 FUNC_0(&VAR_11->ctlxq.pending);
 FUNC_0(&VAR_11->ctlxq.active);
 FUNC_0(&VAR_11->ctlxq.completing);
 FUNC_0(&VAR_11->ctlxq.reapable);


 FUNC_5(&VAR_11->authq);

 FUNC_7(&VAR_11->reaper_bh,
       VAR_5, (unsigned long)VAR_11);
 FUNC_7(&VAR_11->completion_bh,
       VAR_4, (unsigned long)VAR_11);
 FUNC_1(&VAR_11->link_bh, VAR_10);
 FUNC_1(&VAR_11->usb_work, VAR_2);

 FUNC_2(&VAR_11->throttle);
 VAR_11->throttle.function = VAR_3;
 VAR_11->throttle.data = (unsigned long)VAR_11;

 FUNC_2(&VAR_11->resptimer);
 VAR_11->resptimer.function = VAR_7;
 VAR_11->resptimer.data = (unsigned long)VAR_11;

 FUNC_2(&VAR_11->reqtimer);
 VAR_11->reqtimer.function = VAR_6;
 VAR_11->reqtimer.data = (unsigned long)VAR_11;

 FUNC_8(&VAR_11->rx_urb);
 FUNC_8(&VAR_11->tx_urb);
 FUNC_8(&VAR_11->ctlx_urb);

 VAR_11->link_status = VAR_0;
 VAR_11->state = VAR_1;

 FUNC_1(&VAR_11->commsqual_bh, VAR_8);
 FUNC_2(&VAR_11->commsqual_timer);
 VAR_11->commsqual_timer.data = (unsigned long)VAR_11;
 VAR_11->commsqual_timer.function = VAR_9;
}
