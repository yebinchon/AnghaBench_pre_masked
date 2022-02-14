
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pch_gbe_tx_ring {unsigned int count; struct pch_gbe_buffer* buffer_info; } ;
struct pch_gbe_tx_desc {int gbec_status; } ;
struct pch_gbe_buffer {struct sk_buff* skb; } ;
struct TYPE_4__ {unsigned int max_frame_size; } ;
struct TYPE_3__ {TYPE_2__ mac; } ;
struct pch_gbe_adapter {int netdev; TYPE_1__ hw; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct pch_gbe_tx_desc* FUNC_0 (struct pch_gbe_tx_ring,unsigned int) ;
 struct sk_buff* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pch_gbe_adapter *VAR_3,
     struct pch_gbe_tx_ring *VAR_4)
{
 struct pch_gbe_buffer *VAR_5;
 struct sk_buff *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 struct pch_gbe_tx_desc *VAR_9;

 VAR_8 =
     VAR_3->hw.mac.max_frame_size + VAR_2 + VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
  VAR_5 = &VAR_4->buffer_info[VAR_7];
  VAR_6 = FUNC_1(VAR_3->netdev, VAR_8);
  FUNC_2(VAR_6, VAR_2);
  VAR_5->skb = VAR_6;
  VAR_9 = FUNC_0(*VAR_4, VAR_7);
  VAR_9->gbec_status = (VAR_0);
 }
 return;
}
