
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int lock; int poisoned; int urb_list; } ;
struct urb {int reject; struct usb_anchor* anchor; int anchor_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct urb*) ;

void FUNC_6(struct urb *VAR_0, struct usb_anchor *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_5(VAR_0);
 FUNC_1(&VAR_0->anchor_list, &VAR_1->urb_list);
 VAR_0->anchor = VAR_1;

 if (FUNC_4(VAR_1->poisoned)) {
  FUNC_0(&VAR_0->reject);
 }

 FUNC_3(&VAR_1->lock, VAR_2);
}
