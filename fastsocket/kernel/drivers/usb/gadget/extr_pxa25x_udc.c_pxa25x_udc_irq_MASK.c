
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int irqs; } ;
struct TYPE_6__ {scalar_t__ speed; } ;
struct pxa25x_udc {TYPE_5__* ep; TYPE_4__ stats; TYPE_1__ gadget; TYPE_3__* driver; } ;
typedef int irqreturn_t ;
struct TYPE_9__ {int pio_irqs; } ;
struct TYPE_7__ {int (* resume ) (TYPE_1__*) ;int (* suspend ) (TYPE_1__*) ;} ;


 int FUNC_0 (int ,char*,...) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct pxa25x_udc*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct pxa25x_udc*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (struct pxa25x_udc*,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_11(int VAR_15, void *VAR_16)
{
 struct pxa25x_udc *VAR_17 = VAR_16;
 int VAR_18;

 VAR_17->stats.irqs++;
 do {
  u32 VAR_19 = VAR_3;

  VAR_18 = 0;


  if (FUNC_10(VAR_19 & VAR_6)) {
   FUNC_9(VAR_6);
   VAR_18 = 1;
   FUNC_0(VAR_0, "USB suspend%s\n", FUNC_4()
    ? "" : "+disconnect");

   if (!FUNC_4())
    FUNC_6(VAR_17, VAR_17->driver);
   else if (VAR_17->gadget.speed != VAR_11
     && VAR_17->driver
     && VAR_17->driver->suspend)
    VAR_17->driver->suspend(&VAR_17->gadget);
   FUNC_1 (VAR_17);
  }


  if (FUNC_10(VAR_19 & VAR_4)) {
   FUNC_9(VAR_4);
   VAR_18 = 1;
   FUNC_0(VAR_0, "USB resume\n");

   if (VAR_17->gadget.speed != VAR_11
     && VAR_17->driver
     && VAR_17->driver->resume
     && FUNC_4())
    VAR_17->driver->resume(&VAR_17->gadget);
  }


  if (FUNC_10(VAR_19 & VAR_5)) {
   FUNC_9(VAR_5);
   VAR_18 = 1;

   if ((VAR_3 & VAR_7) == 0) {
    FUNC_0(VAR_0, "USB reset start\n");




    FUNC_6 (VAR_17, VAR_17->driver);

   } else {
    FUNC_0(VAR_0, "USB reset end\n");
    VAR_17->gadget.speed = VAR_10;
    FUNC_5(&VAR_17->stats, 0, sizeof VAR_17->stats);

   }

  } else {
   u32 VAR_20 = VAR_12 & ~VAR_8;
   u32 VAR_21 = VAR_14 & ~VAR_9;
   int VAR_22;

   if (FUNC_10 (!VAR_20 && !VAR_21))
    continue;

   FUNC_0(VAR_1, "irq %02x.%02x\n", VAR_21, VAR_20);


   if (VAR_20 & VAR_13) {
    VAR_17->ep[0].pio_irqs++;
    FUNC_3(VAR_17);
    VAR_18 = 1;
   }


   for (VAR_22 = 0; VAR_22 < 8; VAR_22++) {
    u32 VAR_23 = 1 << VAR_22;

    if (VAR_22 && (VAR_20 & VAR_23)) {
     FUNC_2(&VAR_17->ep[VAR_22]);
     VAR_12 |= VAR_23;
     VAR_18 = 1;
    }

    if (VAR_21 & VAR_23) {
     FUNC_2(&VAR_17->ep[VAR_22+8]);
     VAR_14 |= VAR_23;
     VAR_18 = 1;
    }

   }
  }



 } while (VAR_18);
 return VAR_2;
}
