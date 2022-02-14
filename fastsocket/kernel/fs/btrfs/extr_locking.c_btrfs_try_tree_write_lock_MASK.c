
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int lock_owner; int spinning_writers; int write_locks; int lock; int blocking_readers; int blocking_writers; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct extent_buffer *VAR_1)
{
 if (FUNC_1(&VAR_1->blocking_writers) ||
     FUNC_1(&VAR_1->blocking_readers))
  return 0;
 FUNC_2(&VAR_1->lock);
 if (FUNC_1(&VAR_1->blocking_writers) ||
     FUNC_1(&VAR_1->blocking_readers)) {
  FUNC_3(&VAR_1->lock);
  return 0;
 }
 FUNC_0(&VAR_1->write_locks);
 FUNC_0(&VAR_1->spinning_writers);
 VAR_1->lock_owner = VAR_0->pid;
 return 1;
}
