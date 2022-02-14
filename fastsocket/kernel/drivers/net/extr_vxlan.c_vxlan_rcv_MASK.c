
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vxlan_stats {int syncp; int rx_bytes; int rx_packets; } ;
struct vxlan_sock {int dummy; } ;
struct vxlan_dev {int flags; int stats; TYPE_2__* dev; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; scalar_t__ encapsulation; int dev; int protocol; } ;
struct iphdr {int tos; int saddr; } ;
typedef int __u32 ;
typedef int __be32 ;
struct TYPE_6__ {int h_source; } ;
struct TYPE_4__ {int rx_errors; int rx_frame_errors; } ;
struct TYPE_5__ {int features; TYPE_1__ stats; int dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,TYPE_2__*) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct vxlan_stats* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 struct vxlan_dev* FUNC_16 (struct vxlan_sock*,int) ;

__attribute__((used)) static void FUNC_17(struct vxlan_sock *VAR_5,
        struct sk_buff *VAR_6, __be32 VAR_7)
{
 struct iphdr *VAR_8;
 struct vxlan_dev *VAR_9;
 struct vxlan_stats *VAR_10;
 __u32 VAR_11;
 int VAR_12;

 VAR_11 = FUNC_8(VAR_7) >> 8;

 VAR_9 = FUNC_16(VAR_5, VAR_11);
 if (!VAR_9)
  goto drop;

 FUNC_9(VAR_6);
 VAR_6->protocol = FUNC_3(VAR_6, VAR_9->dev);


 if (FUNC_1(FUNC_2(VAR_6)->h_source,
          VAR_9->dev->dev_addr) == 0)
  goto drop;


 VAR_8 = FUNC_4(VAR_6);
 if ((VAR_9->flags & VAR_3) &&
     FUNC_15(VAR_6->dev, VAR_8->saddr, FUNC_2(VAR_6)->h_source))
  goto drop;

 FUNC_10(VAR_6);






 if (VAR_6->ip_summed != VAR_1 || !VAR_6->encapsulation ||
     !(VAR_9->dev->features & VAR_2))
  VAR_6->ip_summed = VAR_0;

 VAR_6->encapsulation = 0;

 VAR_12 = FUNC_0(VAR_6);
 if (FUNC_14(VAR_12)) {
  if (VAR_4)
   FUNC_6("non-ECT from %pI4 with TOS=%#x\n",
          &VAR_8->saddr, VAR_8->tos);
  if (VAR_12 > 1) {
   ++VAR_9->dev->stats.rx_frame_errors;
   ++VAR_9->dev->stats.rx_errors;
   goto drop;
  }
 }

 VAR_10 = FUNC_11(VAR_9->stats);
 FUNC_12(&VAR_10->syncp);
 VAR_10->rx_packets++;
 VAR_10->rx_bytes += VAR_6->len;
 FUNC_13(&VAR_10->syncp);

 FUNC_7(VAR_6);

 return;
drop:

 FUNC_5(VAR_6);
}
