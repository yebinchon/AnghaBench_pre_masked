
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ lock_owner; int read_lock_wq; int blocking_readers; int spinning_readers; int lock; int write_lock_wq; int blocking_writers; int spinning_writers; scalar_t__ lock_nested; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct extent_buffer *VAR_3, int VAR_4)
{
 if (VAR_3->lock_nested) {
  FUNC_5(&VAR_3->lock);
  if (&VAR_3->lock_nested && VAR_2->pid == VAR_3->lock_owner) {
   FUNC_6(&VAR_3->lock);
   return;
  }
  FUNC_6(&VAR_3->lock);
 }
 if (VAR_4 == VAR_1) {
  FUNC_0(FUNC_4(&VAR_3->blocking_writers) != 1);
  FUNC_8(&VAR_3->lock);
  FUNC_1(FUNC_4(&VAR_3->spinning_writers));
  FUNC_3(&VAR_3->spinning_writers);
  if (FUNC_2(&VAR_3->blocking_writers))
   FUNC_7(&VAR_3->write_lock_wq);
 } else if (VAR_4 == VAR_0) {
  FUNC_0(FUNC_4(&VAR_3->blocking_readers) == 0);
  FUNC_5(&VAR_3->lock);
  FUNC_3(&VAR_3->spinning_readers);
  if (FUNC_2(&VAR_3->blocking_readers))
   FUNC_7(&VAR_3->read_lock_wq);
 }
 return;
}
