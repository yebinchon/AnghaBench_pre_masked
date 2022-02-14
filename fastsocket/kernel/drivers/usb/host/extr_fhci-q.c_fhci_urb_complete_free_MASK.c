
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int transfer_flags; int status; } ;
struct fhci_hcd {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fhci_hcd*) ;
 int FUNC_1 (struct fhci_hcd*,struct urb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct urb*,int ) ;
 int FUNC_5 (int ,struct urb*) ;

void FUNC_6(struct fhci_hcd *VAR_3, struct urb *VAR_4)
{
 FUNC_1(VAR_3, VAR_4);

 if (VAR_4->status == -VAR_0) {
  if (VAR_4->actual_length != VAR_4->transfer_buffer_length &&
    VAR_4->transfer_flags & VAR_2)
   VAR_4->status = -VAR_1;
  else
   VAR_4->status = 0;
 }

 FUNC_5(FUNC_0(VAR_3), VAR_4);

 FUNC_3(&VAR_3->lock);

 FUNC_4(FUNC_0(VAR_3), VAR_4, VAR_4->status);

 FUNC_2(&VAR_3->lock);
}
