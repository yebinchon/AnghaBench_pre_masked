
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ state; scalar_t__ tx_frames_cnt; int mutex; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct wl1271*) ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct wl1271 *VAR_2 = VAR_1->priv;
 bool VAR_3 = 0;

 FUNC_0(&VAR_2->mutex);

 if (FUNC_2(VAR_2->state != VAR_0))
  goto out;


 VAR_3 = (FUNC_3(VAR_2) > 0) || (VAR_2->tx_frames_cnt > 0);
out:
 FUNC_1(&VAR_2->mutex);

 return VAR_3;
}
