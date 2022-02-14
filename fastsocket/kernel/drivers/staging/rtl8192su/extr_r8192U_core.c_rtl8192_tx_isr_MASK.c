
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct urb {scalar_t__ status; scalar_t__ context; } ;
struct sk_buff {scalar_t__ len; scalar_t__ cb; } ;
struct TYPE_7__ {int txbytesunicast; int txoktotal; } ;
struct r8192_priv {TYPE_5__* ieee80211; int * tx_pending; TYPE_2__ stats; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {size_t queue_index; } ;
typedef TYPE_4__ cb_desc ;
struct TYPE_8__ {int tx_errors; } ;
struct TYPE_6__ {int NumTxOkInPeriod; } ;
struct TYPE_10__ {int (* softmac_hard_start_xmit ) (struct sk_buff*,struct net_device*) ;int * skb_waitQ; int queue_stop; scalar_t__ ack_tx_to_ieee; TYPE_3__ stats; scalar_t__ tx_headroom; TYPE_1__ LinkDetectInfo; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (struct net_device**,struct net_device*,int) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct sk_buff* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,struct net_device*) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_4)
{
 struct sk_buff *VAR_5 = (struct sk_buff*)VAR_4->context;
 struct net_device *VAR_6 = ((void*)0);
 struct r8192_priv *VAR_7 = ((void*)0);
 cb_desc *VAR_8 = (cb_desc *)(VAR_5->cb + VAR_1);
 u8 VAR_9 = VAR_8->queue_index;



 FUNC_4(&VAR_6,(struct net_device*)(VAR_5->cb),sizeof(struct net_device*));
 VAR_7 = FUNC_2(VAR_6);

 if(VAR_8->queue_index != VAR_3) {
  if(VAR_4->status == 0) {




   VAR_7->stats.txoktotal++;
   VAR_7->ieee80211->LinkDetectInfo.NumTxOkInPeriod++;
   VAR_7->stats.txbytesunicast += (VAR_5->len - VAR_7->ieee80211->tx_headroom);
  } else {
   VAR_7->ieee80211->stats.tx_errors++;


  }
 }


 if(VAR_5 != ((void*)0)) {
  FUNC_1(VAR_5);
  FUNC_9(VAR_4);
  FUNC_0(&VAR_7->tx_pending[VAR_9]);
 }

 {
 if (VAR_9 == VAR_2){
        if (VAR_7->ieee80211->ack_tx_to_ieee){
            if (FUNC_5(VAR_6)){
                VAR_7->ieee80211->ack_tx_to_ieee = 0;
                FUNC_3(VAR_7->ieee80211, 1);
            }
        }
    }

  if(VAR_9 != VAR_0) {

   if((FUNC_7(&VAR_7->ieee80211->skb_waitQ[VAR_9]) != 0)&& (!(VAR_7->ieee80211->queue_stop))) {

    if(((void*)0) != (VAR_5 = FUNC_6(&(VAR_7->ieee80211->skb_waitQ[VAR_9]))))
     VAR_7->ieee80211->softmac_hard_start_xmit(VAR_5, VAR_6);

    return;
   }
  }
 }
}
