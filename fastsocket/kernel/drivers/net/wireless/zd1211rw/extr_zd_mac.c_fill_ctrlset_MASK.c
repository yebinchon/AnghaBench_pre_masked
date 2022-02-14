
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zd_mac {int chip; int hw; } ;
struct zd_ctrlset {scalar_t__ next_frame_length; void* current_length; void* tx_length; int modulation; scalar_t__ service; void* packet_length; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_rate {int hw_value_short; int hw_value; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 unsigned int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct zd_mac*,struct zd_ctrlset*,struct ieee80211_hdr*,struct ieee80211_tx_info*) ;
 struct ieee80211_rate* FUNC_5 (int ,struct ieee80211_tx_info*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct zd_mac *VAR_2,
   struct sk_buff *VAR_3)
{
 int VAR_4;
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *) VAR_3->data;
 unsigned int VAR_6 = VAR_3->len + VAR_0;
 unsigned int VAR_7;
 struct ieee80211_rate *VAR_8;
 struct zd_ctrlset *VAR_9 = (struct zd_ctrlset *)
  FUNC_7(VAR_3, sizeof(struct zd_ctrlset));
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_3);

 FUNC_1(VAR_6 <= 0xffff);

 VAR_8 = FUNC_5(VAR_2->hw, VAR_10);

 VAR_9->modulation = VAR_8->hw_value;
 if (VAR_10->control.rates[0].flags & VAR_1)
  VAR_9->modulation = VAR_8->hw_value_short;

 VAR_9->tx_length = FUNC_3(VAR_6);

 FUNC_4(VAR_2, VAR_9, VAR_5, VAR_10);

 VAR_7 = VAR_6 + sizeof(struct zd_ctrlset) + 10;
 FUNC_1(VAR_7 <= 0xffff);



 VAR_9->packet_length = FUNC_3(FUNC_9(&VAR_2->chip) ?
   VAR_7 - VAR_6 : VAR_7);
 VAR_9->service = 0;
 VAR_4 = FUNC_8(&VAR_9->service, FUNC_2(VAR_9->modulation),
                   FUNC_6(VAR_9->tx_length));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_9->current_length = FUNC_3(VAR_4);
 VAR_9->next_frame_length = 0;

 return 0;
}
