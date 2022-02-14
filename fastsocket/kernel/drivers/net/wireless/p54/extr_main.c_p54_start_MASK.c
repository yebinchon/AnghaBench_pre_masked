
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int (* open ) (struct ieee80211_hw*) ;int conf_mutex; scalar_t__ softled_state; int work; int mode; int bssid; int * qos_params; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct p54_common*) ;
 int FUNC_6 (struct p54_common*) ;
 int FUNC_7 (struct p54_common*) ;
 int FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_3)
{
 struct p54_common *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_3(&VAR_4->conf_mutex);
 VAR_5 = VAR_4->open(VAR_3);
 if (VAR_5)
  goto out;
 FUNC_0(VAR_4->qos_params[0], 0x0002, 0x0003, 0x0007, 47);
 FUNC_0(VAR_4->qos_params[1], 0x0002, 0x0007, 0x000f, 94);
 FUNC_0(VAR_4->qos_params[2], 0x0003, 0x000f, 0x03ff, 0);
 FUNC_0(VAR_4->qos_params[3], 0x0007, 0x000f, 0x03ff, 0);
 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto out;

 FUNC_2(VAR_4->bssid, ~0, VAR_0);
 VAR_4->mode = VAR_1;
 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5) {
  VAR_4->mode = VAR_2;
  goto out;
 }

 FUNC_1(VAR_3, &VAR_4->work, 0);

 VAR_4->softled_state = 0;
 VAR_5 = FUNC_6(VAR_4);

out:
 FUNC_4(&VAR_4->conf_mutex);
 return VAR_5;
}
