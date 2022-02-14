
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ no_in_queues; TYPE_2__* c_q; } ;
struct TYPE_4__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_3__ qdio; TYPE_1__ options; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_5__ {int next_buf_to_init; int qdio_bufs; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_5(struct qeth_card *VAR_4)
{
 int VAR_5;

 if (VAR_4->options.cq == VAR_2) {
  FUNC_1(VAR_3, 2, "cqinit");
  FUNC_4(VAR_4->qdio.c_q->qdio_bufs, 0,
         VAR_1 * sizeof(struct qdio_buffer));
  VAR_4->qdio.c_q->next_buf_to_init = 127;
  VAR_5 = FUNC_3(FUNC_0(VAR_4), VAR_0,
        VAR_4->qdio.no_in_queues - 1, 0,
        127);
  if (VAR_5) {
   FUNC_2(VAR_3, 2, "1err%d", VAR_5);
   goto out;
  }
 }
 VAR_5 = 0;
out:
 return VAR_5;
}
