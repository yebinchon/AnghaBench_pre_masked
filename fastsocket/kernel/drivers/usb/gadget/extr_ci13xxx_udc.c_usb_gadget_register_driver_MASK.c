
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * bus; } ;
struct usb_gadget_driver {int (* bind ) (TYPE_4__*) ;TYPE_2__ driver; int * resume; int * suspend; int * disconnect; int * setup; int * unbind; } ;
struct ci13xxx_td {int dummy; } ;
struct ci13xxx_qh {int dummy; } ;
struct TYPE_6__ {int ep_list; int maxpacket; int * ops; int name; } ;
struct ci13xxx_ep {TYPE_3__* qh; TYPE_1__ ep; int name; int * td_pool; TYPE_5__* device; int lock; } ;
struct TYPE_10__ {TYPE_2__* driver; } ;
struct TYPE_9__ {TYPE_5__ dev; int * ops; int ep_list; TYPE_1__* ep0; } ;
struct ci13xxx {int lock; struct ci13xxx_ep* ci13xxx_ep; TYPE_4__ gadget; int * qh_pool; int * td_pool; struct usb_gadget_driver* driver; } ;
struct TYPE_8__ {int dma; int * ptr; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 size_t VAR_7 ;
 unsigned long VAR_8 ;
 struct ci13xxx* VAR_9 ;
 int * FUNC_1 (int *,int ,int *) ;
 void* FUNC_2 (char*,TYPE_5__*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 unsigned long VAR_10 ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,int,char*,int) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (char*,struct usb_gadget_driver*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct usb_gadget_driver*) ;

int FUNC_14(struct usb_gadget_driver *VAR_13)
{
 struct ci13xxx *VAR_14 = VAR_9;
 unsigned long VAR_15, VAR_16, VAR_17;
 int VAR_18 = -VAR_4;

 FUNC_12("%p", VAR_13);

 if (VAR_13 == ((void*)0) ||
     VAR_13->bind == ((void*)0) ||
     VAR_13->unbind == ((void*)0) ||
     VAR_13->setup == ((void*)0) ||
     VAR_13->disconnect == ((void*)0) ||
     VAR_13->suspend == ((void*)0) ||
     VAR_13->resume == ((void*)0))
  return -VAR_2;
 else if (VAR_14 == ((void*)0))
  return -VAR_3;
 else if (VAR_14->driver != ((void*)0))
  return -VAR_1;


 VAR_14->qh_pool = FUNC_2("ci13xxx_qh", &VAR_14->gadget.dev,
           sizeof(struct ci13xxx_qh),
           64, VAR_6);
 if (VAR_14->qh_pool == ((void*)0))
  return -VAR_4;

 VAR_14->td_pool = FUNC_2("ci13xxx_td", &VAR_14->gadget.dev,
           sizeof(struct ci13xxx_td),
           64, VAR_6);
 if (VAR_14->td_pool == ((void*)0)) {
  FUNC_3(VAR_14->qh_pool);
  VAR_14->qh_pool = ((void*)0);
  return -VAR_4;
 }

 FUNC_9(VAR_14->lock, VAR_17);

 FUNC_5("hw_ep_max = %d", VAR_10);

 VAR_14->driver = VAR_13;
 VAR_14->gadget.ops = ((void*)0);
 VAR_14->gadget.dev.driver = ((void*)0);

 VAR_18 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  struct ci13xxx_ep *VAR_19 = &VAR_14->ci13xxx_ep[VAR_15];

  FUNC_8(VAR_19->name, sizeof(VAR_19->name), "ep%i", (int)VAR_15);

  VAR_19->lock = VAR_14->lock;
  VAR_19->device = &VAR_14->gadget.dev;
  VAR_19->td_pool = VAR_14->td_pool;

  VAR_19->ep.name = VAR_19->name;
  VAR_19->ep.ops = &VAR_11;
  VAR_19->ep.maxpacket = VAR_0;


  for (VAR_16 = VAR_7; VAR_16 <= VAR_8; VAR_16++) {
   FUNC_0(&VAR_19->qh[VAR_16].queue);
   VAR_19->qh[VAR_16].ptr = FUNC_1(VAR_14->qh_pool,
       VAR_5,
       &VAR_19->qh[VAR_16].dma);
   if (VAR_19->qh[VAR_16].ptr == ((void*)0))
    VAR_18 = -VAR_4;
   else
    FUNC_7(VAR_19->qh[VAR_16].ptr, 0,
           sizeof(*VAR_19->qh[VAR_16].ptr));
  }
  if (VAR_15 == 0)
   VAR_14->gadget.ep0 = &VAR_19->ep;
  else
   FUNC_6(&VAR_19->ep.ep_list, &VAR_14->gadget.ep_list);
 }
 if (VAR_18)
  goto done;


 VAR_13->driver.bus = ((void*)0);
 VAR_14->gadget.ops = &VAR_12;
 VAR_14->gadget.dev.driver = &VAR_13->driver;

 FUNC_10(VAR_14->lock, VAR_17);
 VAR_18 = VAR_13->bind(&VAR_14->gadget);
 FUNC_9(VAR_14->lock, VAR_17);

 if (VAR_18) {
  VAR_14->gadget.ops = ((void*)0);
  VAR_14->gadget.dev.driver = ((void*)0);
  goto done;
 }

 VAR_18 = FUNC_4(VAR_14->ci13xxx_ep[0].qh[VAR_7].dma);

 done:
 FUNC_10(VAR_14->lock, VAR_17);
 if (VAR_18)
  FUNC_13(VAR_13);
 return VAR_18;
}
