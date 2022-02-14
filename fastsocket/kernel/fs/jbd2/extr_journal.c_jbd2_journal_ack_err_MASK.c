
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int j_state_lock; int j_flags; scalar_t__ j_errno; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(journal_t *VAR_1)
{
 FUNC_0(&VAR_1->j_state_lock);
 if (VAR_1->j_errno)
  VAR_1->j_flags |= VAR_0;
 FUNC_1(&VAR_1->j_state_lock);
}
