
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct c2wr_ce {scalar_t__ qp_user_context; } ;
struct c2_qp {int dummy; } ;
struct TYPE_2__ {scalar_t__ host; } ;
struct c2_mq {int priv; int msg_size; int q_size; TYPE_1__ msg_pool; int * shared; } ;
struct c2_dev {int dummy; } ;
struct c2_cq {int lock; struct c2_mq mq; } ;


 int FUNC_0 (int ) ;
 struct c2_cq* FUNC_1 (struct c2_dev*,int ) ;
 int FUNC_2 (struct c2_cq*) ;
 int FUNC_3 (struct c2_mq*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct c2_dev *VAR_0, struct c2_qp *VAR_1, u32 VAR_2)
{
 struct c2_cq *VAR_3;
 struct c2_mq *VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_3)
  return;

 FUNC_4(&VAR_3->lock);
 VAR_4 = &VAR_3->mq;
 if (VAR_4 && !FUNC_3(VAR_4)) {
  u16 VAR_5 = VAR_4->priv;
  struct c2wr_ce *VAR_6;

  while (VAR_5 != FUNC_0(*VAR_4->shared)) {
   VAR_6 = (struct c2wr_ce *)
    (VAR_4->msg_pool.host + VAR_5 * VAR_4->msg_size);
   if (VAR_6->qp_user_context == (u64) (unsigned long) VAR_1) {
    VAR_6->qp_user_context = (u64) 0;
   }
   VAR_5 = (VAR_5 + 1) % VAR_4->q_size;
  }
 }
 FUNC_5(&VAR_3->lock);
 FUNC_2(VAR_3);
}
