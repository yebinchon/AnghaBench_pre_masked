
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int no_in_queues; TYPE_2__* c_q; } ;
struct TYPE_8__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_3__ qdio; TYPE_4__ options; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_6__ {TYPE_1__* bufs; } ;
struct TYPE_5__ {int buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct qeth_card *VAR_2,
 struct qdio_buffer **VAR_3,
 void (**VAR_4) (struct ccw_device *, int, unsigned long)) {
 int VAR_5;

 if (VAR_2->options.cq == VAR_1) {
  int VAR_6 = VAR_0 *
        (VAR_2->qdio.no_in_queues - 1);
  VAR_5 = VAR_0 * (VAR_2->qdio.no_in_queues - 1);
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
   VAR_3[VAR_6 + VAR_5] = (struct qdio_buffer *)
    FUNC_0(VAR_2->qdio.c_q->bufs[VAR_5].buffer);
  }

  VAR_4[VAR_2->qdio.no_in_queues - 1] = ((void*)0);
 }
}
