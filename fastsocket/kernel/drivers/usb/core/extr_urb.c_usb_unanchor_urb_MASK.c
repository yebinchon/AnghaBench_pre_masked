
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int lock; } ;
struct urb {struct usb_anchor* anchor; } ;


 int FUNC_0 (struct urb*,struct usb_anchor*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct urb *VAR_0)
{
 unsigned long VAR_1;
 struct usb_anchor *VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = VAR_0->anchor;
 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->lock, VAR_1);





 if (FUNC_1(VAR_2 == VAR_0->anchor))
  FUNC_0(VAR_0, VAR_2);
 FUNC_3(&VAR_2->lock, VAR_1);
}
