
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; int len; } ;
struct ieee80211_tim_ie {scalar_t__ dtim_count; int bitmap_ctrl; } ;
struct TYPE_3__ {int* variable; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct sk_buff *VAR_1)
{

 struct ieee80211_mgmt *VAR_2;
 u8 *VAR_3, *VAR_4, VAR_5, VAR_6;
 struct ieee80211_tim_ie *VAR_7;

 VAR_2 = (struct ieee80211_mgmt *)VAR_1->data;
 VAR_3 = VAR_2->u.beacon.variable;
 VAR_4 = VAR_1->data + VAR_1->len;

 while (VAR_3 + 2 < VAR_4) {
  VAR_5 = *VAR_3++;
  VAR_6 = *VAR_3++;
  if (VAR_3 + VAR_6 > VAR_4)
   break;

  if (VAR_5 == VAR_0) {
   if (VAR_6 < sizeof(*VAR_7))
    break;
   VAR_7 = (struct ieee80211_tim_ie *) VAR_3;
   if (VAR_7->dtim_count != 0)
    break;
   return VAR_7->bitmap_ctrl & 0x01;
  }

  VAR_3 += VAR_6;
 }

 return 0;
}
