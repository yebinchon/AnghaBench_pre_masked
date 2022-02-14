
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct musb {int is_suspended; int lock; int g; TYPE_2__* gadget_driver; TYPE_1__* xceiv; int mregs; } ;
struct TYPE_4__ {int (* suspend ) (int *) ;} ;
struct TYPE_3__ {int state; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct musb *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_2(VAR_2->mregs, VAR_0);
 FUNC_0(3, "devctl %02x\n", VAR_3);

 switch (VAR_2->xceiv->state) {
 case 129:
  if ((VAR_3 & VAR_1) == VAR_1)
   VAR_2->xceiv->state = 128;
  break;
 case 128:
  VAR_2->is_suspended = 1;
  if (VAR_2->gadget_driver && VAR_2->gadget_driver->suspend) {
   FUNC_5(&VAR_2->lock);
   VAR_2->gadget_driver->suspend(&VAR_2->g);
   FUNC_4(&VAR_2->lock);
  }
  break;
 default:



  FUNC_1("unhandled SUSPEND transition (%s)\n",
    FUNC_3(VAR_2));
 }
}
