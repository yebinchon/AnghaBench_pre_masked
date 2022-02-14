
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct lh7a40x_udc {int lock; TYPE_1__ gadget; struct lh7a40x_ep* ep; } ;
struct lh7a40x_ep {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lh7a40x_ep*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct lh7a40x_udc*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct lh7a40x_udc *VAR_3,
     struct usb_gadget_driver *VAR_4)
{
 int VAR_5;


 if (VAR_3->gadget.speed == VAR_2)
  VAR_4 = 0;
 VAR_3->gadget.speed = VAR_2;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct lh7a40x_ep *VAR_6 = &VAR_3->ep[VAR_5];
  VAR_6->stopped = 1;

  FUNC_5(VAR_5);
  FUNC_0(VAR_6, -VAR_0);
 }


 if (VAR_4) {
  FUNC_2(&VAR_3->lock);
  VAR_4->disconnect(&VAR_3->gadget);
  FUNC_1(&VAR_3->lock);
 }


 FUNC_4(VAR_3);
}
