
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ speed; } ;
struct usba_udc {int lock; TYPE_2__* pdev; TYPE_3__ gadget; TYPE_1__* driver; } ;
struct usba_ep {int state; int * desc; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int (* disconnect ) (TYPE_3__*) ;int (* resume ) (TYPE_3__*) ;int (* suspend ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct usba_ep*) ;
 int FUNC_5 (struct usba_udc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_13 (struct usba_udc*,struct usba_ep*) ;
 struct usba_ep* VAR_29 ;
 int VAR_30 ;
 int FUNC_14 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_15 (struct usba_ep*,int ) ;
 int FUNC_16 (struct usba_ep*,int ,int) ;
 int FUNC_17 (struct usba_udc*,int ) ;
 int FUNC_18 (struct usba_udc*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_19(int VAR_31, void *VAR_32)
{
 struct usba_udc *VAR_33 = VAR_32;
 u32 VAR_34;
 u32 VAR_35;
 u32 VAR_36;

 FUNC_6(&VAR_33->lock);

 VAR_34 = FUNC_17(VAR_33, VAR_12);
 FUNC_0(VAR_4, "irq, status=%#08x\n", VAR_34);

 if (VAR_34 & VAR_15) {
  FUNC_11(0);
  FUNC_18(VAR_33, VAR_10, VAR_15);
  FUNC_0(VAR_3, "Suspend detected\n");
  if (VAR_33->gadget.speed != VAR_27
    && VAR_33->driver && VAR_33->driver->suspend) {
   FUNC_7(&VAR_33->lock);
   VAR_33->driver->suspend(&VAR_33->gadget);
   FUNC_6(&VAR_33->lock);
  }
 }

 if (VAR_34 & VAR_24) {
  FUNC_11(1);
  FUNC_18(VAR_33, VAR_10, VAR_24);
  FUNC_0(VAR_3, "Wake Up CPU detected\n");
 }

 if (VAR_34 & VAR_17) {
  FUNC_18(VAR_33, VAR_10, VAR_17);
  FUNC_0(VAR_3, "Resume detected\n");
  if (VAR_33->gadget.speed != VAR_27
    && VAR_33->driver && VAR_33->driver->resume) {
   FUNC_7(&VAR_33->lock);
   VAR_33->driver->resume(&VAR_33->gadget);
   FUNC_6(&VAR_33->lock);
  }
 }

 VAR_35 = FUNC_2(VAR_5, VAR_34);
 if (VAR_35) {
  int VAR_37;

  for (VAR_37 = 1; VAR_37 < VAR_22; VAR_37++)
   if (VAR_35 & (1 << VAR_37))
    FUNC_13(VAR_33, &VAR_29[VAR_37]);
 }

 VAR_36 = FUNC_2(VAR_7, VAR_34);
 if (VAR_36) {
  int VAR_38;

  for (VAR_38 = 0; VAR_38 < VAR_22; VAR_38++)
   if (VAR_36 & (1 << VAR_38)) {
    if (FUNC_4(&VAR_29[VAR_38]))
     FUNC_12(VAR_33, &VAR_29[VAR_38]);
    else
     FUNC_14(VAR_33, &VAR_29[VAR_38]);
   }
 }

 if (VAR_34 & VAR_16) {
  struct usba_ep *VAR_39;

  FUNC_18(VAR_33, VAR_10, VAR_16);
  FUNC_5(VAR_33);

  if (VAR_33->gadget.speed != VAR_27
    && VAR_33->driver->disconnect) {
   VAR_33->gadget.speed = VAR_27;
   FUNC_7(&VAR_33->lock);
   VAR_33->driver->disconnect(&VAR_33->gadget);
   FUNC_6(&VAR_33->lock);
  }

  if (VAR_34 & VAR_21) {
   FUNC_0(VAR_3, "High-speed bus reset detected\n");
   VAR_33->gadget.speed = VAR_26;
  } else {
   FUNC_0(VAR_3, "Full-speed bus reset detected\n");
   VAR_33->gadget.speed = VAR_25;
  }

  VAR_39 = &VAR_29[0];
  VAR_39->desc = &VAR_30;
  VAR_39->state = VAR_28;
  FUNC_16(VAR_39, VAR_1,
    (FUNC_1(VAR_8, VAR_6)
    | FUNC_1(VAR_9, VAR_20)
    | FUNC_1(VAR_0, VAR_14)));
  FUNC_16(VAR_39, VAR_2,
    VAR_18 | VAR_23);
  FUNC_18(VAR_33, VAR_11,
    (FUNC_17(VAR_33, VAR_11)
    | FUNC_1(VAR_7, 1)
    | VAR_15
    | VAR_17));





  if (!(FUNC_15(VAR_39, VAR_1) & VAR_19))
   FUNC_3(&VAR_33->pdev->dev,
     "ODD: EP0 configuration is invalid!\n");
 }

 FUNC_7(&VAR_33->lock);

 return VAR_13;
}
