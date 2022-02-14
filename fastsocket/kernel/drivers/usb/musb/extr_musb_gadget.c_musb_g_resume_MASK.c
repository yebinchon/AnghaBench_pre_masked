
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct musb {int is_active; int lock; int g; TYPE_2__* gadget_driver; TYPE_1__* xceiv; scalar_t__ is_suspended; } ;
struct TYPE_4__ {int (* resume ) (int *) ;} ;
struct TYPE_3__ {int state; } ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct musb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct musb *VAR_0)
{
 VAR_0->is_suspended = 0;
 switch (VAR_0->xceiv->state) {
 case 130:
  break;
 case 128:
 case 129:
  VAR_0->is_active = 1;
  if (VAR_0->gadget_driver && VAR_0->gadget_driver->resume) {
   FUNC_3(&VAR_0->lock);
   VAR_0->gadget_driver->resume(&VAR_0->g);
   FUNC_2(&VAR_0->lock);
  }
  break;
 default:
  FUNC_0("unhandled RESUME transition (%s)\n",
    FUNC_1(VAR_0));
 }
}
