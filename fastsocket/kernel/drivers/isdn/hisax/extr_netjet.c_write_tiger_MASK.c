
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_8__ {int irqstat0; int last_is0; } ;
struct TYPE_9__ {TYPE_3__ njet; } ;
struct IsdnCardState {TYPE_4__ hw; TYPE_5__* bcs; } ;
struct TYPE_6__ {int* send; } ;
struct TYPE_7__ {TYPE_1__ tiger; } ;
struct TYPE_10__ {scalar_t__ mode; TYPE_2__ hw; int err_tx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct IsdnCardState*,char*,int,int) ;
 int FUNC_1 (TYPE_5__*,int*,int) ;

void FUNC_2(struct IsdnCardState *VAR_5) {
 u_int *VAR_6, VAR_7 = VAR_2/2;

 if ((VAR_5->hw.njet.irqstat0 & VAR_5->hw.njet.last_is0) & VAR_3) {
  FUNC_0(VAR_5,"tiger warn write double dma %x/%x",
   VAR_5->hw.njet.irqstat0, VAR_5->hw.njet.last_is0);






  return;
 } else {
  VAR_5->hw.njet.last_is0 &= ~VAR_3;
  VAR_5->hw.njet.last_is0 |= (VAR_5->hw.njet.irqstat0 & VAR_3);
 }
 if (VAR_5->hw.njet.irqstat0 & VAR_4)
  VAR_6 = VAR_5->bcs[0].hw.tiger.send + VAR_2 - 1;
 else
  VAR_6 = VAR_5->bcs[0].hw.tiger.send + VAR_7 - 1;
 if ((VAR_5->bcs[0].mode == VAR_0) || (VAR_5->bcs[0].mode == VAR_1))
  FUNC_1(VAR_5->bcs, VAR_6, VAR_7);
 if ((VAR_5->bcs[1].mode == VAR_0) || (VAR_5->bcs[1].mode == VAR_1))
  FUNC_1(VAR_5->bcs + 1, VAR_6, VAR_7);
 VAR_5->hw.njet.irqstat0 &= ~VAR_3;
}
