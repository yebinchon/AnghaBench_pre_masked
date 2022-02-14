
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct txentry_desc {int flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct rt2x00_intf {int seqno; } ;
struct rt2x00_dev {int flags; int cap_flags; } ;
struct TYPE_2__ {int vif; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_hdr {int seq_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct rt2x00_intf* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct rt2x00_dev *VAR_6,
       struct sk_buff *VAR_7,
       struct txentry_desc *VAR_8)
{
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_7);
 struct ieee80211_hdr *VAR_10 = (struct ieee80211_hdr *)VAR_7->data;
 struct rt2x00_intf *VAR_11 = FUNC_7(VAR_9->control.vif);
 u16 VAR_12;

 if (!(VAR_9->flags & VAR_4))
  return;

 FUNC_2(VAR_2, &VAR_8->flags);

 if (!FUNC_6(VAR_5, &VAR_6->cap_flags)) {






  if (FUNC_6(VAR_0, &VAR_6->flags))
   FUNC_1(VAR_2, &VAR_8->flags);
  else

   return;
 }
 if (FUNC_6(VAR_1, &VAR_8->flags))
  VAR_12 = FUNC_3(0x10, &VAR_11->seqno);
 else
  VAR_12 = FUNC_4(&VAR_11->seqno);

 VAR_10->seq_ctrl &= FUNC_5(VAR_3);
 VAR_10->seq_ctrl |= FUNC_5(VAR_12);
}
