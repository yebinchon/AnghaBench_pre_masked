
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43legacy_wl {struct ieee80211_hw* hw; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ssb_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct ssb_device *VAR_0,
      struct b43legacy_wl *VAR_1)
{
 struct ieee80211_hw *VAR_2 = VAR_1->hw;

 FUNC_1(VAR_0, ((void*)0));
 FUNC_0(VAR_2);
}
