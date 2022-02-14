
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*) ;

int FUNC_4(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 if (VAR_3->flags & VAR_1)
  return 0;

 if (FUNC_2()) {
  FUNC_3(1, "called recursively, non-PF_MEMALLOC!\n");
  FUNC_0();
  return -VAR_0;
 }

 if (VAR_5->sync_mode != VAR_2)
  return 0;

 return FUNC_1(VAR_4->i_sb);
}
