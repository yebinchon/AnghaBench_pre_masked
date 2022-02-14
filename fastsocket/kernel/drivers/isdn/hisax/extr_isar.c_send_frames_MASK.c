
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_9__ {scalar_t__ cmd; int dpath; scalar_t__ txcnt; } ;
struct TYPE_10__ {TYPE_3__ isar; } ;
struct BCState {scalar_t__ mode; int Flag; TYPE_4__ hw; int cs; int squeue; TYPE_5__* tx_skb; int aclock; int ackcnt; TYPE_2__* st; } ;
struct TYPE_11__ {scalar_t__ pkt_type; scalar_t__ len; } ;
struct TYPE_7__ {int flag; } ;
struct TYPE_8__ {TYPE_1__ lli; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct BCState*) ;
 int FUNC_3 (struct BCState*,int ) ;
 int FUNC_4 (int ,int,int,int,int *) ;
 TYPE_5__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct BCState *VAR_14)
{
 if (VAR_14->tx_skb) {
  if (VAR_14->tx_skb->len) {
   FUNC_2(VAR_14);
   return;
  } else {
   if (FUNC_10(VAR_8,&VAR_14->st->lli.flag) &&
    (VAR_11 != VAR_14->tx_skb->pkt_type)) {
    u_long VAR_15;
    FUNC_6(&VAR_14->aclock, VAR_15);
    VAR_14->ackcnt += VAR_14->hw.isar.txcnt;
    FUNC_7(&VAR_14->aclock, VAR_15);
    FUNC_3(VAR_14, VAR_5);
   }
   if (VAR_14->mode == VAR_10) {
    if (VAR_14->hw.isar.cmd == VAR_12) {
     if (FUNC_10(VAR_2, &VAR_14->Flag)) {
      FUNC_9(VAR_4, &VAR_14->Flag);
     }
    } else if (VAR_14->hw.isar.cmd == VAR_13) {
     if (FUNC_10(VAR_1, &VAR_14->Flag)) {
      FUNC_9(VAR_2, &VAR_14->Flag);
      FUNC_9(VAR_4, &VAR_14->Flag);
     }
    }
   }
   FUNC_1(VAR_14->tx_skb);
   VAR_14->hw.isar.txcnt = 0;
   VAR_14->tx_skb = ((void*)0);
  }
 }
 if ((VAR_14->tx_skb = FUNC_5(&VAR_14->squeue))) {
  VAR_14->hw.isar.txcnt = 0;
  FUNC_9(VAR_0, &VAR_14->Flag);
  FUNC_2(VAR_14);
 } else {
  if (FUNC_8(VAR_1, &VAR_14->Flag)) {
   if (FUNC_8(VAR_2, &VAR_14->Flag)) {
    if (FUNC_8(VAR_4, &VAR_14->Flag)) {
     u_char VAR_16 = 0;
     FUNC_4(VAR_14->cs, FUNC_0(VAR_14->hw.isar.dpath) |
      VAR_9, 0x01, 1, &VAR_16);
    }
    FUNC_9(VAR_3, &VAR_14->Flag);
   } else {
    FUNC_3(VAR_14, VAR_6);
   }
  }
  FUNC_8(VAR_0, &VAR_14->Flag);
  FUNC_3(VAR_14, VAR_7);
 }
}
