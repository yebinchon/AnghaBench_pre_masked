
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ lock_owner; int lock_nested; int spinning_readers; int read_locks; int lock; int blocking_writers; int write_lock_wq; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct extent_buffer *VAR_1)
{
again:
 FUNC_3(&VAR_1->lock);
 if (FUNC_2(&VAR_1->blocking_writers) &&
     VAR_0->pid == VAR_1->lock_owner) {






  FUNC_0(VAR_1->lock_nested);
  VAR_1->lock_nested = 1;
  FUNC_4(&VAR_1->lock);
  return;
 }
 FUNC_4(&VAR_1->lock);
 FUNC_5(VAR_1->write_lock_wq, FUNC_2(&VAR_1->blocking_writers) == 0);
 FUNC_3(&VAR_1->lock);
 if (FUNC_2(&VAR_1->blocking_writers)) {
  FUNC_4(&VAR_1->lock);
  goto again;
 }
 FUNC_1(&VAR_1->read_locks);
 FUNC_1(&VAR_1->spinning_readers);
}
