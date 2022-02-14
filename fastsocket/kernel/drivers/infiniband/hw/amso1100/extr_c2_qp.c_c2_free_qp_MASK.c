
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int shared; int peer; } ;
struct TYPE_5__ {int shared; int peer; } ;
struct TYPE_4__ {int recv_cq; int send_cq; } ;
struct c2_qp {int refcount; int wait; TYPE_3__ rq_mq; TYPE_2__ sq_mq; int qpn; TYPE_1__ ibqp; } ;
struct c2_dev {int dummy; } ;
struct c2_cq {int cqn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct c2_dev*,struct c2_qp*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct c2_dev*,int ) ;
 int FUNC_5 (struct c2_cq*,struct c2_cq*) ;
 int FUNC_6 (struct c2_cq*,struct c2_cq*) ;
 int FUNC_7 (struct c2_dev*,struct c2_qp*) ;
 int FUNC_8 (int ) ;
 struct c2_cq* FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct c2_dev *VAR_0, struct c2_qp *VAR_1)
{
 struct c2_cq *VAR_2;
 struct c2_cq *VAR_3;

 VAR_2 = FUNC_9(VAR_1->ibqp.send_cq);
 VAR_3 = FUNC_9(VAR_1->ibqp.recv_cq);





 FUNC_5(VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_1->qpn);
 FUNC_6(VAR_2, VAR_3);




 FUNC_7(VAR_0, VAR_1);




 FUNC_2(VAR_0, VAR_1, VAR_2->cqn);
 if (VAR_2 != VAR_3)
  FUNC_2(VAR_0, VAR_1, VAR_3->cqn);




 FUNC_8(VAR_1->sq_mq.peer);
 FUNC_8(VAR_1->rq_mq.peer);
 FUNC_3(VAR_1->sq_mq.shared);
 FUNC_3(VAR_1->rq_mq.shared);

 FUNC_0(&VAR_1->refcount);
 FUNC_10(VAR_1->wait, !FUNC_1(&VAR_1->refcount));
}
