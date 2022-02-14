
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_gadget {int name; TYPE_3__* ep0; } ;
struct dev_data {int lock; int state; TYPE_2__* req; TYPE_1__* dev; struct usb_gadget* gadget; } ;
struct TYPE_6__ {int maxpacket; struct dev_data* driver_data; } ;
struct TYPE_5__ {int complete; int * context; } ;
struct TYPE_4__ {int bMaxPacketSize0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dev_data*,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct dev_data*) ;
 int VAR_6 ;
 int FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct dev_data*) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (struct usb_gadget*,struct dev_data*) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 struct dev_data* VAR_8 ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_10 (struct usb_gadget *VAR_9)
{
 struct dev_data *VAR_10 = VAR_8;

 if (!VAR_10)
  return -VAR_3;
 if (0 != FUNC_8 (VAR_0, VAR_9->name)) {
  FUNC_4("%s expected %s controller not %s\n",
   VAR_7, VAR_0, VAR_9->name);
  return -VAR_1;
 }

 FUNC_5 (VAR_9, VAR_10);
 VAR_10->gadget = VAR_9;
 VAR_9->ep0->driver_data = VAR_10;
 VAR_10->dev->bMaxPacketSize0 = VAR_9->ep0->maxpacket;


 VAR_10->req = FUNC_9 (VAR_9->ep0, VAR_4);
 if (!VAR_10->req)
  goto enomem;
 VAR_10->req->context = ((void*)0);
 VAR_10->req->complete = VAR_6;

 if (FUNC_1 (VAR_10) < 0)
  goto enomem;

 FUNC_0 (VAR_10, "bound to %s driver\n", VAR_9->name);
 FUNC_6(&VAR_10->lock);
 VAR_10->state = VAR_5;
 FUNC_7(&VAR_10->lock);
 FUNC_3 (VAR_10);
 return 0;

enomem:
 FUNC_2 (VAR_9);
 return -VAR_2;
}
