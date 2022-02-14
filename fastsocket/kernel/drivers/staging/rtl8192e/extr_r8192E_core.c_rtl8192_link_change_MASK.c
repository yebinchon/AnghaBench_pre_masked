
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {int ReceiveConfig; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_device {scalar_t__ state; scalar_t__ pairwise_key_type; scalar_t__ iw_mode; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int,int ) ;
 int FUNC_7 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_7)
{


 struct r8192_priv *VAR_8 = FUNC_1(VAR_7);
 struct ieee80211_device* VAR_9 = VAR_8->ieee80211;

 if (VAR_9->state == VAR_0)
 {
  FUNC_3(VAR_7);
  FUNC_5(VAR_7);


  if ((VAR_4 == VAR_9->pairwise_key_type) || (VAR_3 == VAR_9->pairwise_key_type))
  FUNC_0(VAR_7);

 }
 else
 {
  FUNC_6(VAR_7, 0x173, 0);
 }



 FUNC_4(VAR_7);



 if (VAR_9->iw_mode == VAR_2 || VAR_9->iw_mode == VAR_1)
 {
  u32 VAR_10 = 0;
  VAR_10 = FUNC_2(VAR_7, VAR_5);
  if (VAR_8->ieee80211->state == VAR_0)
   VAR_8->ReceiveConfig = VAR_10 |= VAR_6;
  else
   VAR_8->ReceiveConfig = VAR_10 &= ~VAR_6;
  FUNC_7(VAR_7, VAR_5, VAR_10);
 }
}
