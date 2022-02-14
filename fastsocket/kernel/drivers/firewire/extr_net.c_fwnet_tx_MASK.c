
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u16 ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct rfc2734_arp {int sip; int fifo_lo; int fifo_hi; int sspd; int max_rec; int hw_addr_len; } ;
struct TYPE_7__ {int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_2__ stats; int broadcast; } ;
struct fwnet_peer {scalar_t__ fifo; unsigned int node_id; unsigned int max_payload; unsigned int datagram_label; int speed; scalar_t__ generation; } ;
struct TYPE_9__ {scalar_t__ w1; scalar_t__ w0; } ;
struct fwnet_packet_task {scalar_t__ fifo_addr; unsigned int dest_node; int outstanding_pkts; unsigned int max_payload; TYPE_4__ hdr; struct fwnet_device* dev; struct sk_buff* skb; int speed; scalar_t__ generation; } ;
struct fwnet_header {scalar_t__ h_proto; scalar_t__ h_dest; } ;
struct fwnet_device {unsigned int broadcast_xmt_max_payload; unsigned int broadcast_xmt_datagramlabel; int local_fifo; int lock; TYPE_1__* card; } ;
struct arphdr {int dummy; } ;
typedef int netdev_tx_t ;
typedef int hdr_buf ;
typedef int __be64 ;
typedef int __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_8__ {int daddr; } ;
struct TYPE_6__ {int link_speed; int max_receive; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_4__*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int VAR_12 ;
 struct fwnet_peer* FUNC_6 (struct fwnet_device*,int ) ;
 int FUNC_7 (struct fwnet_packet_task*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (struct sk_buff*) ;
 struct fwnet_packet_task* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct fwnet_packet_task*) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int) ;
 int FUNC_14 (struct fwnet_header*,scalar_t__,int) ;
 struct fwnet_device* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int,int *) ;
 int FUNC_20 (int,int *) ;
 int FUNC_21 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_22 (struct sk_buff*,int ) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_25(struct sk_buff *VAR_13, struct net_device *VAR_14)
{
 struct fwnet_header VAR_15;
 struct fwnet_device *VAR_16 = FUNC_15(VAR_14);
 __be16 VAR_17;
 u16 VAR_18;
 unsigned VAR_19;
 u16 VAR_20;
 u16 *VAR_21;
 struct fwnet_packet_task *VAR_22;
 struct fwnet_peer *VAR_23;
 unsigned long VAR_24;

 VAR_22 = FUNC_11(VAR_12, VAR_4);
 if (VAR_22 == ((void*)0))
  goto fail;

 VAR_13 = FUNC_22(VAR_13, VAR_4);
 if (!VAR_13)
  goto fail;





 FUNC_14(&VAR_15, VAR_13->data, sizeof(VAR_15));
 FUNC_21(VAR_13, sizeof(VAR_15));

 VAR_17 = VAR_15.h_proto;
 VAR_20 = VAR_13->len;


 FUNC_23(&VAR_16->lock, VAR_24);





 if (FUNC_13(VAR_15.h_dest, VAR_14->broadcast, VAR_2) == 0
     || VAR_17 == FUNC_9(VAR_0)
     || (VAR_17 == FUNC_9(VAR_1)
  && FUNC_1(FUNC_16(FUNC_10(VAR_13)->daddr)))) {
  VAR_19 = VAR_16->broadcast_xmt_max_payload;
  VAR_21 = &VAR_16->broadcast_xmt_datagramlabel;

  VAR_22->fifo_addr = VAR_3;
  VAR_22->generation = 0;
  VAR_22->dest_node = VAR_5;
  VAR_22->speed = VAR_11;
 } else {
  __be64 VAR_25 = FUNC_8((__be64 *)VAR_15.h_dest);
  u8 VAR_26;

  VAR_23 = FUNC_6(VAR_16, FUNC_2(VAR_25));
  if (!VAR_23 || VAR_23->fifo == VAR_3)
   goto fail_unlock;

  VAR_26 = VAR_23->generation;
  VAR_18 = VAR_23->node_id;
  VAR_19 = VAR_23->max_payload;
  VAR_21 = &VAR_23->datagram_label;

  VAR_22->fifo_addr = VAR_23->fifo;
  VAR_22->generation = VAR_26;
  VAR_22->dest_node = VAR_18;
  VAR_22->speed = VAR_23->speed;
 }


 if (VAR_17 == FUNC_9(VAR_0)) {
  struct arphdr *VAR_27 = (struct arphdr *)VAR_13->data;
  unsigned char *VAR_28 = (unsigned char *)(VAR_27 + 1);
  struct rfc2734_arp *VAR_29 = (struct rfc2734_arp *)VAR_13->data;
  __be32 VAR_30;

  VAR_30 = FUNC_8((__be32 *)(VAR_28 + VAR_2));

  VAR_29->hw_addr_len = VAR_10;
  VAR_29->max_rec = VAR_16->card->max_receive;
  VAR_29->sspd = VAR_16->card->link_speed;

  FUNC_19(VAR_16->local_fifo >> 32,
       &VAR_29->fifo_hi);
  FUNC_20(VAR_16->local_fifo & 0xffffffff,
       &VAR_29->fifo_lo);
  FUNC_18(VAR_30, &VAR_29->sip);
 }

 VAR_22->hdr.w0 = 0;
 VAR_22->hdr.w1 = 0;
 VAR_22->skb = VAR_13;
 VAR_22->dev = VAR_16;


 if (VAR_20 <= VAR_19) {
  FUNC_5(&VAR_22->hdr, FUNC_17(VAR_17));
  VAR_22->outstanding_pkts = 1;
  VAR_19 = VAR_20 + VAR_9;
 } else {
  u16 VAR_31;

  VAR_19 -= VAR_8;
  VAR_31 = (*VAR_21)++;
  FUNC_4(&VAR_22->hdr, FUNC_17(VAR_17), VAR_20,
      VAR_31);
  VAR_22->outstanding_pkts = FUNC_0(VAR_20, VAR_19);
  VAR_19 += VAR_7;
 }

 FUNC_24(&VAR_16->lock, VAR_24);

 VAR_22->max_payload = VAR_19;
 FUNC_7(VAR_22);

 return VAR_6;

 fail_unlock:
 FUNC_24(&VAR_16->lock, VAR_24);
 fail:
 if (VAR_22)
  FUNC_12(VAR_12, VAR_22);

 if (VAR_13 != ((void*)0))
  FUNC_3(VAR_13);

 VAR_14->stats.tx_dropped++;
 VAR_14->stats.tx_errors++;
 return VAR_6;
}
