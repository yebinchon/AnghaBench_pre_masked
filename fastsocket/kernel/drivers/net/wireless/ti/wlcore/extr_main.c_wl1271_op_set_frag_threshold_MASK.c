
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {scalar_t__ state; int mutex; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct wl1271*,int ) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_2, u32 VAR_3)
{
 struct wl1271 *VAR_4 = VAR_2->priv;
 int VAR_5 = 0;

 FUNC_0(&VAR_4->mutex);

 if (FUNC_2(VAR_4->state != VAR_1)) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5 < 0)
  FUNC_6("wl1271_op_set_frag_threshold failed: %d", VAR_5);

 FUNC_4(VAR_4);

out:
 FUNC_1(&VAR_4->mutex);

 return VAR_5;
}
