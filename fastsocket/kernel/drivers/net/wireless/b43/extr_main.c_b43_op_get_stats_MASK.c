
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_low_level_stats {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wl {int mutex; int ieee_stats; } ;


 struct b43_wl* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_low_level_stats*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
       struct ieee80211_low_level_stats *VAR_1)
{
 struct b43_wl *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->mutex);
 FUNC_1(VAR_1, &VAR_2->ieee_stats, sizeof(*VAR_1));
 FUNC_3(&VAR_2->mutex);

 return 0;
}
