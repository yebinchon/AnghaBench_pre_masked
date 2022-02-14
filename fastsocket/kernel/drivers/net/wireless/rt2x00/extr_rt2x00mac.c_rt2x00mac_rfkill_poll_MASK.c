
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {TYPE_2__* ops; } ;
struct ieee80211_hw {int wiphy; struct rt2x00_dev* priv; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* rfkill_poll ) (struct rt2x00_dev*) ;} ;


 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct rt2x00_dev *VAR_1 = VAR_0->priv;
 bool VAR_2 = !!VAR_1->ops->lib->rfkill_poll(VAR_1);

 FUNC_1(VAR_0->wiphy, !VAR_2);
}
