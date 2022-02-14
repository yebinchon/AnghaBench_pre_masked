
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ lock_owner; int read_locks; int read_lock_wq; int blocking_readers; int lock; scalar_t__ lock_nested; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct extent_buffer *VAR_1)
{
 if (VAR_1->lock_nested) {
  FUNC_5(&VAR_1->lock);
  if (VAR_1->lock_nested && VAR_0->pid == VAR_1->lock_owner) {
   VAR_1->lock_nested = 0;
   FUNC_6(&VAR_1->lock);
   return;
  }
  FUNC_6(&VAR_1->lock);
 }
 FUNC_4(VAR_1);
 FUNC_0(FUNC_3(&VAR_1->blocking_readers) == 0);
 if (FUNC_2(&VAR_1->blocking_readers))
  FUNC_7(&VAR_1->read_lock_wq);
 FUNC_1(&VAR_1->read_locks);
}
