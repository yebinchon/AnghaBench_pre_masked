
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
typedef int dev ;
struct TYPE_4__ {scalar_t__ queue_index; int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int bTxEnableFwCalcDur; } ;
typedef TYPE_2__ cb_desc ;
struct TYPE_3__ {int tx_headroom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (unsigned char*,struct net_device**,int) ;
 int FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2,struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = (struct r8192_priv *)FUNC_0(VAR_3);


 int VAR_5;

        cb_desc *VAR_6 = (cb_desc *)(VAR_2->cb + VAR_0);
        u8 VAR_7 = VAR_6->queue_index;




        FUNC_2((unsigned char *)(VAR_2->cb),&VAR_3,sizeof(VAR_3));
 if(VAR_7 == VAR_1) {

  FUNC_4(VAR_3, VAR_2);
  VAR_5 = 0;

  return VAR_5;
 } else {

  VAR_6->RATRIndex = 7;
  VAR_6->bTxDisableRateFallBack = 1;
  VAR_6->bTxUseDriverAssingedRate = 1;
  VAR_6->bTxEnableFwCalcDur = 1;
  FUNC_5(VAR_2, VAR_4->ieee80211->tx_headroom);
  VAR_5 = FUNC_3(VAR_3, VAR_2);
  if(VAR_5 != 0) {
   FUNC_1(VAR_2);
  };
 }






 return VAR_5;

}
