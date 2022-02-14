
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_qp {size_t state; int s_lock; int s_flags; int iowait; } ;
struct qib_ibdev {int pending_lock; int memwait; int mem_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct qib_ibdev *VAR_6, struct qib_qp *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = 0;

 FUNC_4(&VAR_7->s_lock, VAR_8);
 if (VAR_4[VAR_7->state] & VAR_1) {
  FUNC_3(&VAR_6->pending_lock);
  if (FUNC_1(&VAR_7->iowait)) {
   if (FUNC_1(&VAR_6->memwait))
    FUNC_2(&VAR_6->mem_timer, VAR_5 + 1);
   VAR_7->s_flags |= VAR_3;
   FUNC_0(&VAR_7->iowait, &VAR_6->memwait);
  }
  FUNC_5(&VAR_6->pending_lock);
  VAR_7->s_flags &= ~VAR_2;
  VAR_9 = -VAR_0;
 }
 FUNC_6(&VAR_7->s_lock, VAR_8);

 return VAR_9;
}
