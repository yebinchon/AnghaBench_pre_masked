
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_1__*) ;} ;
struct musb_hw_ep {int ep_out; scalar_t__ max_packet_sz_rx; int ep_in; scalar_t__ max_packet_sz_tx; scalar_t__ is_shared_fifo; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct musb {int nr_endpoints; int lock; TYPE_1__ g; int mregs; struct musb_hw_ep* endpoints; scalar_t__ softconnect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct musb*,int ) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct musb *VAR_2, struct usb_gadget_driver *VAR_3)
{
 int VAR_4;
 struct musb_hw_ep *VAR_5;


 if (VAR_2->g.speed == VAR_1)
  VAR_3 = ((void*)0);
 else
  VAR_2->g.speed = VAR_1;


 if (VAR_2->softconnect) {
  VAR_2->softconnect = 0;
  FUNC_1(VAR_2, 0);
 }
 FUNC_2(VAR_2);




 if (VAR_3) {
  for (VAR_4 = 0, VAR_5 = VAR_2->endpoints;
    VAR_4 < VAR_2->nr_endpoints;
    VAR_4++, VAR_5++) {
   FUNC_0(VAR_2->mregs, VAR_4);
   if (VAR_5->is_shared_fifo ) {
    FUNC_3(&VAR_5->ep_in, -VAR_0);
   } else {
    if (VAR_5->max_packet_sz_tx)
     FUNC_3(&VAR_5->ep_in, -VAR_0);
    if (VAR_5->max_packet_sz_rx)
     FUNC_3(&VAR_5->ep_out, -VAR_0);
   }
  }

  FUNC_5(&VAR_2->lock);
  VAR_3->disconnect(&VAR_2->g);
  FUNC_4(&VAR_2->lock);
 }
}
