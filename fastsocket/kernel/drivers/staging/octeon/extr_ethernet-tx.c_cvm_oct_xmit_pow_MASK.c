
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct sk_buff {int len; scalar_t__ protocol; scalar_t__ pkt_type; scalar_t__ data; int csum; } ;
struct TYPE_12__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct octeon_ethernet {int port; TYPE_2__ stats; } ;
struct net_device {int name; } ;
struct TYPE_11__ {int is_rarp; int is_arp; int is_bcast; int is_mcast; int not_IP; scalar_t__ err_code; scalar_t__ rcv_error; scalar_t__ software; scalar_t__ vlan_id; scalar_t__ vlan_cfi; scalar_t__ vlan_valid; } ;
struct TYPE_16__ {int bufs; int ip_offset; int tcp_or_udp; int is_frag; int is_bcast; int is_mcast; scalar_t__ err_code; scalar_t__ rcv_error; scalar_t__ not_IP; scalar_t__ IP_exc; scalar_t__ L4_error; scalar_t__ software; scalar_t__ is_v6; scalar_t__ dec_ipsec; scalar_t__ dec_ipcomp; scalar_t__ vlan_id; scalar_t__ vlan_cfi; scalar_t__ vlan_valid; } ;
struct TYPE_15__ {TYPE_1__ snoip; TYPE_6__ s; scalar_t__ u64; } ;
struct TYPE_13__ {int back; int size; int pool; int addr; } ;
struct TYPE_14__ {TYPE_3__ s; scalar_t__ u64; } ;
struct TYPE_17__ {int len; int ipprt; int qos; void* packet_data; void* grp; int tag_type; void* tag; TYPE_5__ word2; TYPE_4__ packet_ptr; int hw_chksum; } ;
typedef TYPE_7__ cvmx_wqe_t ;
struct TYPE_18__ {scalar_t__ protocol; int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;
 int FUNC_4 (TYPE_7__*,void*,int ,int,void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_8__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (void*,scalar_t__,int) ;
 struct octeon_ethernet* FUNC_10 (struct net_device*) ;
 void* VAR_12 ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(struct sk_buff *VAR_13, struct net_device *VAR_14)
{
 struct octeon_ethernet *VAR_15 = FUNC_10(VAR_14);
 void *VAR_16;
 void *VAR_17;


 cvmx_wqe_t *VAR_18 = FUNC_2(VAR_2);
 if (FUNC_11(VAR_18 == ((void*)0))) {
  FUNC_0("%s: Failed to allocate a work queue entry\n",
      VAR_14->name);
  VAR_15->stats.tx_dropped++;
  FUNC_6(VAR_13);
  return 0;
 }


 VAR_16 = FUNC_2(VAR_0);
 if (FUNC_11(VAR_16 == ((void*)0))) {
  FUNC_0("%s: Failed to allocate a packet buffer\n",
      VAR_14->name);
  FUNC_3(VAR_18, VAR_2, FUNC_1(1));
  VAR_15->stats.tx_dropped++;
  FUNC_6(VAR_13);
  return 0;
 }
 VAR_17 = VAR_16 + sizeof(uint64_t);
 VAR_17 += ((VAR_3 + 7) & 0xfff8) + 6;







 FUNC_9(VAR_17, VAR_13->data, VAR_13->len);





 VAR_18->hw_chksum = VAR_13->csum;
 VAR_18->len = VAR_13->len;
 VAR_18->ipprt = VAR_15->port;
 VAR_18->qos = VAR_15->port & 0x7;
 VAR_18->grp = VAR_12;
 VAR_18->tag_type = VAR_4;
 VAR_18->tag = VAR_12;

 VAR_18->word2.u64 = 0;
 VAR_18->word2.s.bufs = 1;
 VAR_18->packet_ptr.u64 = 0;
 VAR_18->packet_ptr.s.addr = FUNC_5(VAR_17);
 VAR_18->packet_ptr.s.pool = VAR_0;
 VAR_18->packet_ptr.s.size = VAR_1;
 VAR_18->packet_ptr.s.back = (VAR_17 - VAR_16) >> 7;

 if (VAR_13->protocol == FUNC_7(VAR_6)) {
  VAR_18->word2.s.ip_offset = 14;






  VAR_18->word2.s.tcp_or_udp =
      (FUNC_8(VAR_13)->protocol == VAR_8)
      || (FUNC_8(VAR_13)->protocol == VAR_9);
  VAR_18->word2.s.is_frag = !((FUNC_8(VAR_13)->frag_off == 0)
       || (FUNC_8(VAR_13)->frag_off ==
           1 << 14));




  VAR_18->word2.s.is_bcast = (VAR_13->pkt_type == VAR_10);
  VAR_18->word2.s.is_mcast = (VAR_13->pkt_type == VAR_11);
  FUNC_9(VAR_18->packet_data, VAR_13->data + 10,
         sizeof(VAR_18->packet_data));
 } else {






  VAR_18->word2.snoip.is_rarp = VAR_13->protocol == FUNC_7(VAR_7);
  VAR_18->word2.snoip.is_arp = VAR_13->protocol == FUNC_7(VAR_5);
  VAR_18->word2.snoip.is_bcast =
      (VAR_13->pkt_type == VAR_10);
  VAR_18->word2.snoip.is_mcast =
      (VAR_13->pkt_type == VAR_11);
  VAR_18->word2.snoip.not_IP = 1;






  FUNC_9(VAR_18->packet_data, VAR_13->data, sizeof(VAR_18->packet_data));
 }


 FUNC_4(VAR_18, VAR_18->tag, VAR_18->tag_type, VAR_18->qos,
        VAR_18->grp);
 VAR_15->stats.tx_packets++;
 VAR_15->stats.tx_bytes += VAR_13->len;
 FUNC_6(VAR_13);
 return 0;
}
