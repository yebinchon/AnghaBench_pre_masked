
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int flags; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*) ;

void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rt2x00_dev *VAR_2 = VAR_1->priv;
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(VAR_2);
}
