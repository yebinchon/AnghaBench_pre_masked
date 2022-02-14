
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rtl_ieee80211_hdr {int dummy; } ;
struct ieee80211_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int* FUNC_1 (struct rtl_ieee80211_hdr*) ;
 int FUNC_2 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_device*,struct sk_buff*) ;

void FUNC_5(struct ieee80211_device* VAR_4, struct sk_buff* VAR_5)
{
 struct rtl_ieee80211_hdr *VAR_6 =
  (struct rtl_ieee80211_hdr *)VAR_5->data;
 u8* VAR_7 = FUNC_1(VAR_6);
 u8 VAR_8 = 0;

 if (VAR_7 == ((void*)0))
 {
  FUNC_0(VAR_3, "error to get payload of action frame\n");
  return;
 }
 VAR_8 = *VAR_7;
 VAR_7 ++;
 switch (VAR_8)
 {
  case 128:
   if (*VAR_7 == VAR_0)
   FUNC_2(VAR_4, VAR_5);
   else if (*VAR_7 == VAR_1)
   FUNC_3(VAR_4, VAR_5);
   else if (*VAR_7 == VAR_2)
   FUNC_4(VAR_4, VAR_5);
   break;
  default:


   break;
 }
 return;

}
