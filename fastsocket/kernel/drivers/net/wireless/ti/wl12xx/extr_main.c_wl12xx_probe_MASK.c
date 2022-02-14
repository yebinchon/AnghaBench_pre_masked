
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_priv {int dummy; } ;
struct wl12xx_event_mailbox {int dummy; } ;
struct wl1271 {int ptable; int * ops; } ;
struct platform_device {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_hw* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*,struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct wl1271 *VAR_4;
 struct ieee80211_hw *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(struct wl12xx_priv),
        VAR_0,
        sizeof(struct wl12xx_event_mailbox));
 if (FUNC_0(VAR_5)) {
  FUNC_2("can't allocate hw");
  VAR_6 = FUNC_1(VAR_5);
  goto out;
 }

 VAR_4 = VAR_5->priv;
 VAR_4->ops = &VAR_1;
 VAR_4->ptable = VAR_2;
 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (VAR_6)
  goto out_free;

 return VAR_6;

out_free:
 FUNC_4(VAR_4);
out:
 return VAR_6;
}
