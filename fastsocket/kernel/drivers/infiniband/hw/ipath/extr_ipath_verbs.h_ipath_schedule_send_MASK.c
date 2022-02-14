
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_qp {int s_flags; int s_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct ipath_qp *VAR_2)
{
 if (VAR_2->s_flags & VAR_0)
  VAR_2->s_flags &= ~VAR_0;
 if (!(VAR_2->s_flags & VAR_1))
  FUNC_0(&VAR_2->s_task);
}
