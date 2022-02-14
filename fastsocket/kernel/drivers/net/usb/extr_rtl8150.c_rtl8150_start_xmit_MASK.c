
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {int trans_start; TYPE_1__ stats; int dev; } ;
struct TYPE_6__ {int netdev; int tx_urb; int udev; struct sk_buff* tx_skb; } ;
typedef TYPE_2__ rtl8150_t ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ,int,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_5,
         struct net_device *VAR_6)
{
 rtl8150_t *VAR_7 = FUNC_1(VAR_6);
 int VAR_8, VAR_9;

 FUNC_4(VAR_6);
 VAR_8 = (VAR_5->len < 60) ? 60 : VAR_5->len;
 VAR_8 = (VAR_8 & 0x3f) ? VAR_8 : VAR_8 + 1;
 VAR_7->tx_skb = VAR_5;
 FUNC_5(VAR_7->tx_urb, VAR_7->udev, FUNC_6(VAR_7->udev, 2),
        VAR_5->data, VAR_8, VAR_4, VAR_7);
 if ((VAR_9 = FUNC_7(VAR_7->tx_urb, VAR_1))) {

  if (VAR_9 == -VAR_0)
   FUNC_2(VAR_7->netdev);
  else {
   FUNC_0(&VAR_6->dev, "failed tx_urb %d\n", VAR_9);
   VAR_6->stats.tx_errors++;
   FUNC_3(VAR_6);
  }
 } else {
  VAR_6->stats.tx_packets++;
  VAR_6->stats.tx_bytes += VAR_5->len;
  VAR_6->trans_start = VAR_3;
 }

 return VAR_2;
}
