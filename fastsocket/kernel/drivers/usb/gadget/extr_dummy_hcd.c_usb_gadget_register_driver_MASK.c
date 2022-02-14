
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; int * bus; } ;
struct usb_gadget_driver {int (* bind ) (TYPE_5__*) ;scalar_t__ speed; TYPE_3__ driver; int setup; } ;
struct TYPE_6__ {int maxpacket; int ep_list; int * ops; scalar_t__ name; } ;
struct dummy_ep {TYPE_1__ ep; int queue; int * desc; TYPE_5__* gadget; int last_io; scalar_t__ setup_stage; scalar_t__ already_seen; scalar_t__ wedged; scalar_t__ halted; } ;
struct TYPE_9__ {TYPE_3__* driver; } ;
struct TYPE_10__ {TYPE_4__ dev; TYPE_1__* ep0; int ep_list; } ;
struct TYPE_7__ {int queue; } ;
struct dummy {int pullup; int lock; TYPE_5__ gadget; struct usb_gadget_driver* driver; TYPE_2__ fifo_req; struct dummy_ep* ep; scalar_t__ devstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct dummy*) ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dummy*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;
 struct dummy* VAR_7 ;
 int FUNC_9 (struct dummy*) ;
 int FUNC_10 (int ) ;

int
FUNC_11 (struct usb_gadget_driver *VAR_8)
{
 struct dummy *VAR_9 = VAR_7;
 int VAR_10, VAR_11;

 if (!VAR_9)
  return -VAR_2;
 if (VAR_9->driver)
  return -VAR_1;
 if (!VAR_8->bind || !VAR_8->setup
   || VAR_8->speed == VAR_3)
  return -VAR_2;






 VAR_9->devstatus = 0;

 FUNC_0 (&VAR_9->gadget.ep_list);
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  struct dummy_ep *VAR_12 = &VAR_9->ep [VAR_11];

  if (!VAR_5 [VAR_11])
   break;
  VAR_12->ep.name = VAR_5 [VAR_11];
  VAR_12->ep.ops = &VAR_4;
  FUNC_3 (&VAR_12->ep.ep_list, &VAR_9->gadget.ep_list);
  VAR_12->halted = VAR_12->wedged = VAR_12->already_seen =
    VAR_12->setup_stage = 0;
  VAR_12->ep.maxpacket = ~0;
  VAR_12->last_io = VAR_6;
  VAR_12->gadget = &VAR_9->gadget;
  VAR_12->desc = ((void*)0);
  FUNC_0 (&VAR_12->queue);
 }

 VAR_9->gadget.ep0 = &VAR_9->ep [0].ep;
 VAR_9->ep [0].ep.maxpacket = 64;
 FUNC_4 (&VAR_9->ep [0].ep.ep_list);
 FUNC_0(&VAR_9->fifo_req.queue);

 VAR_8->driver.bus = ((void*)0);
 VAR_9->driver = VAR_8;
 VAR_9->gadget.dev.driver = &VAR_8->driver;
 FUNC_1 (FUNC_9(VAR_9), "binding gadget driver '%s'\n",
   VAR_8->driver.name);
 VAR_10 = VAR_8->bind(&VAR_9->gadget);
 if (VAR_10) {
  VAR_9->driver = ((void*)0);
  VAR_9->gadget.dev.driver = ((void*)0);
  return VAR_10;
 }


 FUNC_6 (&VAR_9->lock);
 VAR_9->pullup = 1;
 FUNC_5 (VAR_9);
 FUNC_7 (&VAR_9->lock);

 FUNC_10 (FUNC_2 (VAR_9));
 return 0;
}
