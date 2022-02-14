
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_gadget_driver {int (* unbind ) (TYPE_2__*) ;int function; } ;
struct TYPE_5__ {int * driver; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;
struct musb {int lock; scalar_t__ is_active; TYPE_2__ g; struct usb_gadget_driver* gadget_driver; TYPE_3__* xceiv; } ;
struct TYPE_7__ {int state; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct musb*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (struct musb*,int ) ;
 int FUNC_5 (struct musb*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct musb*,struct usb_gadget_driver*) ;
 int FUNC_10 (TYPE_2__*) ;
 struct musb* VAR_2 ;
 int FUNC_11 (int ) ;

int FUNC_12(struct usb_gadget_driver *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;
 struct musb *VAR_6 = VAR_2;

 if (!VAR_3 || !VAR_3->unbind || !VAR_6)
  return -VAR_0;





 FUNC_7(&VAR_6->lock, VAR_4);





 if (VAR_6->gadget_driver == VAR_3) {

  (void) FUNC_2(&VAR_6->g, 0);

  VAR_6->xceiv->state = VAR_1;
  FUNC_9(VAR_6, VAR_3);
  FUNC_6(VAR_6->xceiv, ((void*)0));

  FUNC_0(3, "unregistering driver %s\n", VAR_3->function);
  FUNC_8(&VAR_6->lock, VAR_4);
  VAR_3->unbind(&VAR_6->g);
  FUNC_7(&VAR_6->lock, VAR_4);

  VAR_6->gadget_driver = ((void*)0);
  VAR_6->g.dev.driver = ((void*)0);

  VAR_6->is_active = 0;
  FUNC_4(VAR_6, 0);
 } else
  VAR_5 = -VAR_0;
 FUNC_8(&VAR_6->lock, VAR_4);

 if (FUNC_1(VAR_6) && VAR_5 == 0) {
  FUNC_11(FUNC_5(VAR_6));




 }

 return VAR_5;
}
