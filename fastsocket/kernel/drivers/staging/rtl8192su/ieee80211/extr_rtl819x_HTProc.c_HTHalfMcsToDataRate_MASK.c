
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct ieee80211_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ FUNC_1 (struct ieee80211_device*,size_t) ;
 int *** VAR_0 ;

u16 FUNC_2(struct ieee80211_device* VAR_1, u8 VAR_2)
{

 u8 VAR_3;
 u8 VAR_4;

 VAR_3 = (FUNC_0(VAR_1))?1:0;
 VAR_4 = (FUNC_1(VAR_1, VAR_3))? 1:0;

 return VAR_0[VAR_3][VAR_4][(VAR_2&0x7f)];
}
