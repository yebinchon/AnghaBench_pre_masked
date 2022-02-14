
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int wValue; scalar_t__ wLength; scalar_t__ wIndex; int bRequest; scalar_t__ bRequestType; } ;
struct pxa_udc {int config; int * pxa_ep; int gadget; TYPE_1__* driver; scalar_t__ last_alternate; scalar_t__ last_interface; int dev; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pxa_udc*,int ) ;
 int FUNC_3 (int *,struct usb_ctrlrequest*) ;

__attribute__((used)) static void FUNC_4(struct pxa_udc *VAR_3, int VAR_4)
{
 struct usb_ctrlrequest VAR_5 ;

 FUNC_0(VAR_3->dev, "config=%d\n", VAR_4);

 VAR_3->config = VAR_4;
 VAR_3->last_interface = 0;
 VAR_3->last_alternate = 0;

 VAR_5.bRequestType = 0;
 VAR_5.bRequest = VAR_1;
 VAR_5.wValue = VAR_4;
 VAR_5.wIndex = 0;
 VAR_5.wLength = 0;

 FUNC_2(VAR_3, VAR_2);
 VAR_3->driver->setup(&VAR_3->gadget, &VAR_5);
 FUNC_1(&VAR_3->pxa_ep[0], VAR_0);
}
