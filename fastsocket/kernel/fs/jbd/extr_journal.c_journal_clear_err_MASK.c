
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int j_flags; int j_state_lock; scalar_t__ j_errno; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(journal_t *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_2->j_state_lock);
 if (VAR_2->j_flags & VAR_1)
  VAR_3 = -VAR_0;
 else
  VAR_2->j_errno = 0;
 FUNC_1(&VAR_2->j_state_lock);
 return VAR_3;
}
