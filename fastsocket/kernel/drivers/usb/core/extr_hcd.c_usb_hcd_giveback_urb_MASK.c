
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int self; } ;
struct urb {int unlinked; int transfer_flags; scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int status; int reject; int use_count; int (* complete ) (struct urb*) ;int * hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct urb*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct usb_hcd*,struct urb*) ;
 int VAR_2 ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int *,struct urb*,int) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct usb_hcd *VAR_3, struct urb *VAR_4, int VAR_5)
{
 VAR_4->hcpriv = ((void*)0);
 if (FUNC_3(VAR_4->unlinked))
  VAR_5 = VAR_4->unlinked;
 else if (FUNC_3((VAR_4->transfer_flags & VAR_1) &&
   VAR_4->actual_length < VAR_4->transfer_buffer_length &&
   !VAR_5))
  VAR_5 = -VAR_0;

 FUNC_4(VAR_3, VAR_4);
 FUNC_7(&VAR_3->self, VAR_4, VAR_5);
 FUNC_6(VAR_4);


 VAR_4->status = VAR_5;
 VAR_4->complete (VAR_4);
 FUNC_0 (&VAR_4->use_count);
 if (FUNC_3(FUNC_1(&VAR_4->reject)))
  FUNC_8 (&VAR_2);
 FUNC_5 (VAR_4);
}
