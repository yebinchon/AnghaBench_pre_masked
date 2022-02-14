
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tip ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int flags; } ;
struct sk_buff {int pkt_type; int ip_summed; } ;
struct TYPE_3__ {int rx_dropped; int tx_dropped; } ;
struct net_device {int flags; scalar_t__ addr_len; TYPE_1__ stats; } ;
struct neighbour {int nud_state; int ha; } ;
struct arphdr {scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_op; scalar_t__ ar_hln; int ar_pln; } ;
typedef int sip ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ remote_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int ,int ,int ,struct net_device*,int ,int *,int ,int *) ;
 struct arphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_14 ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct vxlan_fdb*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int) ;
 struct neighbour* FUNC_11 (int *,int *,struct net_device*) ;
 int FUNC_12 (struct neighbour*) ;
 struct vxlan_dev* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 struct vxlan_fdb* FUNC_18 (struct vxlan_dev*,int ) ;
 int FUNC_19 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_15, struct sk_buff *VAR_16)
{
 struct vxlan_dev *VAR_17 = FUNC_13(VAR_15);
 struct arphdr *VAR_18;
 u8 *VAR_19, *VAR_20;
 __be32 VAR_21, VAR_22;
 struct neighbour *VAR_23;

 if (VAR_15->flags & VAR_7)
  goto out;

 if (!FUNC_15(VAR_16, FUNC_3(VAR_15))) {
  VAR_15->stats.tx_dropped++;
  goto out;
 }
 VAR_18 = FUNC_2(VAR_16);

 if ((VAR_18->ar_hrd != FUNC_7(VAR_0) &&
      VAR_18->ar_hrd != FUNC_7(VAR_1)) ||
     VAR_18->ar_pro != FUNC_7(VAR_6) ||
     VAR_18->ar_op != FUNC_7(VAR_3) ||
     VAR_18->ar_hln != VAR_15->addr_len ||
     VAR_18->ar_pln != 4)
  goto out;
 VAR_19 = (u8 *)VAR_18 + sizeof(struct arphdr);
 VAR_20 = VAR_19;
 VAR_19 += VAR_15->addr_len;
 FUNC_10(&VAR_21, VAR_19, sizeof(VAR_21));
 VAR_19 += sizeof(VAR_21);
 VAR_19 += VAR_15->addr_len;
 FUNC_10(&VAR_22, VAR_19, sizeof(VAR_22));

 if (FUNC_8(VAR_22) ||
     FUNC_9(VAR_22))
  goto out;

 VAR_23 = FUNC_11(&VAR_14, &VAR_22, VAR_15);

 if (VAR_23) {
  struct vxlan_fdb *VAR_24;
  struct sk_buff *VAR_25;

  if (!(VAR_23->nud_state & VAR_11)) {
   FUNC_12(VAR_23);
   goto out;
  }

  VAR_24 = FUNC_18(VAR_17, VAR_23->ha);
  if (VAR_24 && FUNC_5(VAR_24)->remote_ip == FUNC_6(VAR_8)) {

   FUNC_12(VAR_23);
   goto out;
  }

  VAR_25 = FUNC_1(VAR_2, VAR_5, VAR_21, VAR_15, VAR_22, VAR_20,
    VAR_23->ha, VAR_20);

  FUNC_12(VAR_23);

  FUNC_17(VAR_25);
  FUNC_0(VAR_25, FUNC_16(VAR_25));
  VAR_25->ip_summed = VAR_4;
  VAR_25->pkt_type = VAR_12;

  if (FUNC_14(VAR_25) == VAR_10)
   VAR_15->stats.rx_dropped++;
 } else if (VAR_17->flags & VAR_13)
  FUNC_19(VAR_15, VAR_22);
out:
 FUNC_4(VAR_16);
 return VAR_9;
}
