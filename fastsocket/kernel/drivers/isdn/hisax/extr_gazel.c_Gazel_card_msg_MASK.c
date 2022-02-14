
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct IsdnCardState {int lock; TYPE_3__* bcs; int subtyp; } ;
struct TYPE_4__ {int tsaxr0; int tsaxr1; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct IsdnCardState *VAR_3, int VAR_4, void *VAR_5)
{
 u_long VAR_6;

 switch (VAR_4) {
  case 129:
   FUNC_3(&VAR_3->lock, VAR_6);
   FUNC_2(VAR_3);
   FUNC_4(&VAR_3->lock, VAR_6);
   return (0);
  case 130:
   FUNC_1(VAR_3);
   return (0);
  case 131:
   FUNC_3(&VAR_3->lock, VAR_6);
   FUNC_0(VAR_3, 1);
   if ((VAR_3->subtyp==VAR_1)||(VAR_3->subtyp==VAR_2)) {
    int VAR_7;
    for (VAR_7=0;VAR_7<(2+VAR_0);VAR_7++) {
     VAR_3->bcs[VAR_7].hw.hscx.tsaxr0 = 0x1f;
     VAR_3->bcs[VAR_7].hw.hscx.tsaxr1 = 0x23;
    }
   }
   FUNC_4(&VAR_3->lock, VAR_6);
   return (0);
  case 128:
   return (0);
 }
 return (0);
}
