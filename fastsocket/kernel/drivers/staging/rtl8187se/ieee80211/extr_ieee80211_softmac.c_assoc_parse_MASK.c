
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_assoc_response_frame {int status; int aid; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct sk_buff *VAR_0, int *VAR_1)
{
 struct ieee80211_assoc_response_frame *VAR_2;
 if (VAR_0->len < sizeof(struct ieee80211_assoc_response_frame)){
  FUNC_0("invalid len in auth resp: %d\n", VAR_0->len);
  return 0xcafe;
 }

 VAR_2 = (struct ieee80211_assoc_response_frame*) VAR_0->data;
 *VAR_1 = FUNC_1(VAR_2->aid) & 0x3fff;
 return FUNC_1(VAR_2->status);
}
