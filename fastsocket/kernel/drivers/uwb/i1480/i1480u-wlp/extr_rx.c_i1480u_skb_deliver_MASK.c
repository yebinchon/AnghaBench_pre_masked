
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct i1480u {scalar_t__ rx_untd_pkt_size; TYPE_3__* rx_skb; int rx_srcaddr; int wlp; TYPE_1__* usb_iface; struct net_device* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int protocol; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (TYPE_3__*,struct net_device*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct device*,int *,TYPE_3__*,int *) ;

__attribute__((used)) static
void FUNC_3(struct i1480u *VAR_0)
{
 int VAR_1;
 struct net_device *VAR_2 = VAR_0->net_dev;
 struct device *VAR_3 = &VAR_0->usb_iface->dev;

 VAR_1 = FUNC_2(VAR_3, &VAR_0->wlp, VAR_0->rx_skb,
      &VAR_0->rx_srcaddr);
 if (!VAR_1)
  goto out;
 VAR_0->rx_skb->protocol = FUNC_0(VAR_0->rx_skb, VAR_2);
 VAR_2->stats.rx_packets++;
 VAR_2->stats.rx_bytes += VAR_0->rx_untd_pkt_size;

 FUNC_1(VAR_0->rx_skb);
out:
 VAR_0->rx_skb = ((void*)0);
 VAR_0->rx_untd_pkt_size = 0;
}
