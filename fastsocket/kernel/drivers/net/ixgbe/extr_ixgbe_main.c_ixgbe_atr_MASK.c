
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flow_type; int vlan_id; } ;
struct TYPE_6__ {int src; int dst; } ;
union ixgbe_atr_hash_dword {int ip; TYPE_2__ formatted; TYPE_1__ port; int dword; } ;
struct tcphdr {int dest; int source; int syn; scalar_t__ fin; } ;
struct ixgbe_tx_buffer {int protocol; int tx_flags; int skb; } ;
struct ixgbe_ring {scalar_t__ atr_sample_rate; scalar_t__ atr_count; int queue_index; struct ixgbe_q_vector* q_vector; } ;
struct ixgbe_q_vector {TYPE_5__* adapter; } ;
struct TYPE_9__ {int* s6_addr32; } ;
struct TYPE_8__ {int* s6_addr32; } ;
struct ipv6hdr {scalar_t__ nexthdr; TYPE_4__ daddr; TYPE_3__ saddr; } ;
struct iphdr {scalar_t__ protocol; int saddr; int daddr; } ;
typedef int __be16 ;
struct TYPE_10__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,union ixgbe_atr_hash_dword,union ixgbe_atr_hash_dword,int ) ;
 unsigned char* FUNC_3 (int ) ;
 struct tcphdr* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_ring *VAR_9,
        struct ixgbe_tx_buffer *VAR_10)
{
 struct ixgbe_q_vector *VAR_11 = VAR_9->q_vector;
 union ixgbe_atr_hash_dword VAR_12 = { .dword = 0 };
 union ixgbe_atr_hash_dword VAR_13 = { .dword = 0 };
 union {
  unsigned char *network;
  struct iphdr *ipv4;
  struct ipv6hdr *ipv6;
 } VAR_14;
 struct tcphdr *VAR_15;
 __be16 VAR_16;


 if (!VAR_11)
  return;


 if (!VAR_9->atr_sample_rate)
  return;

 VAR_9->atr_count++;


 VAR_14.network = FUNC_3(VAR_10->skb);


 if ((VAR_10->protocol != FUNC_0(VAR_2) ||
      VAR_14.ipv6->nexthdr != VAR_3) &&
     (VAR_10->protocol != FUNC_0(VAR_1) ||
      VAR_14.ipv4->protocol != VAR_3))
  return;

 VAR_15 = FUNC_4(VAR_10->skb);


 if (!VAR_15 || VAR_15->fin)
  return;


 if (!VAR_15->syn && (VAR_9->atr_count < VAR_9->atr_sample_rate))
  return;


 VAR_9->atr_count = 0;

 VAR_16 = FUNC_1(VAR_10->tx_flags >> VAR_8);
 VAR_12.formatted.vlan_id = VAR_16;





 if (VAR_10->tx_flags & (VAR_7 | VAR_6))
  VAR_13.port.src ^= VAR_15->dest ^ FUNC_0(VAR_0);
 else
  VAR_13.port.src ^= VAR_15->dest ^ VAR_10->protocol;
 VAR_13.port.dst ^= VAR_15->source;

 if (VAR_10->protocol == FUNC_0(VAR_1)) {
  VAR_12.formatted.flow_type = VAR_4;
  VAR_13.ip ^= VAR_14.ipv4->saddr ^ VAR_14.ipv4->daddr;
 } else {
  VAR_12.formatted.flow_type = VAR_5;
  VAR_13.ip ^= VAR_14.ipv6->saddr.s6_addr32[0] ^
        VAR_14.ipv6->saddr.s6_addr32[1] ^
        VAR_14.ipv6->saddr.s6_addr32[2] ^
        VAR_14.ipv6->saddr.s6_addr32[3] ^
        VAR_14.ipv6->daddr.s6_addr32[0] ^
        VAR_14.ipv6->daddr.s6_addr32[1] ^
        VAR_14.ipv6->daddr.s6_addr32[2] ^
        VAR_14.ipv6->daddr.s6_addr32[3];
 }


 FUNC_2(&VAR_11->adapter->hw,
           VAR_12, VAR_13, VAR_9->queue_index);
}
