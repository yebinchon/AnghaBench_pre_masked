
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dev; struct sk_buff* context; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*) ;
 struct ieee80211_hw* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->context;
 struct ieee80211_hw *VAR_2 =
  FUNC_1(FUNC_2(VAR_0->dev, 0));

 FUNC_0(VAR_2, VAR_1);
}
