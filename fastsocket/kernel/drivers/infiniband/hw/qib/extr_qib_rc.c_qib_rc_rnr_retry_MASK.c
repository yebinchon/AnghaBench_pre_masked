
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_qp {int s_flags; int s_lock; int s_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_qp*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned long VAR_1)
{
 struct qib_qp *VAR_2 = (struct qib_qp *)VAR_1;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->s_lock, VAR_3);
 if (VAR_2->s_flags & VAR_0) {
  VAR_2->s_flags &= ~VAR_0;
  FUNC_0(&VAR_2->s_timer);
  FUNC_1(VAR_2);
 }
 FUNC_3(&VAR_2->s_lock, VAR_3);
}
