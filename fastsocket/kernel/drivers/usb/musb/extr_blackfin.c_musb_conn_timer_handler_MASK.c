
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct musb {int lock; int mregs; TYPE_2__* config; TYPE_1__* xceiv; } ;
struct TYPE_4__ {int gpio_vrsel; } ;
struct TYPE_3__ {int state; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_12)
{
 struct musb *VAR_13 = (void *)VAR_12;
 unsigned long VAR_14;
 u16 VAR_15;

 FUNC_8(&VAR_13->lock, VAR_14);
 switch (VAR_13->xceiv->state) {
 case 129:
 case 128:

  VAR_15 = FUNC_4(VAR_13->mregs, VAR_0);
  VAR_15 |= VAR_2;
  FUNC_6(VAR_13->mregs, VAR_0, VAR_15);

  VAR_15 = FUNC_4(VAR_13->mregs, VAR_0);
  if (!(VAR_15 & VAR_1)) {
   FUNC_1(VAR_13->config->gpio_vrsel, 1);
   VAR_13->xceiv->state = 128;
  } else {
   FUNC_1(VAR_13->config->gpio_vrsel, 0);


   VAR_15 = FUNC_3(VAR_13->mregs, VAR_4);
   VAR_15 &= ~VAR_6;
   FUNC_5(VAR_13->mregs, VAR_4, VAR_15);

   VAR_15 = VAR_5 | VAR_6;
   FUNC_5(VAR_13->mregs, VAR_3, VAR_15);

   VAR_15 = VAR_8;
   FUNC_5(VAR_13->mregs, VAR_7, VAR_15);
  }
  FUNC_2(&VAR_11, VAR_10 + VAR_9);
  break;

 default:
  FUNC_0(1, "%s state not handled\n", FUNC_7(VAR_13));
  break;
 }
 FUNC_9(&VAR_13->lock, VAR_14);

 FUNC_0(4, "state is %s\n", FUNC_7(VAR_13));
}
