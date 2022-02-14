
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int devstatus; int lock; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct usba_udc* FUNC_2 (struct usb_gadget*) ;

__attribute__((used)) static int
FUNC_3(struct usb_gadget *VAR_1, int VAR_2)
{
 struct usba_udc *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);
 if (VAR_2)
  VAR_3->devstatus |= 1 << VAR_0;
 else
  VAR_3->devstatus &= ~(1 << VAR_0);
 FUNC_1(&VAR_3->lock, VAR_4);

 return 0;
}
