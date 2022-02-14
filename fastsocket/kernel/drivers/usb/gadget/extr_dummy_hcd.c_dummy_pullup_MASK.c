
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dummy {int pullup; int lock; } ;


 int FUNC_0 (struct dummy*) ;
 struct dummy* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (struct dummy*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (struct usb_gadget *VAR_0, int VAR_1)
{
 struct dummy *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_1 (VAR_0);
 FUNC_3 (&VAR_2->lock, VAR_3);
 VAR_2->pullup = (VAR_1 != 0);
 FUNC_2 (VAR_2);
 FUNC_4 (&VAR_2->lock, VAR_3);

 FUNC_5 (FUNC_0 (VAR_2));
 return 0;
}
