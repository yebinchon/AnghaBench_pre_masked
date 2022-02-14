
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int j_free; unsigned int j_head; unsigned int j_last; unsigned int j_first; int j_state_lock; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(journal_t *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2;

 FUNC_2(&VAR_0->j_state_lock);
 FUNC_0(VAR_0->j_free > 1);

 VAR_2 = VAR_0->j_head;
 VAR_0->j_head++;
 VAR_0->j_free--;
 if (VAR_0->j_head == VAR_0->j_last)
  VAR_0->j_head = VAR_0->j_first;
 FUNC_3(&VAR_0->j_state_lock);
 return FUNC_1(VAR_0, VAR_2, VAR_1);
}
