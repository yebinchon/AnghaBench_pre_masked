
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int mutex; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wl1271*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct wl1271 *VAR_2 = VAR_1->priv;

 FUNC_2(VAR_0, "mac80211 stop");

 FUNC_0(&VAR_2->mutex);

 FUNC_3(VAR_2);

 FUNC_1(&VAR_2->mutex);
}
