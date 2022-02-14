
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int lock; int spinning_writers; int write_lock_wq; int blocking_writers; int write_locks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct extent_buffer *VAR_0)
{
 int VAR_1 = FUNC_3(&VAR_0->blocking_writers);

 FUNC_0(VAR_1 > 1);

 FUNC_4(VAR_0);
 FUNC_2(&VAR_0->write_locks);

 if (VAR_1) {
  FUNC_1(FUNC_3(&VAR_0->spinning_writers));
  FUNC_2(&VAR_0->blocking_writers);
  FUNC_5();
  FUNC_6(&VAR_0->write_lock_wq);
 } else {
  FUNC_1(FUNC_3(&VAR_0->spinning_writers) != 1);
  FUNC_2(&VAR_0->spinning_writers);
  FUNC_7(&VAR_0->lock);
 }
}
