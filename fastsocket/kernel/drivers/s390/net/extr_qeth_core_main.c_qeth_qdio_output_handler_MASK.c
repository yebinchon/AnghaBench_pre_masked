
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct qeth_qdio_out_q {TYPE_6__* card; int used_buffers; TYPE_2__* bufstates; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {TYPE_4__* buffer; int aob; int state; } ;
struct TYPE_16__ {scalar_t__ outbound_handler_start_time; int outbound_handler_time; int outbound_handler_cnt; } ;
struct TYPE_15__ {scalar_t__ cq; scalar_t__ performance_stats; } ;
struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_9__ {struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {TYPE_8__ perf_stats; TYPE_7__ options; TYPE_5__ info; int dev; TYPE_1__ qdio; } ;
struct ccw_device {int dummy; } ;
typedef enum iucv_tx_notify { ____Placeholder_iucv_tx_notify } iucv_tx_notify ;
struct TYPE_14__ {int dev; } ;
struct TYPE_12__ {TYPE_3__* element; } ;
struct TYPE_11__ {int sflags; } ;
struct TYPE_10__ {int flags; int aob; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qeth_card*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct qeth_qdio_out_q*) ;
 int FUNC_9 (struct qeth_qdio_out_q*,int,int ) ;
 int FUNC_10 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct qeth_card*,struct qeth_qdio_out_buffer*,unsigned int) ;
 scalar_t__ FUNC_14 (struct qeth_qdio_out_q*,int) ;
 int FUNC_15 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,int) ;
 int FUNC_16 (struct qeth_card*) ;

void FUNC_17(struct ccw_device *VAR_10,
  unsigned int VAR_11, int VAR_12, int VAR_13,
  int VAR_14, unsigned long VAR_15)
{
 struct qeth_card *VAR_16 = (struct qeth_card *) VAR_15;
 struct qeth_qdio_out_q *VAR_17 = VAR_16->qdio.out_qs[VAR_12];
 struct qeth_qdio_out_buffer *VAR_18;
 int VAR_19;

 FUNC_2(VAR_8, 6, "qdouhdl");
 if (VAR_11 & VAR_0) {
  FUNC_2(VAR_8, 2, "achkcond");
  FUNC_3(VAR_8, 2, "%s", FUNC_1(VAR_16));
  FUNC_6(VAR_16->dev);
  FUNC_16(VAR_16);
  return;
 }
 if (VAR_16->options.performance_stats) {
  VAR_16->perf_stats.outbound_handler_cnt++;
  VAR_16->perf_stats.outbound_handler_start_time =
   FUNC_12();
 }
 for (VAR_19 = VAR_13; VAR_19 < (VAR_13 + VAR_14); ++VAR_19) {
  int VAR_20 = VAR_19 % VAR_1;
  VAR_18 = VAR_17->bufs[VAR_20];
  FUNC_13(VAR_16, VAR_18, VAR_11);

  if (VAR_17->bufstates &&
      (VAR_17->bufstates[VAR_20].flags &
       VAR_2) != 0) {
   FUNC_0(VAR_16->options.cq != VAR_4);

   if (FUNC_4(&VAR_18->state,
        VAR_7,
        VAR_6) ==
    VAR_7) {
    FUNC_15(VAR_17, VAR_18,
       VAR_9);
   }
   VAR_18->aob = VAR_17->bufstates[VAR_20].aob;
   FUNC_0(VAR_20 < 0 || VAR_20 >= VAR_1);
   if (FUNC_14(VAR_17, VAR_20)) {
    FUNC_2(VAR_8, 2, "outofbuf");
    FUNC_16(VAR_16);
   }
  } else {
   if (VAR_16->options.cq == VAR_4) {
    enum iucv_tx_notify VAR_21;

    VAR_21 = FUNC_11(
     VAR_18->buffer->element[15].sflags, 0);
    FUNC_15(VAR_17, VAR_18, VAR_21);
   }

   FUNC_10(VAR_17, VAR_18,
      VAR_5);
  }
  FUNC_9(VAR_17, VAR_20, 0);
 }
 FUNC_5(VAR_14, &VAR_17->used_buffers);

 if (VAR_16->info.type != VAR_3)
  FUNC_8(VAR_17);

 FUNC_7(VAR_17->card->dev);
 if (VAR_16->options.performance_stats)
  VAR_16->perf_stats.outbound_handler_time += FUNC_12() -
   VAR_16->perf_stats.outbound_handler_start_time;
}
