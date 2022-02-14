
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vxlan_stats {int tx_bytes; int syncp; int tx_packets; } ;
struct vxlan_rdst {int remote_vni; int remote_ifindex; scalar_t__ remote_ip; scalar_t__ remote_port; } ;
struct vxlan_dev {int ttl; int tos; int stats; int vn_sock; int saddr; int port_max; int port_min; scalar_t__ dst_port; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct TYPE_4__ {TYPE_3__ dst; } ;
struct rtable {int rt_flags; TYPE_1__ u; } ;
struct TYPE_5__ {int tx_errors; int tx_dropped; int tx_aborted_errors; int collisions; int tx_carrier_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct iphdr {int dummy; } ;
struct flowi {int fl4_src; int fl4_tos; scalar_t__ fl4_dst; int proto; int oif; } ;
typedef int fl4 ;
typedef int __u8 ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,struct rtable**,struct flowi*) ;
 int FUNC_8 (struct rtable*) ;
 int FUNC_9 (int,struct iphdr const*,struct sk_buff*) ;
 int FUNC_10 (struct iphdr const*,struct sk_buff*) ;
 int FUNC_11 (struct flowi*,int ,int) ;
 int FUNC_12 (struct net_device*,char*,scalar_t__*) ;
 struct vxlan_dev* FUNC_13 (struct net_device*) ;
 int FUNC_14 (scalar_t__) ;
 struct vxlan_stats* FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sk_buff*,struct vxlan_dev*,struct vxlan_dev*) ;
 struct vxlan_dev* FUNC_19 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int ,struct sk_buff*) ;
 int FUNC_21 (int ,int ,struct rtable*,struct sk_buff*,int ,scalar_t__,int,int,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_22(struct sk_buff *VAR_5, struct net_device *VAR_6,
      struct vxlan_rdst *VAR_7, bool VAR_8)
{
 struct vxlan_dev *VAR_9 = FUNC_13(VAR_6);
 struct rtable *VAR_10;
 const struct iphdr *VAR_11;
 struct flowi VAR_12;
 __be32 VAR_13;
 __be16 VAR_14, VAR_15;
 u32 VAR_16;
 __be16 VAR_17 = 0;
 __u8 VAR_18, VAR_19;
 int VAR_20;

 VAR_15 = VAR_7->remote_port ? VAR_7->remote_port : VAR_9->dst_port;
 VAR_16 = VAR_7->remote_vni;
 VAR_13 = VAR_7->remote_ip;

 if (!VAR_13) {
  if (VAR_8) {

   FUNC_18(VAR_5, VAR_9, VAR_9);
   return;
  }
  goto drop;
 }

 VAR_11 = FUNC_6(VAR_5);

 VAR_19 = VAR_9->ttl;
 if (!VAR_19 && FUNC_0(FUNC_14(VAR_13)))
  VAR_19 = 1;

 VAR_18 = VAR_9->tos;
 if (VAR_18 == 1)
  VAR_18 = FUNC_10(VAR_11, VAR_5);

 VAR_14 = FUNC_20(VAR_9->port_min, VAR_9->port_max, VAR_5);

 FUNC_11(&VAR_12, 0, sizeof(VAR_12));
 VAR_12 = VAR_7->remote_ifindex;
 VAR_12 = VAR_0;
 VAR_12 = VAR_13;
 VAR_12 = VAR_9->saddr;
 VAR_12 = FUNC_1(VAR_18);
 VAR_20 = FUNC_7(FUNC_3(VAR_6), &VAR_10, &VAR_12);
 if (VAR_20) {
  FUNC_12(VAR_6, "no route to %pI4\n", &VAR_13);
  VAR_6->stats.tx_carrier_errors++;
  goto tx_error;
 }

 if (VAR_10->u.dst.dev == VAR_6) {
  FUNC_12(VAR_6, "circular route to %pI4\n", &VAR_13);
  VAR_6->stats.collisions++;
  goto rt_tx_error;
 }


 if (VAR_10->rt_flags & VAR_3 &&
     !(VAR_10->rt_flags & (VAR_2 | VAR_4))) {
  struct vxlan_dev *VAR_21;

  FUNC_8(VAR_10);
  VAR_21 = FUNC_19(FUNC_3(VAR_6), VAR_16, VAR_15);
  if (!VAR_21)
   goto tx_error;
  FUNC_18(VAR_5, VAR_9, VAR_21);
  return;
 }

 VAR_18 = FUNC_9(VAR_18, VAR_11, VAR_5);
 VAR_19 = VAR_19 ? : FUNC_4(&VAR_10->u.dst, VAR_1);

 VAR_20 = FUNC_21(FUNC_3(VAR_6), VAR_9->vn_sock, VAR_10, VAR_5,
        VAR_12, VAR_13, VAR_18, VAR_19, VAR_17,
        VAR_14, VAR_15, FUNC_5(VAR_16 << 8));

 if (VAR_20 < 0)
  goto rt_tx_error;

 if (VAR_20 > 0) {
  struct vxlan_stats *VAR_22 = FUNC_15(VAR_9->stats);

  FUNC_16(&VAR_22->syncp);
  VAR_22->tx_packets++;
  VAR_22->tx_bytes += VAR_20;
  FUNC_17(&VAR_22->syncp);
 } else {
  VAR_6->stats.tx_errors++;
  VAR_6->stats.tx_aborted_errors++;
 }
 return;

drop:
 VAR_6->stats.tx_dropped++;
 goto tx_free;

rt_tx_error:
 FUNC_8(VAR_10);
tx_error:
 VAR_6->stats.tx_errors++;
tx_free:
 FUNC_2(VAR_5);
}
