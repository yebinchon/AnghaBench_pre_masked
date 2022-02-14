
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ cb; } ;
struct r8192_priv {TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
typedef int dev ;
struct TYPE_6__ {scalar_t__ queue_index; int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int bTxEnableFwCalcDur; } ;
typedef TYPE_3__ cb_desc ;
struct TYPE_4__ {int tx_packets; int tx_bytes; } ;
struct TYPE_5__ {TYPE_1__ stats; scalar_t__ tx_headroom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (unsigned char*,struct net_device**,int) ;
 int FUNC_4 (struct net_device*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4, int VAR_5)
{
 struct r8192_priv *VAR_6 = (struct r8192_priv *)FUNC_1(VAR_4);
 int VAR_7;

 cb_desc *VAR_8 = (cb_desc *)(VAR_3->cb + VAR_0);
 u8 VAR_9 = VAR_8->queue_index;

 FUNC_0(VAR_9 != VAR_2);



        FUNC_3((unsigned char *)(VAR_3->cb),&VAR_4,sizeof(VAR_4));






 FUNC_5(VAR_3, VAR_6->ieee80211->tx_headroom);
 VAR_7 = FUNC_4(VAR_4, VAR_3);
 if(VAR_7 != 0) {
  FUNC_2(VAR_3);
 };


 if(VAR_9!=VAR_1) {
 VAR_6->ieee80211->stats.tx_bytes+=(VAR_3->len - VAR_6->ieee80211->tx_headroom);
 VAR_6->ieee80211->stats.tx_packets++;
 }




 return;
}
