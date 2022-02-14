
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43legacy_wl {int irq_lock; } ;


 int FUNC_0 (struct b43legacy_wl*) ;
 struct b43legacy_wl* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
           struct ieee80211_sta *VAR_1, bool VAR_2)
{
 struct b43legacy_wl *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->irq_lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->irq_lock, VAR_4);

 return 0;
}
