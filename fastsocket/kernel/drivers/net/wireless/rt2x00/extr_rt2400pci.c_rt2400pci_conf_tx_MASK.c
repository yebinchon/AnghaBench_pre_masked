
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct rt2x00_dev {TYPE_1__* tx; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_2__ {int cw_max; int cw_min; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,scalar_t__,struct ieee80211_tx_queue_params const*) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2, u16 VAR_3,
        const struct ieee80211_tx_queue_params *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_1->priv;






 if (VAR_3 != 0)
  return -VAR_0;

 if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4))
  return -VAR_0;




 FUNC_0(VAR_5,
       VAR_5->tx->cw_min, VAR_5->tx->cw_max);

 return 0;
}
