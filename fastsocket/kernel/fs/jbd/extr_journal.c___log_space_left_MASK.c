
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int j_free; int j_state_lock; } ;
typedef TYPE_1__ journal_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(journal_t *VAR_1)
{
 int VAR_2 = VAR_1->j_free;

 FUNC_0(&VAR_1->j_state_lock);
 VAR_2 -= 32;

 if (VAR_2 <= 0)
  return 0;
 VAR_2 -= (VAR_2 >> 3);
 return VAR_2;
}
