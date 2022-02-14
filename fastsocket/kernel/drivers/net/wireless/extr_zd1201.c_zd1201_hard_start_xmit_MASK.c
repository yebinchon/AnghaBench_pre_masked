
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd1201 {unsigned char* txdata; struct urb* tx_urb; int endp_out; int usb; scalar_t__ monitor; int mac_enabled; } ;
struct urb {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_errors; int tx_dropped; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;
typedef int netdev_tx_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 struct zd1201* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_6 (struct sk_buff*,int,unsigned char*,int) ;
 int FUNC_7 (struct urb*,int ,int ,unsigned char*,int,int ,struct zd1201*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int VAR_3 ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_4,
      struct net_device *VAR_5)
{
 struct zd1201 *VAR_6 = FUNC_2(VAR_5);
 unsigned char *VAR_7 = VAR_6->txdata;
 int VAR_8, VAR_9 = 0, VAR_10;
 struct urb *VAR_11 = VAR_6->tx_urb;

 if (!VAR_6->mac_enabled || VAR_6->monitor) {
  VAR_5->stats.tx_dropped++;
  FUNC_1(VAR_4);
  return VAR_1;
 }
 FUNC_4(VAR_5);

 VAR_8 = VAR_4->len + 8 + 1;
 if (VAR_8%64 == 0) {
  VAR_9 = 1;
  VAR_8++;
 }
 VAR_7[0] = 0xAA;
 VAR_7[1] = 0xAA;
 VAR_7[2] = 0x03;
 VAR_7[3] = 0x00;
 VAR_7[4] = 0x00;
 VAR_7[5] = 0x00;

 FUNC_6(VAR_4, 12, VAR_7 + 6, VAR_4->len - 12);
 if (VAR_9)
  VAR_7[VAR_4->len-12+6]=0;
 FUNC_5(VAR_4, VAR_7 + VAR_4->len - 12 + 6 + VAR_9, 12);
 *(__be16*)&VAR_7[VAR_4->len+6+VAR_9] = FUNC_0(VAR_4->len-12+6);
 VAR_7[VAR_8-1] = 0;

 FUNC_7(VAR_11, VAR_6->usb, FUNC_8(VAR_6->usb, VAR_6->endp_out),
     VAR_7, VAR_8, VAR_3, VAR_6);

 VAR_10 = FUNC_9(VAR_6->tx_urb, VAR_0);
 if (VAR_10) {
  VAR_5->stats.tx_errors++;
  FUNC_3(VAR_5);
 } else {
  VAR_5->stats.tx_packets++;
  VAR_5->stats.tx_bytes += VAR_4->len;
  VAR_5->trans_start = VAR_2;
 }
 FUNC_1(VAR_4);

 return VAR_1;
}
