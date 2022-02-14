
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_gadget_driver {int (* unbind ) (TYPE_4__*) ;int * resume; int * suspend; int * disconnect; int * setup; int * bind; } ;
struct TYPE_7__ {int ep_list; } ;
struct ci13xxx_ep {TYPE_3__* qh; TYPE_2__ ep; } ;
struct TYPE_6__ {int * driver; } ;
struct TYPE_9__ {int * ep0; TYPE_1__ dev; int * ops; } ;
struct ci13xxx {int * qh_pool; int * td_pool; int lock; struct usb_gadget_driver* driver; TYPE_4__ gadget; struct ci13xxx_ep* ci13xxx_ep; } ;
struct TYPE_8__ {int dma; int * ptr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 struct ci13xxx* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (char*,struct usb_gadget_driver*) ;

int FUNC_10(struct usb_gadget_driver *VAR_5)
{
 struct ci13xxx *VAR_6 = VAR_3;
 unsigned long VAR_7, VAR_8, VAR_9;

 FUNC_9("%p", VAR_5);

 if (VAR_5 == ((void*)0) ||
     VAR_5->bind == ((void*)0) ||
     VAR_5->unbind == ((void*)0) ||
     VAR_5->setup == ((void*)0) ||
     VAR_5->disconnect == ((void*)0) ||
     VAR_5->suspend == ((void*)0) ||
     VAR_5->resume == ((void*)0) ||
     VAR_5 != VAR_6->driver)
  return -VAR_0;

 FUNC_6(VAR_6->lock, VAR_9);

 FUNC_3(0);


 if (VAR_6->gadget.ops != ((void*)0)) {
  FUNC_0(&VAR_6->gadget);

  FUNC_7(VAR_6->lock, VAR_9);
  VAR_5->unbind(&VAR_6->gadget);
  FUNC_6(VAR_6->lock, VAR_9);

  VAR_6->gadget.ops = ((void*)0);
  VAR_6->gadget.dev.driver = ((void*)0);
 }


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct ci13xxx_ep *VAR_10 = &VAR_6->ci13xxx_ep[VAR_7];

  if (VAR_7 == 0)
   VAR_6->gadget.ep0 = ((void*)0);
  else if (!FUNC_5(&VAR_10->ep.ep_list))
   FUNC_4(&VAR_10->ep.ep_list);

  for (VAR_8 = VAR_1; VAR_8 <= VAR_2; VAR_8++)
   if (VAR_10->qh[VAR_8].ptr != ((void*)0))
    FUNC_2(VAR_6->qh_pool,
           VAR_10->qh[VAR_8].ptr, VAR_10->qh[VAR_8].dma);
 }

 VAR_6->driver = ((void*)0);

 FUNC_7(VAR_6->lock, VAR_9);

 if (VAR_6->td_pool != ((void*)0)) {
  FUNC_1(VAR_6->td_pool);
  VAR_6->td_pool = ((void*)0);
 }
 if (VAR_6->qh_pool != ((void*)0)) {
  FUNC_1(VAR_6->qh_pool);
  VAR_6->qh_pool = ((void*)0);
 }

 return 0;
}
