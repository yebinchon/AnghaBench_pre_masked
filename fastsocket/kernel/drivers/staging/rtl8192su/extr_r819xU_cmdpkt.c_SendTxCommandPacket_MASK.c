
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
typedef int dev ;
struct TYPE_4__ {size_t queue_index; scalar_t__ txbuf_size; scalar_t__ bLastIniPkt; int bCmdOrInit; } ;
typedef TYPE_2__ cb_desc ;
struct TYPE_3__ {int (* softmac_hard_start_xmit ) (struct sk_buff*,struct net_device*) ;int * skb_waitQ; scalar_t__ queue_stop; int (* check_nic_enough_desc ) (struct net_device*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned char*,void*,int) ;
 int FUNC_4 (unsigned char*,int ,scalar_t__) ;
 unsigned char* FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct net_device*,size_t) ;
 int FUNC_10 (struct sk_buff*,struct net_device*) ;

bool
FUNC_11(
 struct net_device *VAR_5,
 void* VAR_6,
 u32 VAR_7
 )
{
 bool VAR_8 = 1;
 struct r8192_priv *VAR_9 = FUNC_2(VAR_5);
 struct sk_buff *VAR_10;
 cb_desc *VAR_11;
 unsigned char *VAR_12;





 VAR_10 = FUNC_1(VAR_4 + VAR_7 + 4);
 FUNC_3((unsigned char *)(VAR_10->cb),&VAR_5,sizeof(VAR_5));
 VAR_11 = (cb_desc*)(VAR_10->cb + VAR_2);
 VAR_11->queue_index = VAR_3;
 VAR_11->bCmdOrInit = VAR_1;
 VAR_11->bLastIniPkt = 0;
 FUNC_8(VAR_10, VAR_4);
 VAR_12 = FUNC_5(VAR_10, VAR_7);
 FUNC_4(VAR_12,0,VAR_7);
 FUNC_3(VAR_12,VAR_6,VAR_7);
 VAR_11->txbuf_size= (u16)VAR_7;

 if(!VAR_9->ieee80211->check_nic_enough_desc(VAR_5,VAR_11->queue_index)||
   (!FUNC_6(&VAR_9->ieee80211->skb_waitQ[VAR_11->queue_index]))|| (VAR_9->ieee80211->queue_stop) ) {

   FUNC_0(VAR_0,"===================NULL packet==================================> tx full!\n");
   FUNC_7(&VAR_9->ieee80211->skb_waitQ[VAR_11->queue_index], VAR_10);
  } else {
   VAR_9->ieee80211->softmac_hard_start_xmit(VAR_10,VAR_5);
  }


 return VAR_8;
}
