
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int speed; } ;
struct at91_udc {int suspended; struct at91_ep* ep; TYPE_2__ gadget; TYPE_1__* driver; scalar_t__ addr; } ;
struct at91_ep {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* resume ) (TYPE_2__*) ;int (* suspend ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
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
 int VAR_13 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct at91_udc*,int ) ;
 int FUNC_4 (struct at91_udc*,int ,int) ;
 int FUNC_5 (struct at91_ep*) ;
 int FUNC_6 (struct at91_udc*) ;
 int FUNC_7 (struct at91_udc*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_10 (int VAR_14, void *VAR_15)
{
 struct at91_udc *VAR_16 = VAR_15;
 u32 VAR_17 = 5;

 while (VAR_17--) {
  u32 VAR_18;

  VAR_18 = FUNC_3(VAR_16, VAR_7)
   & FUNC_3(VAR_16, VAR_6);
  if (!VAR_18)
   break;


  if (VAR_18 & VAR_0) {
   FUNC_4(VAR_16, VAR_4, ~VAR_11);
   FUNC_4(VAR_16, VAR_5, VAR_11);

   FUNC_4(VAR_16, VAR_3, VAR_0);
   FUNC_4(VAR_16, VAR_3, VAR_0);
   FUNC_2("end bus reset\n");
   VAR_16->addr = 0;
   FUNC_7(VAR_16);


   FUNC_4(VAR_16, FUNC_0(0),
     VAR_1 | VAR_2);
   VAR_16->gadget.speed = VAR_13;
   VAR_16->suspended = 0;
   FUNC_4(VAR_16, VAR_5, FUNC_1(0));
  } else if (VAR_18 & VAR_9) {
   FUNC_4(VAR_16, VAR_4, VAR_9);
   FUNC_4(VAR_16, VAR_5, VAR_8);
   FUNC_4(VAR_16, VAR_3, VAR_9);

   if (VAR_16->suspended)
    continue;
   VAR_16->suspended = 1;







   if (VAR_16->driver && VAR_16->driver->suspend)
    VAR_16->driver->suspend(&VAR_16->gadget);


  } else if (VAR_18 & VAR_8) {
   FUNC_4(VAR_16, VAR_4, VAR_8);
   FUNC_4(VAR_16, VAR_5, VAR_9);
   FUNC_4(VAR_16, VAR_3, VAR_8);

   if (!VAR_16->suspended)
    continue;
   VAR_16->suspended = 0;






   if (VAR_16->driver && VAR_16->driver->resume)
    VAR_16->driver->resume(&VAR_16->gadget);


  } else {
   int VAR_19;
   unsigned VAR_20 = 1;
   struct at91_ep *VAR_21 = &VAR_16->ep[1];

   if (VAR_18 & VAR_20)
    FUNC_6(VAR_16);
   for (VAR_19 = 1; VAR_19 < VAR_12; VAR_19++) {
    VAR_20 <<= 1;
    if (VAR_18 & VAR_20)
     FUNC_5(VAR_21);
    VAR_21++;
   }
  }
 }

 return VAR_10;
}
