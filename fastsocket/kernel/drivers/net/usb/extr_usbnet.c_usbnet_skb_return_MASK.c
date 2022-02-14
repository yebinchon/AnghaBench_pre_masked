
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbnet {TYPE_2__* net; int rxq_pause; int flags; } ;
struct skb_data {int dummy; } ;
struct sk_buff {int cb; int protocol; scalar_t__ len; } ;
struct ethhdr {int dummy; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct usbnet*,int ,TYPE_2__*,char*,int,...) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6 (struct usbnet *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6;

 if (FUNC_5(VAR_0, &VAR_4->flags)) {
  FUNC_4(&VAR_4->rxq_pause, VAR_5);
  return;
 }

 VAR_5->protocol = FUNC_0 (VAR_5, VAR_4->net);
 VAR_4->net->stats.rx_packets++;
 VAR_4->net->stats.rx_bytes += VAR_5->len;

 FUNC_2(VAR_4, VAR_3, VAR_4->net, "< rx, len %zu, type 0x%x\n",
    VAR_5->len + sizeof (struct ethhdr), VAR_5->protocol);
 FUNC_1 (VAR_5->cb, 0, sizeof (struct skb_data));
 VAR_6 = FUNC_3 (VAR_5);
 if (VAR_6 != VAR_1)
  FUNC_2(VAR_4, VAR_2, VAR_4->net,
     "netif_rx status %d\n", VAR_6);
}
