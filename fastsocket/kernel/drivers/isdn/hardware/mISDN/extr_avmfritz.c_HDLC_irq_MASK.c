
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int cmd; scalar_t__ xml; } ;
struct TYPE_6__ {TYPE_2__ sr; } ;
struct hdlc_hw {TYPE_3__ ctrl; } ;
struct fritzcard {int name; struct hdlc_hw* hdlc; } ;
struct bchannel {int nr; int Flags; scalar_t__ tx_idx; TYPE_1__* tx_skb; scalar_t__ rx_skb; struct fritzcard* hw; } ;
struct TYPE_4__ {scalar_t__ len; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct bchannel*) ;
 int FUNC_1 (struct bchannel*,int) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct bchannel*,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int FUNC_6 (struct bchannel*,int) ;

__attribute__((used)) static void
FUNC_7(struct bchannel *VAR_11, u32 VAR_12)
{
 struct fritzcard *VAR_13 = VAR_11->hw;
 int VAR_14;
 struct hdlc_hw *VAR_15;

 VAR_15 = &VAR_13->hdlc[(VAR_11->nr - 1) & 1];
 FUNC_2("%s: ch%d stat %#x\n", VAR_13->name, VAR_11->nr, VAR_12);
 if (VAR_12 & VAR_3) {
  if (VAR_12 & VAR_8) {
   VAR_15->ctrl.sr.xml = 0;
   VAR_15->ctrl.sr.cmd |= VAR_1;
   FUNC_6(VAR_11, 1);
   VAR_15->ctrl.sr.cmd &= ~VAR_1;
   FUNC_6(VAR_11, 1);
   if (VAR_11->rx_skb)
    FUNC_4(VAR_11->rx_skb, 0);
  } else {
   VAR_14 = (VAR_12 & VAR_10) >> 8;
   if (!VAR_14)
    VAR_14 = 32;
   FUNC_1(VAR_11, VAR_14);
   if (!VAR_11->rx_skb)
    goto handle_tx;
   if ((VAR_12 & VAR_9) || FUNC_5(VAR_0,
       &VAR_11->Flags)) {
    if (((VAR_12 & VAR_7) ==
        VAR_6) ||
        FUNC_5(VAR_0, &VAR_11->Flags)) {
     FUNC_3(VAR_11, 0);
    } else {
     FUNC_2("%s: got invalid frame\n",
      VAR_13->name);
     FUNC_4(VAR_11->rx_skb, 0);
    }
   }
  }
 }
handle_tx:
 if (VAR_12 & VAR_4) {




  if (VAR_11->tx_skb)
   FUNC_2("%s: ch%d XDU len(%d) idx(%d) Flags(%lx)\n",
    VAR_13->name, VAR_11->nr, VAR_11->tx_skb->len,
    VAR_11->tx_idx, VAR_11->Flags);
  else
   FUNC_2("%s: ch%d XDU no tx_skb Flags(%lx)\n",
    VAR_13->name, VAR_11->nr, VAR_11->Flags);
  if (VAR_11->tx_skb && VAR_11->tx_skb->len) {
   if (!FUNC_5(VAR_0, &VAR_11->Flags))
    VAR_11->tx_idx = 0;
  }
  VAR_15->ctrl.sr.xml = 0;
  VAR_15->ctrl.sr.cmd |= VAR_2;
  FUNC_6(VAR_11, 1);
  VAR_15->ctrl.sr.cmd &= ~VAR_2;
  FUNC_0(VAR_11);
  return;
 } else if (VAR_12 & VAR_5)
  FUNC_0(VAR_11);
}
