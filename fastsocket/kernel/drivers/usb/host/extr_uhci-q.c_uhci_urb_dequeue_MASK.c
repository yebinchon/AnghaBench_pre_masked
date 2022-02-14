
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb_priv {struct uhci_qh* qh; } ;
struct urb {int start_frame; scalar_t__ hcpriv; } ;
struct uhci_qh {scalar_t__ type; int unlink_frame; } ;
struct uhci_hcd {int lock; int frame_number; } ;


 scalar_t__ VAR_0 ;
 struct uhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct uhci_hcd*) ;
 int FUNC_6 (struct uhci_hcd*,struct urb*) ;
 int FUNC_7 (struct uhci_hcd*,struct uhci_qh*) ;
 int FUNC_8 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_1, struct urb *VAR_2, int VAR_3)
{
 struct uhci_hcd *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 struct uhci_qh *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  goto done;

 VAR_6 = ((struct urb_priv *) VAR_2->hcpriv)->qh;


 if (VAR_6->type == VAR_0) {
  FUNC_6(VAR_4, VAR_2);
  FUNC_1();


  FUNC_5(VAR_4);
  if (FUNC_4(VAR_2->start_frame, VAR_4->frame_number))
   VAR_6->unlink_frame = VAR_4->frame_number;
 }

 FUNC_7(VAR_4, VAR_6);

done:
 FUNC_3(&VAR_4->lock, VAR_5);
 return VAR_7;
}
