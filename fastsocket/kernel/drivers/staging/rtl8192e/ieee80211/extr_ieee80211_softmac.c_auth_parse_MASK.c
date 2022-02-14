
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct ieee80211_info_element {int dummy; } ;
struct ieee80211_authentication {int status; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static inline u16 FUNC_4(struct sk_buff *VAR_2, u8** VAR_3, int *VAR_4)
{
 struct ieee80211_authentication *VAR_5;
 u8 *VAR_6;
 if (VAR_2->len < (sizeof(struct ieee80211_authentication)-sizeof(struct ieee80211_info_element))){
  FUNC_0("invalid len in auth resp: %d\n",VAR_2->len);
  return 0xcafe;
 }
 *VAR_3 = ((void*)0);
 VAR_5 = (struct ieee80211_authentication*) VAR_2->data;
 if(VAR_2->len > (sizeof(struct ieee80211_authentication) +3)){
  VAR_6 = VAR_2->data + sizeof(struct ieee80211_authentication);

  if(*(VAR_6++) == VAR_1){
   *VAR_4 = *(VAR_6++);
   *VAR_3 = (u8*)FUNC_2(*VAR_4, VAR_0);
   FUNC_3(*VAR_3, VAR_6, *VAR_4);
  }
 }

 return FUNC_1(VAR_5->status);

}
