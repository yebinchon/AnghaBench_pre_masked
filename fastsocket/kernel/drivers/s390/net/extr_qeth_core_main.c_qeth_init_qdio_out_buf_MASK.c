
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_qdio_out_q {TYPE_1__* bufstates; struct qeth_qdio_out_buffer** bufs; int * qdio_bufs; } ;
struct TYPE_4__ {int lock; } ;
struct qeth_qdio_out_buffer {int state; struct qeth_qdio_out_buffer* next_pending; int * aob; struct qeth_qdio_out_q* q; TYPE_2__ skb_list; int * buffer; } ;
struct TYPE_3__ {struct qeth_qdio_out_buffer* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct qeth_qdio_out_buffer* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct qeth_qdio_out_q *VAR_5, int VAR_6)
{
 int VAR_7;
 struct qeth_qdio_out_buffer *VAR_8;

 VAR_7 = 0;
 VAR_8 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_8->buffer = &VAR_5->qdio_bufs[VAR_6];
 FUNC_3(&VAR_8->skb_list);
 FUNC_2(&VAR_8->skb_list.lock, &VAR_3);
 VAR_8->q = VAR_5;
 VAR_8->aob = ((void*)0);
 VAR_8->next_pending = VAR_5->bufs[VAR_6];
 FUNC_0(&VAR_8->state, VAR_2);
 VAR_5->bufs[VAR_6] = VAR_8;
 if (VAR_5->bufstates) {
  VAR_5->bufstates[VAR_6].user = VAR_8;
 }
out:
 return VAR_7;
}
