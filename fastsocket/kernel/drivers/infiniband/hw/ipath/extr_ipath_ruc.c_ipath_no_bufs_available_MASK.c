
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_qp {size_t state; int s_lock; int piowait; int s_flags; } ;
struct ipath_ibdev {int dd; int pending_lock; int piowait; int n_piowait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct ipath_qp*) ;

__attribute__((used)) static int FUNC_7(struct ipath_qp *VAR_4,
        struct ipath_ibdev *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 1;







 FUNC_3(&VAR_4->s_lock, VAR_6);
 if (VAR_3[VAR_4->state] & VAR_0) {
  VAR_5->n_piowait++;
  VAR_4->s_flags |= VAR_2;
  VAR_4->s_flags &= ~VAR_1;
  FUNC_2(&VAR_5->pending_lock);
  if (FUNC_1(&VAR_4->piowait))
   FUNC_0(&VAR_4->piowait, &VAR_5->piowait);
  FUNC_4(&VAR_5->pending_lock);
 } else
  VAR_7 = 0;
 FUNC_5(&VAR_4->s_lock, VAR_6);
 if (VAR_7)
  FUNC_6(VAR_5->dd, VAR_4);
 return VAR_7;
}
