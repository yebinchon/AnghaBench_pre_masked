
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {unsigned int max_sge; scalar_t__ size; int lock; struct ipath_rwq* wq; } ;
struct ipath_srq {TYPE_1__ rq; } ;
struct ipath_rwqe {int num_sge; int * sg_list; int wr_id; } ;
struct ipath_rwq {scalar_t__ head; scalar_t__ tail; } ;
struct ib_srq {int dummy; } ;
struct ib_recv_wr {int num_sge; int * sg_list; int wr_id; struct ib_recv_wr* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_rwqe* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ipath_srq* FUNC_4 (struct ib_srq*) ;

int FUNC_5(struct ib_srq *VAR_2, struct ib_recv_wr *VAR_3,
      struct ib_recv_wr **VAR_4)
{
 struct ipath_srq *VAR_5 = FUNC_4(VAR_2);
 struct ipath_rwq *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 for (; VAR_3; VAR_3 = VAR_3->next) {
  struct ipath_rwqe *VAR_9;
  u32 VAR_10;
  int VAR_11;

  if ((unsigned) VAR_3->num_sge > VAR_5->rq.max_sge) {
   *VAR_4 = VAR_3;
   VAR_8 = -VAR_0;
   goto bail;
  }

  FUNC_2(&VAR_5->rq.lock, VAR_7);
  VAR_6 = VAR_5->rq.wq;
  VAR_10 = VAR_6->head + 1;
  if (VAR_10 >= VAR_5->rq.size)
   VAR_10 = 0;
  if (VAR_10 == VAR_6->tail) {
   FUNC_3(&VAR_5->rq.lock, VAR_7);
   *VAR_4 = VAR_3;
   VAR_8 = -VAR_1;
   goto bail;
  }

  VAR_9 = FUNC_0(&VAR_5->rq, VAR_6->head);
  VAR_9->wr_id = VAR_3->wr_id;
  VAR_9->num_sge = VAR_3->num_sge;
  for (VAR_11 = 0; VAR_11 < VAR_3->num_sge; VAR_11++)
   VAR_9->sg_list[VAR_11] = VAR_3->sg_list[VAR_11];

  FUNC_1();
  VAR_6->head = VAR_10;
  FUNC_3(&VAR_5->rq.lock, VAR_7);
 }
 VAR_8 = 0;

bail:
 return VAR_8;
}
