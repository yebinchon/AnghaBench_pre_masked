
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {scalar_t__ speed; } ;
struct omap_udc {int devstat; int lock; TYPE_3__ gadget; TYPE_2__* driver; scalar_t__ transceiver; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {int (* resume ) (TYPE_3__*) ;int (* suspend ) (TYPE_3__*) ;TYPE_1__ driver; int (* disconnect ) (TYPE_3__*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct omap_udc*) ;
 int FUNC_8 (struct omap_udc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct omap_udc*) ;
 int FUNC_15 (struct omap_udc*) ;

__attribute__((used)) static void FUNC_16(struct omap_udc *VAR_15, u16 VAR_16)
{
 u16 VAR_17, VAR_18;

 VAR_17 = FUNC_4(VAR_5);
 VAR_18 = VAR_17 ^ VAR_15->devstat;
 VAR_15->devstat = VAR_17;

 if (VAR_18 & (VAR_12|VAR_2)) {
  FUNC_14(VAR_15);

  if (VAR_18 & VAR_2) {



   if (VAR_17 & VAR_2) {
    VAR_15->gadget.speed = VAR_13;
    FUNC_2("connect\n");
    if (!VAR_15->transceiver)
     FUNC_8(VAR_15);

   } else if (VAR_15->gadget.speed != VAR_14) {
    VAR_15->gadget.speed = VAR_14;
    if (!VAR_15->transceiver)
     FUNC_7(VAR_15);
    FUNC_0("disconnect, gadget %s\n",
     VAR_15->driver->driver.name);
    if (VAR_15->driver->disconnect) {
     FUNC_10(&VAR_15->lock);
     VAR_15->driver->disconnect(&VAR_15->gadget);
     FUNC_9(&VAR_15->lock);
    }
   }
   VAR_18 &= ~VAR_2;
  }

  if (VAR_18 & VAR_12) {
   if (VAR_17 & VAR_12) {
    FUNC_2("RESET=1\n");
   } else {
    VAR_15->gadget.speed = VAR_13;
    FUNC_1("USB reset done, gadget %s\n",
     VAR_15->driver->driver.name);

    FUNC_5(VAR_7 | VAR_8,
      VAR_9);
   }
   VAR_18 &= ~VAR_12;
  }
 }
 if (VAR_18 & VAR_11) {
  if (VAR_15->gadget.speed != VAR_14) {

   if (VAR_17 & VAR_11) {
    FUNC_2("suspend\n");
    FUNC_15(VAR_15);

    if (VAR_15->gadget.speed == VAR_13
      && VAR_15->driver->suspend) {
     FUNC_10(&VAR_15->lock);
     VAR_15->driver->suspend(&VAR_15->gadget);
     FUNC_9(&VAR_15->lock);
    }
    if (VAR_15->transceiver)
     FUNC_6(VAR_15->transceiver, 1);
   } else {
    FUNC_2("resume\n");
    if (VAR_15->transceiver)
     FUNC_6(VAR_15->transceiver, 0);
    if (VAR_15->gadget.speed == VAR_13
      && VAR_15->driver->resume) {
     FUNC_10(&VAR_15->lock);
     VAR_15->driver->resume(&VAR_15->gadget);
     FUNC_9(&VAR_15->lock);
    }
   }
  }
  VAR_18 &= ~VAR_11;
 }
 if (!FUNC_3() && (VAR_18 & VAR_0)) {
  FUNC_15(VAR_15);
  VAR_18 &= ~VAR_0;
 }

 VAR_18 &= ~(VAR_3|VAR_4|VAR_1);
 if (VAR_18)
  FUNC_2("devstat %03x, ignore change %03x\n",
   VAR_17, VAR_18);

 FUNC_5(VAR_6, VAR_10);
}
