
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, u8 *VAR_5,
     struct ieee80211_vif *VAR_6)
{
 struct rt2x00_dev *VAR_7 = VAR_4;

 if (VAR_6->type != VAR_1 &&
     VAR_6->type != VAR_0 &&
     VAR_6->type != VAR_2 &&
     VAR_6->type != VAR_3)
  return;






 FUNC_0(FUNC_1(VAR_7));
 FUNC_2(VAR_7, VAR_6);
}
