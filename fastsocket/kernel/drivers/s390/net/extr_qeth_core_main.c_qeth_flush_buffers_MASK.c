
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


struct qeth_qdio_out_q {int queue_no; TYPE_9__* card; int used_buffers; int set_pci_flags_count; int do_pack; TYPE_1__* bufstates; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {int next_element_to_fill; TYPE_4__* buffer; } ;
struct TYPE_19__ {int bufs_sent; scalar_t__ outbound_do_qdio_start_time; int outbound_do_qdio_time; int outbound_do_qdio_cnt; } ;
struct TYPE_18__ {scalar_t__ performance_stats; } ;
struct TYPE_17__ {int tx_errors; } ;
struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_20__ {TYPE_8__ perf_stats; TYPE_7__ options; TYPE_6__ stats; TYPE_5__* dev; TYPE_2__ info; } ;
struct TYPE_16__ {int trans_start; } ;
struct TYPE_15__ {TYPE_3__* element; } ;
struct TYPE_14__ {int sflags; int eflags; } ;
struct TYPE_12__ {struct qeth_qdio_out_buffer* user; } ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned int,int,int,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_9__*) ;

__attribute__((used)) static void FUNC_10(struct qeth_qdio_out_q *VAR_11, int VAR_12,
          int VAR_13)
{
 struct qeth_qdio_out_buffer *VAR_14;
 int VAR_15;
 int VAR_16;
 unsigned int VAR_17;

 for (VAR_16 = VAR_12; VAR_16 < VAR_12 + VAR_13; ++VAR_16) {
  int VAR_18 = VAR_16 % VAR_3;
  VAR_14 = VAR_11->bufs[VAR_18];
  VAR_14->buffer->element[VAR_14->next_element_to_fill - 1].eflags |=
    VAR_7;

  if (VAR_11->bufstates)
   VAR_11->bufstates[VAR_18].user = VAR_14;

  if (VAR_11->card->info.type == VAR_4)
   continue;

  if (!VAR_11->do_pack) {
   if ((FUNC_6(&VAR_11->used_buffers) >=
    (VAR_5 -
     VAR_6)) &&
       !FUNC_6(&VAR_11->set_pci_flags_count)) {


    FUNC_5(&VAR_11->set_pci_flags_count);
    VAR_14->buffer->element[0].sflags |= VAR_8;
   }
  } else {
   if (!FUNC_6(&VAR_11->set_pci_flags_count)) {
    FUNC_5(&VAR_11->set_pci_flags_count);
    VAR_14->buffer->element[0].sflags |= VAR_8;
   }
  }
 }

 VAR_11->card->dev->trans_start = VAR_10;
 if (VAR_11->card->options.performance_stats) {
  VAR_11->card->perf_stats.outbound_do_qdio_cnt++;
  VAR_11->card->perf_stats.outbound_do_qdio_start_time =
   FUNC_8();
 }
 VAR_17 = VAR_2;
 if (FUNC_6(&VAR_11->set_pci_flags_count))
  VAR_17 |= VAR_1;
 VAR_15 = FUNC_7(FUNC_0(VAR_11->card), VAR_17,
       VAR_11->queue_no, VAR_12, VAR_13);
 if (VAR_11->card->options.performance_stats)
  VAR_11->card->perf_stats.outbound_do_qdio_time +=
   FUNC_8() -
   VAR_11->card->perf_stats.outbound_do_qdio_start_time;
 FUNC_4(VAR_13, &VAR_11->used_buffers);
 if (VAR_15) {
  VAR_11->card->stats.tx_errors += VAR_13;

  if (VAR_15 == VAR_0)
   return;
  FUNC_2(VAR_9, 2, "flushbuf");
  FUNC_3(VAR_9, 2, " q%d", VAR_11->queue_no);
  FUNC_3(VAR_9, 2, " idx%d", VAR_12);
  FUNC_3(VAR_9, 2, " c%d", VAR_13);
  FUNC_3(VAR_9, 2, " err%d", VAR_15);
  FUNC_3(VAR_9, 2, "%s", FUNC_1(VAR_11->card));



  FUNC_9(VAR_11->card);
  return;
 }
 if (VAR_11->card->options.performance_stats)
  VAR_11->card->perf_stats.bufs_sent += VAR_13;
}
