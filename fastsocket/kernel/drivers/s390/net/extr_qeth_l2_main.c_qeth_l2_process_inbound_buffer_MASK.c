
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct sk_buff {unsigned int len; scalar_t__ cb; int protocol; int ip_summed; int dev; int pkt_type; } ;
struct TYPE_15__ {int id; } ;
struct TYPE_16__ {TYPE_4__ l2; } ;
struct qeth_hdr {TYPE_5__ hdr; } ;
struct TYPE_11__ {unsigned int rx_bytes; int rx_packets; } ;
struct TYPE_20__ {int (* data_cb ) (struct sk_buff*) ;} ;
struct TYPE_19__ {int type; } ;
struct TYPE_18__ {int pkt_seqno; } ;
struct TYPE_17__ {int checksum_type; } ;
struct TYPE_14__ {size_t b_index; int e_offset; int b_element; } ;
struct TYPE_13__ {TYPE_1__* in_q; } ;
struct qeth_card {TYPE_10__ stats; TYPE_9__ osn_info; TYPE_8__ info; TYPE_7__ seqno; TYPE_6__ options; int dev; TYPE_3__ rx; TYPE_2__ qdio; } ;
typedef int __u32 ;
struct TYPE_12__ {int * bufs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,struct qeth_hdr*,int ) ;
 int FUNC_2 (int ,int,char*) ;


 int VAR_8 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct qeth_card*,int *,int *,int *,struct qeth_hdr**) ;
 int FUNC_8 (struct sk_buff*,struct qeth_hdr*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_9,
    int VAR_10, int *VAR_11)
{
 int VAR_12 = 0;
 struct sk_buff *VAR_13;
 struct qeth_hdr *VAR_14;
 unsigned int VAR_15;

 *VAR_11 = 0;
 FUNC_0(!VAR_10);
 while (VAR_10) {
  VAR_13 = FUNC_7(VAR_9,
   &VAR_9->qdio.in_q->bufs[VAR_9->rx.b_index],
   &VAR_9->rx.b_element, &VAR_9->rx.e_offset, &VAR_14);
  if (!VAR_13) {
   *VAR_11 = 1;
   break;
  }
  VAR_13->dev = VAR_9->dev;
  switch (VAR_14->hdr.l2.id) {
  case 129:
   VAR_13->pkt_type = VAR_5;
   VAR_13->protocol = FUNC_4(VAR_13, VAR_13->dev);
   if (VAR_9->options.checksum_type == VAR_4)
    VAR_13->ip_summed = VAR_1;
   else
    VAR_13->ip_summed = VAR_0;
   if (VAR_13->protocol == FUNC_5(VAR_3))
    *((__u32 *)VAR_13->cb) = ++VAR_9->seqno.pkt_seqno;
   VAR_15 = VAR_13->len;
   FUNC_6(VAR_13);
   break;
  case 128:
   if (VAR_9->info.type == VAR_6) {
    FUNC_9(VAR_13, sizeof(struct qeth_hdr));
    FUNC_8(VAR_13, VAR_14,
      sizeof(struct qeth_hdr));
    VAR_15 = VAR_13->len;
    VAR_9->osn_info.data_cb(VAR_13);
    break;
   }

  default:
   FUNC_3(VAR_13);
   FUNC_2(VAR_8, 3, "inbunkno");
   FUNC_1(VAR_2, 3, VAR_14, VAR_7);
   continue;
  }
  VAR_12++;
  VAR_10--;
  VAR_9->stats.rx_packets++;
  VAR_9->stats.rx_bytes += VAR_15;
 }
 return VAR_12;
}
