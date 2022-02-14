
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct ed* hcpriv; TYPE_1__ desc; } ;
struct usb_hcd {int state; } ;
struct ohci_hcd {int zf_delay; int lock; struct ed* ed_to_check; int eds_scheduled; } ;
struct ed {int state; scalar_t__ type; int dummy; int td_list; } ;




 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ohci_hcd*,struct ed*) ;
 int FUNC_2 (struct ohci_hcd*,int ) ;
 struct ohci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ohci_hcd*,char*,struct ed*,int ,int,char*) ;
 int FUNC_6 (struct ohci_hcd*,char*) ;
 scalar_t__ FUNC_7 (struct ohci_hcd*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct ohci_hcd*,int ) ;

__attribute__((used)) static void
FUNC_12 (struct usb_hcd *VAR_1, struct usb_host_endpoint *VAR_2)
{
 struct ohci_hcd *VAR_3 = FUNC_3 (VAR_1);
 unsigned long VAR_4;
 struct ed *VAR_5 = VAR_2->hcpriv;
 unsigned VAR_6 = 1000;




 if (!VAR_5)
  return;

rescan:
 FUNC_9 (&VAR_3->lock, VAR_4);

 if (!FUNC_0 (VAR_1->state)) {
sanitize:
  VAR_5->state = 129;
  if (FUNC_7(VAR_3) && VAR_5->type == VAR_0)
   VAR_3->eds_scheduled--;
  FUNC_2 (VAR_3, 0);
 }

 switch (VAR_5->state) {
 case 128:

  if (VAR_6-- == 0) {
   FUNC_6(VAR_3, "ED unlink timeout\n");
   if (FUNC_7(VAR_3)) {
    FUNC_6(VAR_3, "Attempting ZF TD recovery\n");
    VAR_3->ed_to_check = VAR_5;
    VAR_3->zf_delay = 2;
   }
   goto sanitize;
  }
  FUNC_10 (&VAR_3->lock, VAR_4);
  FUNC_8(1);
  goto rescan;
 case 129:
  if (FUNC_4 (&VAR_5->td_list)) {
   FUNC_11 (VAR_3, VAR_5->dummy);
   FUNC_1 (VAR_3, VAR_5);
   break;
  }

 default:



  FUNC_5 (VAR_3, "leak ed %p (#%02x) state %d%s\n",
   VAR_5, VAR_2->desc.bEndpointAddress, VAR_5->state,
   FUNC_4 (&VAR_5->td_list) ? "" : " (has tds)");
  FUNC_11 (VAR_3, VAR_5->dummy);
  break;
 }
 VAR_2->hcpriv = ((void*)0);
 FUNC_10 (&VAR_3->lock, VAR_4);
 return;
}
