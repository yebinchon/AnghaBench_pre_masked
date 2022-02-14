
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_sta {int wcid; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;


 int FUNC_0 (struct rt2x00_dev*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 struct rt2x00_sta* FUNC_5 (struct ieee80211_sta*) ;

int FUNC_6(struct rt2x00_dev *VAR_0, struct ieee80211_vif *VAR_1,
     struct ieee80211_sta *VAR_2)
{
 int VAR_3;
 struct rt2x00_sta *VAR_4 = FUNC_5(VAR_2);




 VAR_3 = FUNC_3(VAR_0);





 VAR_4->wcid = VAR_3;





 if (VAR_3 < 0)
  return 0;




 FUNC_2(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_2->addr, VAR_3);
 FUNC_1(VAR_0, VAR_3,
           FUNC_4(VAR_0, VAR_1));
 return 0;
}
