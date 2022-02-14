
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int res_irq; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ spt; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; } ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct IsdnCardState *VAR_2, int VAR_3, void *VAR_4)
{
 u_long VAR_5;

 switch (VAR_3) {
  case 129:
   FUNC_4(&VAR_2->lock, VAR_5);
   FUNC_3(VAR_2);
   FUNC_5(&VAR_2->lock, VAR_5);
   return(0);
  case 130:
   FUNC_2(VAR_2);
   return(0);
  case 131:
   FUNC_4(&VAR_2->lock, VAR_5);
   FUNC_3(VAR_2);
   FUNC_1(VAR_2, 1);
   VAR_2->hw.spt.res_irq |= VAR_0;
   FUNC_0(VAR_2->hw.spt.cfg_reg + VAR_1, VAR_2->hw.spt.res_irq);
   FUNC_1(VAR_2, 2);
   FUNC_5(&VAR_2->lock, VAR_5);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
