
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_device {int* wpa_ie; size_t wpa_ie_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (char*,size_t,int) ;

int FUNC_4(struct ieee80211_device *VAR_4, u8 *VAR_5, size_t VAR_6)
{
 u8 *VAR_7;

 if (VAR_6>VAR_3 || (VAR_6 && VAR_5 == ((void*)0)))
 {

 return -VAR_0;
 }


 if (VAR_6)
 {
  if (VAR_6 != VAR_5[1]+2)
  {
   FUNC_3("len: %Zd, ie:%d\n", VAR_6, VAR_5[1]);
   return -VAR_0;
  }
  VAR_7 = FUNC_1(VAR_6, VAR_2);
  if (VAR_7 == ((void*)0))
   return -VAR_1;
  FUNC_2(VAR_7, VAR_5, VAR_6);
  FUNC_0(VAR_4->wpa_ie);
  VAR_4->wpa_ie = VAR_7;
  VAR_4->wpa_ie_len = VAR_6;
 }
 else{
  if (VAR_4->wpa_ie)
  FUNC_0(VAR_4->wpa_ie);
  VAR_4->wpa_ie = ((void*)0);
  VAR_4->wpa_ie_len = 0;
 }

 return 0;

}
