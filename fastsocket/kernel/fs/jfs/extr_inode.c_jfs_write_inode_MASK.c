
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct inode*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,struct inode*) ;

int FUNC_5(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 int VAR_6 = VAR_5->sync_mode == VAR_3;

 if (FUNC_4(VAR_1, VAR_4))
  return 0;





  if (!FUNC_4(VAR_0, VAR_4)) {

  FUNC_3(FUNC_0(VAR_4->i_sb)->log, VAR_6);
  return 0;
  }

 if (FUNC_1(VAR_4, VAR_6)) {
  FUNC_2("jfs_write_inode: jfs_commit_inode failed!");
  return -VAR_2;
 } else
  return 0;
}
