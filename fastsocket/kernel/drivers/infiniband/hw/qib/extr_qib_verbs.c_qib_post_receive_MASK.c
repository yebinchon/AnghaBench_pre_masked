
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_rwqe {int num_sge; int * sg_list; int wr_id; } ;
struct qib_rwq {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_2__ {unsigned int max_sge; scalar_t__ size; int lock; struct qib_rwq* wq; } ;
struct qib_qp {size_t state; TYPE_1__ r_rq; } ;
struct ib_recv_wr {int num_sge; int * sg_list; int wr_id; struct ib_recv_wr* next; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qib_rwqe* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct qib_qp* FUNC_4 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_5(struct ib_qp *VAR_4, struct ib_recv_wr *VAR_5,
       struct ib_recv_wr **VAR_6)
{
 struct qib_qp *VAR_7 = FUNC_4(VAR_4);
 struct qib_rwq *VAR_8 = VAR_7->r_rq.wq;
 unsigned long VAR_9;
 int VAR_10;


 if (!(VAR_3[VAR_7->state] & VAR_2) || !VAR_8) {
  *VAR_6 = VAR_5;
  VAR_10 = -VAR_0;
  goto bail;
 }

 for (; VAR_5; VAR_5 = VAR_5->next) {
  struct qib_rwqe *VAR_11;
  u32 VAR_12;
  int VAR_13;

  if ((unsigned) VAR_5->num_sge > VAR_7->r_rq.max_sge) {
   *VAR_6 = VAR_5;
   VAR_10 = -VAR_0;
   goto bail;
  }

  FUNC_2(&VAR_7->r_rq.lock, VAR_9);
  VAR_12 = VAR_8->head + 1;
  if (VAR_12 >= VAR_7->r_rq.size)
   VAR_12 = 0;
  if (VAR_12 == VAR_8->tail) {
   FUNC_3(&VAR_7->r_rq.lock, VAR_9);
   *VAR_6 = VAR_5;
   VAR_10 = -VAR_1;
   goto bail;
  }

  VAR_11 = FUNC_0(&VAR_7->r_rq, VAR_8->head);
  VAR_11->wr_id = VAR_5->wr_id;
  VAR_11->num_sge = VAR_5->num_sge;
  for (VAR_13 = 0; VAR_13 < VAR_5->num_sge; VAR_13++)
   VAR_11->sg_list[VAR_13] = VAR_5->sg_list[VAR_13];

  FUNC_1();
  VAR_8->head = VAR_12;
  FUNC_3(&VAR_7->r_rq.lock, VAR_9);
 }
 VAR_10 = 0;

bail:
 return VAR_10;
}
