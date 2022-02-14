
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int lock_owner; int write_locks; int spinning_writers; int blocking_writers; int write_lock_wq; int lock; int blocking_readers; int read_lock_wq; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct extent_buffer *VAR_1)
{
again:
 FUNC_3(VAR_1->read_lock_wq, FUNC_2(&VAR_1->blocking_readers) == 0);
 FUNC_3(VAR_1->write_lock_wq, FUNC_2(&VAR_1->blocking_writers) == 0);
 FUNC_4(&VAR_1->lock);
 if (FUNC_2(&VAR_1->blocking_readers)) {
  FUNC_5(&VAR_1->lock);
  FUNC_3(VAR_1->read_lock_wq,
      FUNC_2(&VAR_1->blocking_readers) == 0);
  goto again;
 }
 if (FUNC_2(&VAR_1->blocking_writers)) {
  FUNC_5(&VAR_1->lock);
  FUNC_3(VAR_1->write_lock_wq,
      FUNC_2(&VAR_1->blocking_writers) == 0);
  goto again;
 }
 FUNC_0(FUNC_2(&VAR_1->spinning_writers));
 FUNC_1(&VAR_1->spinning_writers);
 FUNC_1(&VAR_1->write_locks);
 VAR_1->lock_owner = VAR_0->pid;
}
