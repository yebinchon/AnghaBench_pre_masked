
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_intf {int delayed_flags; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 struct rt2x00_intf* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(void *VAR_5, u8 *VAR_6,
       struct ieee80211_vif *VAR_7)
{
 struct rt2x00_intf *VAR_8 = FUNC_1(VAR_7);

 if (VAR_7->type != VAR_2 &&
     VAR_7->type != VAR_1 &&
     VAR_7->type != VAR_3 &&
     VAR_7->type != VAR_4)
  return;

 FUNC_0(VAR_0, &VAR_8->delayed_flags);
}
