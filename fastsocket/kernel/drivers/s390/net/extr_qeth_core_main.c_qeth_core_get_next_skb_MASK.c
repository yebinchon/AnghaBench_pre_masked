
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qeth_qdio_buffer {struct qdio_buffer* buffer; } ;
struct TYPE_12__ {int pdu_length; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_10__ {int id; int pkt_length; } ;
struct TYPE_13__ {TYPE_3__ osn; TYPE_2__ l3; TYPE_1__ l2; } ;
struct qeth_hdr {TYPE_4__ hdr; } ;
struct TYPE_17__ {int rx_dropped; int rx_errors; } ;
struct TYPE_16__ {int sg_frags_rx; int sg_skbs_rx; } ;
struct TYPE_15__ {int rx_sg_cb; scalar_t__ cq; scalar_t__ performance_stats; } ;
struct TYPE_14__ {scalar_t__ type; int link_type; } ;
struct qeth_card {TYPE_8__ stats; TYPE_7__ perf_stats; TYPE_6__ options; int force_alloc_skb; TYPE_5__ info; } ;
struct qdio_buffer_element {int length; struct qeth_hdr* addr; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_18__ {scalar_t__ nr_frags; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int,struct qdio_buffer*,int) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int ) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,void*,int) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (struct qeth_qdio_buffer*,struct qdio_buffer_element*,struct sk_buff**,int,int*,int) ;
 scalar_t__ FUNC_11 (struct qdio_buffer_element*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 TYPE_9__* FUNC_14 (struct sk_buff*) ;

struct sk_buff *FUNC_15(struct qeth_card *VAR_9,
  struct qeth_qdio_buffer *VAR_10,
  struct qdio_buffer_element **VAR_11, int *VAR_12,
  struct qeth_hdr **VAR_13)
{
 struct qdio_buffer_element *VAR_14 = *VAR_11;
 struct qdio_buffer *VAR_15 = VAR_10->buffer;
 int VAR_16 = *VAR_12;
 struct sk_buff *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 void *VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;


 if (VAR_14->length < VAR_16 + sizeof(struct qeth_hdr)) {
  if (FUNC_11(VAR_14))
   return ((void*)0);
  VAR_14++;
  VAR_16 = 0;
  if (VAR_14->length < sizeof(struct qeth_hdr))
   return ((void*)0);
 }
 *VAR_13 = VAR_14->addr + VAR_16;

 VAR_16 += sizeof(struct qeth_hdr);
 switch ((*VAR_13)->hdr.l2.id) {
 case 130:
  VAR_18 = (*VAR_13)->hdr.l2.pkt_length;
  break;
 case 129:
  VAR_18 = (*VAR_13)->hdr.l3.length;
  if ((VAR_9->info.link_type == VAR_6) ||
      (VAR_9->info.link_type == VAR_5))
   VAR_21 = VAR_8;
  else
   VAR_21 = VAR_0;
  break;
 case 128:
  VAR_18 = (*VAR_13)->hdr.osn.pdu_length;
  VAR_21 = sizeof(struct qeth_hdr);
  break;
 default:
  break;
 }

 if (!VAR_18)
  return ((void*)0);

 if (((VAR_18 >= VAR_9->options.rx_sg_cb) &&
      (!(VAR_9->info.type == VAR_3)) &&
      (!FUNC_4(&VAR_9->force_alloc_skb))) ||
     (VAR_9->options.cq == VAR_4)) {
  VAR_22 = 1;
 } else {
  VAR_17 = FUNC_5(VAR_18 + VAR_21);
  if (!VAR_17)
   goto no_mem;
  if (VAR_21)
   FUNC_13(VAR_17, VAR_21);
 }

 VAR_19 = VAR_14->addr + VAR_16;
 while (VAR_18) {
  VAR_20 = FUNC_8(VAR_18, (int)(VAR_14->length - VAR_16));
  if (VAR_20) {
   if (VAR_22) {
    if (FUNC_10(VAR_10, VAR_14,
        &VAR_17, VAR_16, &VAR_23, VAR_20))
     goto no_mem;
   } else {
    FUNC_7(FUNC_12(VAR_17, VAR_20), VAR_19,
     VAR_20);
   }
  }
  VAR_18 -= VAR_20;
  if (VAR_18) {
   if (FUNC_11(VAR_14)) {
    FUNC_2(VAR_7, 4, "unexeob");
    FUNC_3(VAR_7, 4, "%s",
     FUNC_0(VAR_9));
    FUNC_2(VAR_2, 2, "unexeob");
    FUNC_3(VAR_2, 2, "%s",
     FUNC_0(VAR_9));
    FUNC_1(VAR_1, 4, VAR_15, sizeof(*VAR_15));
    FUNC_6(VAR_17);
    VAR_9->stats.rx_errors++;
    return ((void*)0);
   }
   VAR_14++;
   VAR_16 = 0;
   VAR_19 = VAR_14->addr;
  } else {
   VAR_16 += VAR_20;
  }
 }
 *VAR_11 = VAR_14;
 *VAR_12 = VAR_16;
 if (VAR_22 && VAR_9->options.performance_stats) {
  VAR_9->perf_stats.sg_skbs_rx++;
  VAR_9->perf_stats.sg_frags_rx += FUNC_14(VAR_17)->nr_frags;
 }
 return VAR_17;
no_mem:
 if (FUNC_9()) {
  FUNC_2(VAR_7, 2, "noskbmem");
  FUNC_3(VAR_7, 2, "%s", FUNC_0(VAR_9));
 }
 VAR_9->stats.rx_dropped++;
 return ((void*)0);
}
