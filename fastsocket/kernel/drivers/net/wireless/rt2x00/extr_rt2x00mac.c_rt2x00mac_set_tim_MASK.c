
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int intf_work; int hw; int flags; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct rt2x00_dev*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct ieee80211_hw *VAR_3, struct ieee80211_sta *VAR_4,
        bool VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_3->priv;

 if (!FUNC_2(VAR_0, &VAR_6->flags))
  return 0;

 FUNC_0(
  VAR_6->hw, VAR_1,
  VAR_2, VAR_6);


 FUNC_1(VAR_6->hw, &VAR_6->intf_work);
 return 0;
}
