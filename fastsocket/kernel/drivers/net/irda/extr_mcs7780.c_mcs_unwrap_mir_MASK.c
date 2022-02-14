
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; int protocol; } ;
struct mcs_cb {TYPE_2__* netdev; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_3__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_crc_errors; int rx_errors; int rx_length_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct mcs_cb *VAR_2, __u8 *VAR_3, int VAR_4)
{
 __u16 VAR_5;
 int VAR_6;
 struct sk_buff *VAR_7;





 VAR_6 = VAR_4 - 2;
 if(FUNC_9(VAR_6 <= 0)) {
  FUNC_0("%s short frame length %d\n",
        VAR_2->netdev->name, VAR_6);
  ++VAR_2->netdev->stats.rx_errors;
  ++VAR_2->netdev->stats.rx_length_errors;
  return;
 }
 VAR_5 = 0;
 VAR_5 = FUNC_3(~VAR_5, VAR_3, VAR_4);

 if(VAR_5 != VAR_1) {
  FUNC_0("crc error calc 0x%x len %d\n",
      VAR_5, VAR_6);
  VAR_2->netdev->stats.rx_errors++;
  VAR_2->netdev->stats.rx_crc_errors++;
  return;
 }

 VAR_7 = FUNC_1(VAR_6 + 1);
 if(FUNC_9(!VAR_7)) {
  ++VAR_2->netdev->stats.rx_dropped;
  return;
 }

 FUNC_7(VAR_7, 1);
 FUNC_5(VAR_7, VAR_3, VAR_6);
 FUNC_6(VAR_7, VAR_6);
 FUNC_8(VAR_7);
 VAR_7->protocol = FUNC_2(VAR_0);
 VAR_7->dev = VAR_2->netdev;

 FUNC_4(VAR_7);

 VAR_2->netdev->stats.rx_packets++;
 VAR_2->netdev->stats.rx_bytes += VAR_6;

 return;
}
