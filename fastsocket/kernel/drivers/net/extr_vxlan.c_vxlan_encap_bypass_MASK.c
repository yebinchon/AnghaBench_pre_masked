
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vxlan_stats {int syncp; int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct vxlan_dev {int flags; TYPE_2__* dev; int stats; } ;
struct sk_buff {TYPE_2__* dev; scalar_t__ len; scalar_t__ encapsulation; int pkt_type; } ;
struct TYPE_6__ {int h_source; } ;
struct TYPE_4__ {int rx_dropped; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct vxlan_stats* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_4, struct vxlan_dev *VAR_5,
          struct vxlan_dev *VAR_6)
{
 struct vxlan_stats *VAR_7 = FUNC_5(VAR_5->stats);
 struct vxlan_stats *VAR_8 = FUNC_5(VAR_6->stats);

 VAR_4->pkt_type = VAR_2;
 VAR_4->encapsulation = 0;
 VAR_4->dev = VAR_6->dev;
 FUNC_0(VAR_4, FUNC_4(VAR_4));

 if (VAR_6->flags & VAR_3)
  FUNC_8(VAR_4->dev, FUNC_2(VAR_0),
       FUNC_1(VAR_4)->h_source);

 FUNC_6(&VAR_7->syncp);
 VAR_7->tx_packets++;
 VAR_7->tx_bytes += VAR_4->len;
 FUNC_7(&VAR_7->syncp);

 if (FUNC_3(VAR_4) == VAR_1) {
  FUNC_6(&VAR_8->syncp);
  VAR_8->rx_packets++;
  VAR_8->rx_bytes += VAR_4->len;
  FUNC_7(&VAR_8->syncp);
 } else {
  VAR_4->dev->stats.rx_dropped++;
 }
}
