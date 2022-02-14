
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct platform_device {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;

int FUNC_4(struct platform_device *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_1(VAR_0);
 struct rt2x00_dev *VAR_2 = VAR_1->priv;




 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_1);

 return 0;
}
