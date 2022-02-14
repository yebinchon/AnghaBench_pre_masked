
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1251 {int hw; } ;
struct tx_double_buffer_desc {int id; int xmit_queue; int expiry_time; void* rate; void* length; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_rate {scalar_t__ hw_value; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 struct ieee80211_rate* FUNC_2 (int ,struct ieee80211_tx_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct tx_double_buffer_desc*,struct ieee80211_tx_info*,int ) ;
 int FUNC_6 (struct tx_double_buffer_desc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct wl1251*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct wl1251 *VAR_1, struct sk_buff *VAR_2,
         struct ieee80211_tx_info *VAR_3)
{
 struct tx_double_buffer_desc *VAR_4;
 struct ieee80211_rate *VAR_5;
 int VAR_6;
 u16 VAR_7;

 if (!VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_8(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = *(u16 *)VAR_2->data;
 VAR_4 = (struct tx_double_buffer_desc *) FUNC_4(VAR_2,
          sizeof(*VAR_4));

 VAR_4->length = FUNC_0(VAR_2->len - sizeof(*VAR_4));
 VAR_5 = FUNC_2(VAR_1->hw, VAR_3);
 VAR_4->rate = FUNC_0(VAR_5->hw_value);
 VAR_4->expiry_time = FUNC_1(1 << 16);
 VAR_4->id = VAR_6;

 VAR_4->xmit_queue = FUNC_7(FUNC_3(VAR_2));

 FUNC_5(VAR_4, VAR_3, VAR_7);
 FUNC_6(VAR_4);

 return 0;
}
