
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb {int port1_status; int is_active; int lock; TYPE_1__* xceiv; int mregs; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct musb*) ;
 int FUNC_2 (struct musb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;


 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_10)
{
 struct musb *VAR_11 = (void *)VAR_10;
 unsigned long VAR_12;



 u8 VAR_13;

 FUNC_6(&VAR_11->lock, VAR_12);

 VAR_13 = FUNC_3(VAR_11->mregs, VAR_0);

 switch (VAR_11->xceiv->state) {
 case 128:
  VAR_13 &= ~VAR_2;
  FUNC_5(VAR_11->mregs, VAR_0, VAR_13);

  VAR_13 = FUNC_3(VAR_11->mregs, VAR_0);
  if (VAR_13 & VAR_1) {
   VAR_11->xceiv->state = VAR_7;
   FUNC_1(VAR_11);
  } else {
   VAR_11->xceiv->state = VAR_6;
   FUNC_2(VAR_11);
  }
  break;
 default:
  break;
 }
 FUNC_7(&VAR_11->lock, VAR_12);
}
