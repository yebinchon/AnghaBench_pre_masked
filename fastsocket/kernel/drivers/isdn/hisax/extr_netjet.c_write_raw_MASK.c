
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
struct TYPE_15__ {int sendcnt; int* sp; size_t* s_end; size_t* send; size_t s_tot; size_t* sendp; int free; } ;
struct TYPE_16__ {TYPE_5__ tiger; } ;
struct BCState {TYPE_8__* cs; scalar_t__ channel; int Flag; TYPE_6__ hw; int tqueue; int event; int squeue; TYPE_7__* tx_skb; int aclock; int ackcnt; TYPE_4__* st; } ;
struct TYPE_11__ {int irqstat0; } ;
struct TYPE_12__ {TYPE_1__ njet; } ;
struct TYPE_18__ {int debug; TYPE_2__ hw; } ;
struct TYPE_17__ {scalar_t__ pkt_type; scalar_t__ len; } ;
struct TYPE_13__ {int flag; } ;
struct TYPE_14__ {TYPE_3__ lli; } ;


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
 int FUNC_0 (TYPE_8__*,char*,...) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct BCState*,size_t*,int,scalar_t__,int) ;
 int FUNC_3 (struct BCState*) ;
 int FUNC_4 (TYPE_8__*,int*,size_t,char*) ;
 int FUNC_5 (struct BCState*,int ) ;
 int FUNC_6 (int *) ;
 TYPE_7__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct BCState *VAR_11, u_int *VAR_12, int VAR_13) {
 u_int VAR_14, VAR_15, *VAR_16=VAR_12;
 u_int VAR_17, VAR_18;

        if (VAR_13 <= 0)
         return;
 if (FUNC_12(VAR_0, &VAR_11->Flag)) {
  if (VAR_11->hw.tiger.sendcnt> VAR_13) {
   VAR_18 = VAR_13;
   VAR_11->hw.tiger.sendcnt -= VAR_13;
  } else {
   VAR_18 = VAR_11->hw.tiger.sendcnt;
   VAR_11->hw.tiger.sendcnt = 0;
  }
  if (VAR_11->channel)
   VAR_14 = 0xffff00ff;
  else
   VAR_14 = 0xffffff00;
  for (VAR_17=0; VAR_17<VAR_18; VAR_17++) {
   VAR_15 = VAR_11->channel ? ((VAR_11->hw.tiger.sp[VAR_17] <<8) & 0xff00) :
    (VAR_11->hw.tiger.sp[VAR_17]);
   *VAR_16 &= VAR_14;
   *VAR_16++ |= VAR_15;
   if (VAR_16>VAR_11->hw.tiger.s_end)
    VAR_16 = VAR_11->hw.tiger.send;
  }
  VAR_11->hw.tiger.s_tot += VAR_18;
  if (VAR_11->cs->debug & VAR_7)
   FUNC_0(VAR_11->cs,"tiger write_raw: c%d %p-%p %d/%d %d %x", VAR_11->channel,
    VAR_12, VAR_16, VAR_18, VAR_13,
    VAR_11->hw.tiger.sendcnt, VAR_11->cs->hw.njet.irqstat0);
  if (VAR_11->cs->debug & VAR_8)
   FUNC_4(VAR_11->cs, VAR_11->hw.tiger.sp, VAR_18, "snd");
  VAR_11->hw.tiger.sp += VAR_18;
  VAR_11->hw.tiger.sendp = VAR_16;
  if (!VAR_11->hw.tiger.sendcnt) {
   if (!VAR_11->tx_skb) {
    FUNC_0(VAR_11->cs,"tiger write_raw: NULL skb s_cnt %d", VAR_18);
   } else {
    if (FUNC_12(VAR_6,&VAR_11->st->lli.flag) &&
     (VAR_10 != VAR_11->tx_skb->pkt_type)) {
     u_long VAR_19;
     FUNC_8(&VAR_11->aclock, VAR_19);
     VAR_11->ackcnt += VAR_11->tx_skb->len;
     FUNC_9(&VAR_11->aclock, VAR_19);
     FUNC_5(VAR_11, VAR_4);
    }
    FUNC_1(VAR_11->tx_skb);
    VAR_11->tx_skb = ((void*)0);
   }
   FUNC_10(VAR_0, &VAR_11->Flag);
   VAR_11->hw.tiger.free = VAR_13 - VAR_18;
   if (VAR_11->hw.tiger.free > (VAR_9/2))
    FUNC_11(VAR_2, &VAR_11->Flag);
   else {
    FUNC_10(VAR_2, &VAR_11->Flag);
    FUNC_11(VAR_3, &VAR_11->Flag);
   }
   if ((VAR_11->tx_skb = FUNC_7(&VAR_11->squeue))) {
    FUNC_3(VAR_11);
   } else {
    VAR_14 ^= 0xffffffff;
    if (VAR_18 < VAR_13) {
     for (VAR_17=VAR_18; VAR_17<VAR_13;VAR_17++) {
      *VAR_16++ |= VAR_14;
      if (VAR_16>VAR_11->hw.tiger.s_end)
       VAR_16 = VAR_11->hw.tiger.send;
     }
     if (VAR_11->cs->debug & VAR_7)
      FUNC_0(VAR_11->cs, "tiger write_raw: fill rest %d",
       VAR_13 - VAR_18);
    }
    FUNC_11(VAR_5, &VAR_11->event);
    FUNC_6(&VAR_11->tqueue);
   }
  }
 } else if (FUNC_10(VAR_3, &VAR_11->Flag)) {
  FUNC_11(VAR_2, &VAR_11->Flag);
  FUNC_2(VAR_11, VAR_12, VAR_13, VAR_11->channel, 0xff);
  VAR_11->hw.tiger.free += VAR_13;
  if (VAR_11->cs->debug & VAR_7)
   FUNC_0(VAR_11->cs,"tiger write_raw: fill half");
 } else if (FUNC_10(VAR_2, &VAR_11->Flag)) {
  FUNC_11(VAR_1, &VAR_11->Flag);
  FUNC_2(VAR_11, VAR_12, VAR_13, VAR_11->channel, 0xff);
  if (VAR_11->cs->debug & VAR_7)
   FUNC_0(VAR_11->cs,"tiger write_raw: fill full");
 }
}
