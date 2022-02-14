
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_device {scalar_t__ bSupportRemoteWakeUp; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(struct ieee80211_device* VAR_1, u8* VAR_2, u8* VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, "posRT2RTAgg can't be null in HTConstructRT2RTAggElement()\n");
  return;
 }
 FUNC_1(VAR_2, 0, *VAR_3);
 *VAR_2++ = 0x00;
 *VAR_2++ = 0xe0;
 *VAR_2++ = 0x4c;
 *VAR_2++ = 0x02;
 *VAR_2++ = 0x01;
 *VAR_2 = 0x10;

 if(VAR_1->bSupportRemoteWakeUp) {
  *VAR_2 |= 0x08;
 }

 *VAR_3 = 6 + 2;
 return;
}
