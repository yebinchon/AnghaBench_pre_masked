
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_device {int dummy; } ;


 struct sk_buff* FUNC_0 (struct ieee80211_device*,int,int *) ;
 int FUNC_1 (struct sk_buff*,struct ieee80211_device*) ;

void FUNC_2(struct ieee80211_device *VAR_0, int VAR_1, u8* VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_3, VAR_0);
}
