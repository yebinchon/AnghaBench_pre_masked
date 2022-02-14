
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
struct TYPE_8__ {int free; int * send; int * s_end; int * sendp; } ;
struct TYPE_9__ {TYPE_3__ tiger; } ;
struct BCState {scalar_t__ mode; int Flag; int channel; TYPE_5__* cs; TYPE_4__ hw; int tx_skb; } ;
struct TYPE_6__ {scalar_t__ base; } ;
struct TYPE_7__ {TYPE_1__ njet; } ;
struct TYPE_10__ {int debug; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct BCState*) ;
 scalar_t__ FUNC_4 (struct BCState*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct BCState*,int *,int) ;

void FUNC_8(struct BCState *VAR_8)
{
 register u_int *VAR_9, *VAR_10;
 register int VAR_11;

 if (!VAR_8->tx_skb)
  return;
 if (VAR_8->cs->debug & VAR_4)
  FUNC_1(VAR_8->cs,"tiger fill_dma1: c%d %4x", VAR_8->channel,
   VAR_8->Flag);
 if (FUNC_6(VAR_0, &VAR_8->Flag))
  return;
 if (VAR_8->mode == VAR_5) {
  if (FUNC_3(VAR_8))
   return;
 }
 else {
  if (FUNC_4(VAR_8))
   return;
 };
 if (VAR_8->cs->debug & VAR_4)
  FUNC_1(VAR_8->cs,"tiger fill_dma2: c%d %4x", VAR_8->channel,
   VAR_8->Flag);
 if (FUNC_5(VAR_3, &VAR_8->Flag)) {
  FUNC_7(VAR_8, VAR_8->hw.tiger.sendp, VAR_8->hw.tiger.free);
 } else if (FUNC_5(VAR_2, &VAR_8->Flag)) {
  VAR_9 = FUNC_0(FUNC_2(VAR_8->cs->hw.njet.base + VAR_6));
  VAR_10 = VAR_8->hw.tiger.sendp;
  if (VAR_9 == VAR_8->hw.tiger.s_end)
   VAR_9 = VAR_8->hw.tiger.send -1;
  if (VAR_10 == VAR_8->hw.tiger.s_end)
   VAR_10 = VAR_8->hw.tiger.send -1;
  VAR_11 = VAR_9 - VAR_10;
  if (VAR_11 <0) {
   FUNC_7(VAR_8, VAR_8->hw.tiger.sendp, VAR_8->hw.tiger.free);
  } else {
   VAR_9++;
   VAR_11++;
   if (VAR_9 > VAR_8->hw.tiger.s_end)
    VAR_9 = VAR_8->hw.tiger.send;
   VAR_9++;
   VAR_11++;
   if (VAR_9 > VAR_8->hw.tiger.s_end)
    VAR_9 = VAR_8->hw.tiger.send;
   FUNC_7(VAR_8, VAR_9, VAR_8->hw.tiger.free - VAR_11);
  }
 } else if (FUNC_5(VAR_1, &VAR_8->Flag)) {
  VAR_9 = FUNC_0(FUNC_2(VAR_8->cs->hw.njet.base + VAR_6));
  VAR_11 = VAR_8->hw.tiger.s_end - VAR_9;
  if (VAR_11 < 2) {
   VAR_9 = VAR_8->hw.tiger.send + 1;
   VAR_11 = VAR_7/2 - 2;
  } else {
   VAR_9++;
   VAR_9++;
   if (VAR_11 <= (VAR_7/2))
    VAR_11 += VAR_7/2;
   VAR_11--;
   VAR_11--;
  }
  FUNC_7(VAR_8, VAR_9, VAR_11);
 }
 if (VAR_8->cs->debug & VAR_4)
  FUNC_1(VAR_8->cs,"tiger fill_dma3: c%d %4x", VAR_8->channel,
   VAR_8->Flag);
}
