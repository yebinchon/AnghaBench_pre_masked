
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; int vlan_tci; } ;
struct rndis_filter_packet {int dummy; } ;
struct net_device_context {int device_ctx; } ;
struct TYPE_12__ {int tx_dropped; int tx_packets; int tx_bytes; } ;
struct net_device {TYPE_4__ stats; } ;
struct hv_page_buffer {int dummy; } ;
struct TYPE_10__ {unsigned long send_completion_tid; struct hv_netvsc_packet* send_completion_ctx; int send_completion; } ;
struct TYPE_11__ {TYPE_2__ send; } ;
struct hv_netvsc_packet {unsigned int page_buf_cnt; TYPE_3__ completion; TYPE_1__* page_buf; scalar_t__ total_data_buflen; void* extension; int vlan_tci; } ;
struct TYPE_13__ {int page_offset; } ;
typedef TYPE_5__ skb_frag_t ;
struct TYPE_14__ {unsigned int nr_frags; TYPE_5__* frags; } ;
struct TYPE_9__ {unsigned long pfn; unsigned long offset; unsigned long len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hv_netvsc_packet*) ;
 struct hv_netvsc_packet* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct net_device_context* FUNC_5 (struct net_device*) ;
 int VAR_7 ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ,struct hv_netvsc_packet*) ;
 int FUNC_8 (TYPE_5__ const*) ;
 unsigned long FUNC_9 (TYPE_5__ const*) ;
 unsigned long FUNC_10 (struct sk_buff*) ;
 TYPE_6__* FUNC_11 (struct sk_buff*) ;
 unsigned long FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct net_device_context *VAR_10 = FUNC_5(VAR_9);
 struct hv_netvsc_packet *VAR_11;
 int VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15;


 VAR_15 = (((unsigned long)VAR_8->data + FUNC_10(VAR_8) - 1)
  >> VAR_5) - ((unsigned long)VAR_8->data >> VAR_5) + 1;
 VAR_14 = FUNC_11(VAR_8)->nr_frags + VAR_15 + 2;


 VAR_11 = FUNC_3(sizeof(struct hv_netvsc_packet) +
    (VAR_14 * sizeof(struct hv_page_buffer)) +
    sizeof(struct rndis_filter_packet) +
    VAR_2, VAR_1);
 if (!VAR_11) {

  FUNC_4(VAR_9, "unable to allocate hv_netvsc_packet\n");

  FUNC_0(VAR_8);
  VAR_9->stats.tx_dropped++;
  return VAR_4;
 }

 VAR_11->vlan_tci = VAR_8->vlan_tci;

 VAR_11->extension = (void *)(unsigned long)VAR_11 +
    sizeof(struct hv_netvsc_packet) +
        (VAR_14 * sizeof(struct hv_page_buffer));


 VAR_11->page_buf_cnt = VAR_14 - 1;


 VAR_11->total_data_buflen = VAR_8->len;


 VAR_11->page_buf[1].pfn = FUNC_12(VAR_8->data) >> VAR_5;
 VAR_11->page_buf[1].offset
  = (unsigned long)VAR_8->data & (VAR_6 - 1);
 if (VAR_15 == 1)
  VAR_11->page_buf[1].len = FUNC_10(VAR_8);
 else
  VAR_11->page_buf[1].len = VAR_6
   - VAR_11->page_buf[1].offset;

 for (VAR_13 = 2; VAR_13 <= VAR_15; VAR_13++) {
  VAR_11->page_buf[VAR_13].pfn = FUNC_12(VAR_8->data
   + VAR_6 * (VAR_13-1)) >> VAR_5;
  VAR_11->page_buf[VAR_13].offset = 0;
  VAR_11->page_buf[VAR_13].len = VAR_6;
 }
 if (VAR_15 > 1)
  VAR_11->page_buf[VAR_15].len = (((unsigned long)VAR_8->data
   + FUNC_10(VAR_8) - 1) & (VAR_6 - 1)) + 1;


 for (VAR_13 = 0; VAR_13 < FUNC_11(VAR_8)->nr_frags; VAR_13++) {
  const skb_frag_t *VAR_16 = &FUNC_11(VAR_8)->frags[VAR_13];

  VAR_11->page_buf[VAR_13+VAR_15+1].pfn =
   FUNC_6(FUNC_8(VAR_16));
  VAR_11->page_buf[VAR_13+VAR_15+1].offset = VAR_16->page_offset;
  VAR_11->page_buf[VAR_13+VAR_15+1].len = FUNC_9(VAR_16);
 }


 VAR_11->completion.send.send_completion = VAR_7;
 VAR_11->completion.send.send_completion_ctx = VAR_11;
 VAR_11->completion.send.send_completion_tid = (unsigned long)VAR_8;

 VAR_12 = FUNC_7(VAR_10->device_ctx,
      VAR_11);
 if (VAR_12 == 0) {
  VAR_9->stats.tx_bytes += VAR_8->len;
  VAR_9->stats.tx_packets++;
 } else {
  FUNC_2(VAR_11);
  if (VAR_12 != -VAR_0) {
   FUNC_1(VAR_8);
   VAR_9->stats.tx_dropped++;
  }
 }

 return (VAR_12 == -VAR_0) ? VAR_3 : VAR_4;
}
