
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rx_auth_rq; } ;
struct ieee80211_device {TYPE_1__ softmac_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct ieee80211_device*,int,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct ieee80211_device *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3[VAR_0];
 int VAR_4;

 VAR_1->softmac_stats.rx_auth_rq++;

 if ((VAR_4 = FUNC_0(VAR_2, VAR_3))!= -1){
  FUNC_1(VAR_1, VAR_4, VAR_3);
 }


}
