
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct b43_wl {struct ieee80211_hw* hw; } ;
struct b43_bus_dev {int sdev; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct b43_bus_dev *VAR_0, struct b43_wl *VAR_1)
{
 struct ieee80211_hw *VAR_2 = VAR_1->hw;

 FUNC_1(VAR_0->sdev, ((void*)0));
 FUNC_0(VAR_2);
}
