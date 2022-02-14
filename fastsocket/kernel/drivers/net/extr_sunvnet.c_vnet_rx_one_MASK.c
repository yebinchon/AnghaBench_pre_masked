
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lp; } ;
struct vnet_port {TYPE_2__ vio; TYPE_1__* vp; } ;
struct sk_buff {int protocol; int data; } ;
struct TYPE_6__ {unsigned int rx_bytes; int rx_dropped; int rx_packets; int rx_frame_errors; int rx_missed_errors; int rx_length_errors; } ;
struct net_device {TYPE_3__ stats; } ;
struct ldc_trans_cookie {int dummy; } ;
struct TYPE_4__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct sk_buff* FUNC_0 (struct net_device*,unsigned int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ,unsigned int,int ,struct ldc_trans_cookie*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct vnet_port *VAR_6, unsigned int VAR_7,
         struct ldc_trans_cookie *VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = VAR_6->vp->dev;
 unsigned int VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13;

 VAR_13 = -VAR_0;
 if (FUNC_8(VAR_7 < VAR_3 || VAR_7 > VAR_2)) {
  VAR_10->stats.rx_length_errors++;
  goto out_dropped;
 }

 VAR_12 = FUNC_0(VAR_10, VAR_7);
 VAR_13 = -VAR_1;
 if (FUNC_8(!VAR_12)) {
  VAR_10->stats.rx_missed_errors++;
  goto out_dropped;
 }

 VAR_11 = (VAR_7 + VAR_5 + 7U) & ~7U;
 FUNC_6(VAR_12, VAR_11);
 VAR_13 = FUNC_3(VAR_6->vio.lp, VAR_4,
         VAR_12->data, VAR_11, 0,
         VAR_8, VAR_9);
 if (FUNC_8(VAR_13 < 0)) {
  VAR_10->stats.rx_frame_errors++;
  goto out_free_skb;
 }

 FUNC_5(VAR_12, VAR_5);
 FUNC_7(VAR_12, VAR_7);
 VAR_12->protocol = FUNC_1(VAR_12, VAR_10);

 VAR_10->stats.rx_packets++;
 VAR_10->stats.rx_bytes += VAR_7;

 FUNC_4(VAR_12);

 return 0;

out_free_skb:
 FUNC_2(VAR_12);

out_dropped:
 VAR_10->stats.rx_dropped++;
 return VAR_13;
}
