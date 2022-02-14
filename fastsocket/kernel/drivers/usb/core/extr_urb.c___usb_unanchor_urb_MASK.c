
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int wait; int urb_list; } ;
struct urb {int anchor_list; int * anchor; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0, struct usb_anchor *VAR_1)
{
 VAR_0->anchor = ((void*)0);
 FUNC_0(&VAR_0->anchor_list);
 FUNC_2(VAR_0);
 if (FUNC_1(&VAR_1->urb_list))
  FUNC_3(&VAR_1->wait);
}
