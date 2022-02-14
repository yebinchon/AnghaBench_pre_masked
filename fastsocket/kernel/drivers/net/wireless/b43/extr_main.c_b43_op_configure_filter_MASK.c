
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {unsigned int filter_flags; int mutex; struct b43_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct b43_wldev*) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 struct b43_wl* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_8,
        unsigned int VAR_9, unsigned int *VAR_10,
        u64 VAR_11)
{
 struct b43_wl *VAR_12 = FUNC_2(VAR_8);
 struct b43_wldev *VAR_13;

 FUNC_3(&VAR_12->mutex);
 VAR_13 = VAR_12->current_dev;
 if (!VAR_13) {
  *VAR_10 = 0;
  goto out_unlock;
 }

 *VAR_10 &= VAR_7 |
    VAR_1 |
    VAR_4 |
    VAR_6 |
    VAR_3 |
    VAR_5 |
    VAR_2;

 VAR_9 &= VAR_7 |
     VAR_1 |
     VAR_4 |
     VAR_6 |
     VAR_3 |
     VAR_5 |
     VAR_2;

 VAR_12->filter_flags = *VAR_10;

 if (VAR_9 && FUNC_1(VAR_13) >= VAR_0)
  FUNC_0(VAR_13);

out_unlock:
 FUNC_4(&VAR_12->mutex);
}
