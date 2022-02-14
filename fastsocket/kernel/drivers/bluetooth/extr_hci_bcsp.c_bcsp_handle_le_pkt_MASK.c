
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_uart {struct bcsp_struct* priv; } ;
struct bcsp_struct {TYPE_1__* rx_skb; int unrel; } ;
struct TYPE_4__ {int pkt_type; } ;
struct TYPE_3__ {int* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct hci_uart*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct hci_uart *VAR_2)
{
 struct bcsp_struct *VAR_3 = VAR_2->priv;
 u8 VAR_4[4] = { 0xad, 0xef, 0xac, 0xed };
 u8 VAR_5[4] = { 0xde, 0xad, 0xd0, 0xd0 };
 u8 VAR_6[4] = { 0xda, 0xdc, 0xed, 0xed };


 if (VAR_3->rx_skb->data[1] >> 4 == 4 && VAR_3->rx_skb->data[2] == 0 &&
   !FUNC_5(&VAR_3->rx_skb->data[4], VAR_4, 4)) {
  struct sk_buff *VAR_7 = FUNC_2(4, VAR_1);

  FUNC_0("Found a LE conf pkt");
  if (!VAR_7)
   return;
  FUNC_6(FUNC_7(VAR_7, 4), VAR_5, 4);
  FUNC_3(VAR_7)->pkt_type = VAR_0;

  FUNC_8(&VAR_3->unrel, VAR_7);
  FUNC_4(VAR_2);
 }

 else if (VAR_3->rx_skb->data[1] >> 4 == 4 && VAR_3->rx_skb->data[2] == 0 &&
   !FUNC_5(&VAR_3->rx_skb->data[4], VAR_6, 4)) {
  FUNC_1("Found a LE sync pkt, card has reset");
 }
}
