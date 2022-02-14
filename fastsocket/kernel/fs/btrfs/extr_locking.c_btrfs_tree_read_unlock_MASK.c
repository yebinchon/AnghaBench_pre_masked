
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ lock_owner; int lock; int read_locks; int spinning_readers; scalar_t__ lock_nested; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct extent_buffer *VAR_1)
{
 if (VAR_1->lock_nested) {
  FUNC_4(&VAR_1->lock);
  if (VAR_1->lock_nested && VAR_0->pid == VAR_1->lock_owner) {
   VAR_1->lock_nested = 0;
   FUNC_5(&VAR_1->lock);
   return;
  }
  FUNC_5(&VAR_1->lock);
 }
 FUNC_3(VAR_1);
 FUNC_0(FUNC_2(&VAR_1->spinning_readers) == 0);
 FUNC_1(&VAR_1->spinning_readers);
 FUNC_1(&VAR_1->read_locks);
 FUNC_5(&VAR_1->lock);
}
