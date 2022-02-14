
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


struct qeth_qdio_q {int dummy; } ;
struct TYPE_12__ {int no_in_queues; int no_out_queues; TYPE_6__* c_q; TYPE_3__** out_qs; struct qdio_outbuf_state* out_bufstates; } ;
struct TYPE_9__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_5__* gdev; TYPE_4__ qdio; TYPE_1__ options; } ;
struct qdio_outbuf_state {int dummy; } ;
struct TYPE_14__ {int * qdio_bufs; TYPE_2__* bufs; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_11__ {struct qdio_outbuf_state* bufstates; } ;
struct TYPE_10__ {int * buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,TYPE_6__**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 (int,int ) ;

__attribute__((used)) static inline int FUNC_6(struct qeth_card *VAR_4)
{
 int VAR_5;

 if (VAR_4->options.cq == VAR_2) {
  int VAR_6;
  struct qdio_outbuf_state *VAR_7;

  FUNC_1(VAR_3, 2, "cqon");
  VAR_4->qdio.c_q = FUNC_5(sizeof(struct qeth_qdio_q),
      VAR_0);
  if (!VAR_4->qdio.c_q) {
   VAR_5 = -1;
   goto kmsg_out;
  }
  FUNC_0(VAR_3, 2, &VAR_4->qdio.c_q, sizeof(void *));

  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
   VAR_4->qdio.c_q->bufs[VAR_6].buffer =
    &VAR_4->qdio.c_q->qdio_bufs[VAR_6];
  }

  VAR_4->qdio.no_in_queues = 2;

  VAR_4->qdio.out_bufstates = (struct qdio_outbuf_state *)
   FUNC_5(VAR_4->qdio.no_out_queues *
    VAR_1 *
    sizeof(struct qdio_outbuf_state), VAR_0);
  VAR_7 = VAR_4->qdio.out_bufstates;
  if (VAR_7 == ((void*)0)) {
   VAR_5 = -1;
   goto free_cq_out;
  }
  for (VAR_6 = 0; VAR_6 < VAR_4->qdio.no_out_queues; ++VAR_6) {
   VAR_4->qdio.out_qs[VAR_6]->bufstates = VAR_7;
   VAR_7 += VAR_1;
  }
 } else {
  FUNC_1(VAR_3, 2, "nocq");
  VAR_4->qdio.c_q = ((void*)0);
  VAR_4->qdio.no_in_queues = 1;
 }
 FUNC_2(VAR_3, 2, "iqc%d", VAR_4->qdio.no_in_queues);
 VAR_5 = 0;
out:
 return VAR_5;
free_cq_out:
 FUNC_4(VAR_4->qdio.c_q);
 VAR_4->qdio.c_q = ((void*)0);
kmsg_out:
 FUNC_3(&VAR_4->gdev->dev, "Failed to create completion queue\n");
 goto out;
}
