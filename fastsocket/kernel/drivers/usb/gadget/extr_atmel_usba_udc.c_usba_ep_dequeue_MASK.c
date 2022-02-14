
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usba_udc {int lock; } ;
struct usba_request {int queue; scalar_t__ using_dma; } ;
struct TYPE_4__ {int * next; } ;
struct TYPE_3__ {int name; } ;
struct usba_ep {int last_dma_status; int index; TYPE_2__ queue; TYPE_1__ ep; struct usba_udc* udc; } ;
struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;


 int FUNC_0 (int,char*,int ,struct usba_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usba_ep*,struct usba_request*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usba_ep*,int*) ;
 int FUNC_6 (struct usba_ep*) ;
 struct usba_ep* FUNC_7 (struct usb_ep*) ;
 struct usba_request* FUNC_8 (struct usb_request*) ;
 int FUNC_9 (struct usba_ep*,int ) ;
 int FUNC_10 (struct usba_ep*,struct usba_request*,int) ;
 int FUNC_11 (struct usba_udc*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct usb_ep *VAR_6, struct usb_request *VAR_7)
{
 struct usba_ep *VAR_8 = FUNC_7(VAR_6);
 struct usba_udc *VAR_9 = VAR_8->udc;
 struct usba_request *VAR_10 = FUNC_8(VAR_7);
 unsigned long VAR_11;
 u32 VAR_12;

 FUNC_0(VAR_0 | VAR_1, "ep_dequeue: %s, req %p\n",
   VAR_8->ep.name, VAR_10);

 FUNC_3(&VAR_9->lock, VAR_11);

 if (VAR_10->using_dma) {




  if (VAR_8->queue.next == &VAR_10->queue) {
   VAR_12 = FUNC_9(VAR_8, VAR_4);
   if (VAR_12 & VAR_5)
    FUNC_5(VAR_8, &VAR_12);





   FUNC_11(VAR_9, VAR_3, 1 << VAR_8->index);

   FUNC_10(VAR_8, VAR_10, VAR_12);
  }
 }





 FUNC_1(&VAR_10->queue);

 FUNC_2(VAR_8, VAR_10, -VAR_2);


 FUNC_6(VAR_8);
 FUNC_4(&VAR_9->lock, VAR_11);

 return 0;
}
