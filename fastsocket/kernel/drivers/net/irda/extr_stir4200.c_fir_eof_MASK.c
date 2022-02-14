
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int len; int truesize; scalar_t__ head; scalar_t__ data; struct sk_buff* skb; } ;
struct stir_cb {TYPE_2__* netdev; TYPE_3__ rx_buff; } ;
struct sk_buff {TYPE_2__* dev; int protocol; scalar_t__ data; } ;
typedef TYPE_3__ iobuff_t ;
typedef int __u32 ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_crc_errors; int rx_errors; int rx_length_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct stir_cb *VAR_2)
{
 iobuff_t *VAR_3 = &VAR_2->rx_buff;
 int VAR_4 = VAR_3->len - 4;
 struct sk_buff *VAR_5, *VAR_6;
 __u32 VAR_7;

 if (FUNC_10(VAR_4 <= 0)) {
  FUNC_5("%s: short frame len %d\n",
    VAR_2->netdev->name, VAR_4);

  ++VAR_2->netdev->stats.rx_errors;
  ++VAR_2->netdev->stats.rx_length_errors;
  return;
 }

 VAR_7 = ~(FUNC_0(~0, VAR_3->data, VAR_4));
 if (VAR_7 != FUNC_2(VAR_3->data + VAR_4)) {
  FUNC_5("crc error calc 0x%x len %d\n", VAR_7, VAR_4);
  VAR_2->netdev->stats.rx_errors++;
  VAR_2->netdev->stats.rx_crc_errors++;
  return;
 }


 if (VAR_4 < VAR_1) {
  VAR_6 = FUNC_1(VAR_4 + 1);
  if (FUNC_10(!VAR_6)) {
   ++VAR_2->netdev->stats.rx_dropped;
   return;
  }
  FUNC_8(VAR_6, 1);
  VAR_5 = VAR_6;
  FUNC_6(VAR_6, VAR_3->data, VAR_4);
 } else {
  VAR_6 = FUNC_1(VAR_3->truesize);
  if (FUNC_10(!VAR_6)) {
   ++VAR_2->netdev->stats.rx_dropped;
   return;
  }
  FUNC_8(VAR_6, 1);
  VAR_5 = VAR_3->skb;
  VAR_3->skb = VAR_6;
  VAR_3->head = VAR_6->data;
 }

 FUNC_7(VAR_5, VAR_4);

 FUNC_9(VAR_5);
 VAR_5->protocol = FUNC_3(VAR_0);
 VAR_5->dev = VAR_2->netdev;

 FUNC_4(VAR_5);

 VAR_2->netdev->stats.rx_packets++;
 VAR_2->netdev->stats.rx_bytes += VAR_4;

 VAR_3->data = VAR_3->head;
 VAR_3->len = 0;
}
