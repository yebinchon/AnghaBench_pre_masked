
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tso_state {int tcp_off; scalar_t__ out_len; scalar_t__ packet_space; unsigned int ip_base_len; void* protocol; int ip_off; unsigned int ipv4_id; int seqnum; int header_len; } ;
struct tcphdr {scalar_t__ psh; scalar_t__ fin; int seq; } ;
struct sk_buff {int data; } ;
struct ipv6hdr {void* payload_len; } ;
struct iphdr {void* id; void* tot_len; } ;
struct efx_tx_queue {size_t insert_count; size_t ptr_mask; int tso_packets; struct efx_tx_buffer* buffer; } ;
struct efx_tx_buffer {int dummy; } ;
struct TYPE_4__ {scalar_t__ gso_size; } ;
struct TYPE_3__ {scalar_t__ psh; scalar_t__ fin; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct efx_tx_queue*,struct efx_tx_buffer*,int *) ;
 int * FUNC_1 (struct efx_tx_queue*,struct efx_tx_buffer*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_2__* FUNC_5 (struct sk_buff const*) ;
 TYPE_1__* FUNC_6 (struct sk_buff const*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct efx_tx_queue *VAR_2,
    const struct sk_buff *VAR_3,
    struct tso_state *VAR_4)
{
 struct efx_tx_buffer *VAR_5 =
  &VAR_2->buffer[VAR_2->insert_count & VAR_2->ptr_mask];
 struct tcphdr *VAR_6;
 unsigned VAR_7;
 u8 *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_4->header_len);
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = (struct tcphdr *)(VAR_8 + VAR_4->tcp_off);


 FUNC_4(VAR_8, VAR_3->data, VAR_4->header_len);

 VAR_6->seq = FUNC_2(VAR_4->seqnum);
 VAR_4->seqnum += FUNC_5(VAR_3)->gso_size;
 if (VAR_4->out_len > FUNC_5(VAR_3)->gso_size) {

  VAR_4->packet_space = FUNC_5(VAR_3)->gso_size;
  VAR_6->fin = 0;
  VAR_6->psh = 0;
 } else {

  VAR_4->packet_space = VAR_4->out_len;
  VAR_6->fin = FUNC_6(VAR_3)->fin;
  VAR_6->psh = FUNC_6(VAR_3)->psh;
 }
 VAR_7 = VAR_4->ip_base_len + VAR_4->packet_space;

 if (VAR_4->protocol == FUNC_3(VAR_1)) {
  struct iphdr *VAR_10 = (struct iphdr *)(VAR_8 + VAR_4->ip_off);

  VAR_10->tot_len = FUNC_3(VAR_7);


  VAR_10->id = FUNC_3(VAR_4->ipv4_id);
  VAR_4->ipv4_id++;
 } else {
  struct ipv6hdr *VAR_11 =
   (struct ipv6hdr *)(VAR_8 + VAR_4->ip_off);

  VAR_11->payload_len = FUNC_3(VAR_7);
 }

 VAR_9 = FUNC_0(VAR_2, VAR_5, VAR_8);
 if (FUNC_7(VAR_9))
  return VAR_9;

 ++VAR_2->tso_packets;

 return 0;
}
