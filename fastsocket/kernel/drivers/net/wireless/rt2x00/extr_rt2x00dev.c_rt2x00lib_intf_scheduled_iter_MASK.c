
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_intf {int delayed_flags; } ;
struct rt2x00_dev {int flags; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 struct rt2x00_intf* FUNC_3 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, u8 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_2;
 struct rt2x00_intf *VAR_6 = FUNC_3(VAR_4);







 if (!FUNC_2(VAR_1, &VAR_5->flags))
  return;

 if (FUNC_1(VAR_0, &VAR_6->delayed_flags))
  FUNC_0(VAR_5, VAR_4);
}
