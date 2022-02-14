
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int log_writer_wait; int log_writers; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_root *VAR_0)
{
 if (FUNC_0(&VAR_0->log_writers)) {
  FUNC_1();
  if (FUNC_2(&VAR_0->log_writer_wait))
   FUNC_3(&VAR_0->log_writer_wait);
 }
}
