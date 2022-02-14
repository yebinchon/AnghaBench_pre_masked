
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qeth_qdio_out_q {int next_buf_to_fill; TYPE_3__* card; int set_pci_flags_count; int state; struct qeth_qdio_out_buffer** bufs; scalar_t__ do_pack; } ;
struct qeth_qdio_out_buffer {int next_element_to_fill; int state; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {int dummy; } ;
struct TYPE_5__ {int bufs_sent_pack; } ;
struct TYPE_4__ {scalar_t__ performance_stats; } ;
struct TYPE_6__ {TYPE_2__ perf_stats; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,struct sk_buff*,struct qeth_hdr*,int,int ) ;
 int FUNC_7 (struct qeth_qdio_out_q*,int,int) ;
 scalar_t__ FUNC_8 (struct qeth_qdio_out_q*) ;
 scalar_t__ FUNC_9 (struct qeth_qdio_out_q*) ;
 int FUNC_10 (struct qeth_qdio_out_q*) ;

int FUNC_11(struct qeth_card *VAR_7, struct qeth_qdio_out_q *VAR_8,
  struct sk_buff *VAR_9, struct qeth_hdr *VAR_10,
  int VAR_11)
{
 struct qeth_qdio_out_buffer *VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 0;


 while (FUNC_1(&VAR_8->state, VAR_4,
         VAR_2) != VAR_4);
 VAR_13 = VAR_8->next_buf_to_fill;
 VAR_12 = VAR_8->bufs[VAR_8->next_buf_to_fill];




 if (FUNC_3(&VAR_12->state) != VAR_5) {
  FUNC_4(&VAR_8->state, VAR_4);
  return -VAR_0;
 }

 FUNC_10(VAR_8);
 if (VAR_8->do_pack) {
  VAR_15 = 1;

  if ((FUNC_0(VAR_7) -
      VAR_12->next_element_to_fill) < VAR_11) {

   FUNC_4(&VAR_12->state, VAR_6);
   VAR_14++;
   VAR_8->next_buf_to_fill =
    (VAR_8->next_buf_to_fill + 1) %
    VAR_1;
   VAR_12 = VAR_8->bufs[VAR_8->next_buf_to_fill];


   if (FUNC_3(&VAR_12->state) !=
       VAR_5) {
    FUNC_7(VAR_8, VAR_13,
          VAR_14);
    FUNC_4(&VAR_8->state,
      VAR_4);
    return -VAR_0;
   }
  }
 }
 VAR_16 = FUNC_6(VAR_8, VAR_12, VAR_9, VAR_10, -1, 0);
 VAR_8->next_buf_to_fill = (VAR_8->next_buf_to_fill + VAR_16) %
      VAR_1;
 VAR_14 += VAR_16;
 if (VAR_14)
  FUNC_7(VAR_8, VAR_13, VAR_14);
 else if (!FUNC_3(&VAR_8->set_pci_flags_count))
  FUNC_5(&VAR_8->state, VAR_3);






 while (FUNC_2(&VAR_8->state)) {
  VAR_14 = 0;
  VAR_13 = VAR_8->next_buf_to_fill;

  VAR_14 += FUNC_9(VAR_8);




  if (!VAR_14 && !FUNC_3(&VAR_8->set_pci_flags_count))
   VAR_14 += FUNC_8(VAR_8);
  if (VAR_14)
   FUNC_7(VAR_8, VAR_13, VAR_14);
 }

 if (VAR_8->card->options.performance_stats && VAR_15)
  VAR_8->card->perf_stats.bufs_sent_pack += VAR_14;

 return VAR_17;
}
