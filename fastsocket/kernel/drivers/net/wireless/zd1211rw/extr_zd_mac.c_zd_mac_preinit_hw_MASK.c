
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_mac {int chip; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int *) ;
 int FUNC_1 (int *,int *) ;
 struct zd_mac* FUNC_2 (struct ieee80211_hw*) ;

int FUNC_3(struct ieee80211_hw *VAR_1)
{
 int VAR_2;
 u8 VAR_3[VAR_0];
 struct zd_mac *VAR_4 = FUNC_2(VAR_1);

 VAR_2 = FUNC_1(&VAR_4->chip, VAR_3);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1, VAR_3);

 return 0;
}
