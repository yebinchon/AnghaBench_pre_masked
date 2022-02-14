
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; int protocol; } ;
struct mcs_cb {TYPE_2__* netdev; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_3__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_crc_errors; int rx_errors; int rx_length_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int *,int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int *,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct mcs_cb *VAR_1, __u8 *VAR_2, int VAR_3)
{
 __u32 VAR_4;
 int VAR_5;
 struct sk_buff *VAR_6;






 VAR_5 = VAR_3 - 4;
 if(FUNC_10(VAR_5 <= 0)) {
  FUNC_0("%s short frame length %d\n",
      VAR_1->netdev->name, VAR_5);
  ++VAR_1->netdev->stats.rx_errors;
  ++VAR_1->netdev->stats.rx_length_errors;
  return;
 }

 VAR_4 = ~(FUNC_1(~0, VAR_2, VAR_5));
 if(VAR_4 != FUNC_3(VAR_2 + VAR_5)) {
  FUNC_0("crc error calc 0x%x len %d\n", VAR_4, VAR_5);
  VAR_1->netdev->stats.rx_errors++;
  VAR_1->netdev->stats.rx_crc_errors++;
  return;
 }

 VAR_6 = FUNC_2(VAR_5 + 1);
 if(FUNC_10(!VAR_6)) {
  ++VAR_1->netdev->stats.rx_dropped;
  return;
 }

 FUNC_8(VAR_6, 1);
 FUNC_6(VAR_6, VAR_2, VAR_5);
 FUNC_7(VAR_6, VAR_5);
 FUNC_9(VAR_6);
 VAR_6->protocol = FUNC_4(VAR_0);
 VAR_6->dev = VAR_1->netdev;

 FUNC_5(VAR_6);

 VAR_1->netdev->stats.rx_packets++;
 VAR_1->netdev->stats.rx_bytes += VAR_5;

 return;
}
