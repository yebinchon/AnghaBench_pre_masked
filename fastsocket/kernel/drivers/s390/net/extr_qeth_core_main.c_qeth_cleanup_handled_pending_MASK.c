
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_out_q {TYPE_3__* bufstates; struct qeth_qdio_out_buffer** bufs; TYPE_2__* card; } ;
struct qeth_qdio_out_buffer {int aob; int state; struct qeth_qdio_out_buffer* next_pending; } ;
struct TYPE_6__ {int aob; } ;
struct TYPE_4__ {scalar_t__ cq; } ;
struct TYPE_5__ {TYPE_1__ options; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,struct qeth_qdio_out_buffer*) ;
 int FUNC_4 (struct qeth_qdio_out_q*,int) ;
 int VAR_3 ;
 int FUNC_5 (struct qeth_qdio_out_buffer*) ;

__attribute__((used)) static inline void FUNC_6(struct qeth_qdio_out_q *VAR_4,
 int VAR_5, int VAR_6)
{
 if (VAR_4->card->options.cq != VAR_0)
  return;

 if (VAR_4->bufs[VAR_5]->next_pending != ((void*)0)) {
  struct qeth_qdio_out_buffer *VAR_7 = VAR_4->bufs[VAR_5];
  struct qeth_qdio_out_buffer *VAR_8 = VAR_4->bufs[VAR_5]->next_pending;

  while (VAR_8) {
   if (VAR_6 ||
       FUNC_2(&VAR_8->state) ==
         VAR_1) {
    struct qeth_qdio_out_buffer *VAR_9 = VAR_8;



    FUNC_5(VAR_8);
    VAR_8 = VAR_9->next_pending;
    FUNC_0(VAR_7->next_pending != VAR_9);
    VAR_7->next_pending = VAR_8;
    FUNC_3(VAR_3, VAR_9);
   } else {
    VAR_7 = VAR_8;
    VAR_8 = VAR_8->next_pending;
   }

  }
 }
 if (VAR_6 && (FUNC_2(&(VAR_4->bufs[VAR_5]->state)) ==
     VAR_1)) {

  VAR_4->bufs[VAR_5]->aob = VAR_4->bufstates[VAR_5].aob;
  FUNC_4(VAR_4, VAR_5);
  FUNC_1(VAR_2, 2, "clprecov");
 }
}
