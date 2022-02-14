
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct ext3_inode_info {int i_sync_tid; int i_datasync_tid; } ;
struct dentry {struct inode* d_inode; } ;
typedef int journal_t ;
struct TYPE_6__ {int * s_journal; } ;
struct TYPE_5__ {int s_flags; int s_bdev; } ;


 int VAR_0 ;
 struct ext3_inode_info* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (struct file*,int) ;
 int FUNC_12 (struct inode*,int) ;

int FUNC_13(struct file * VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct ext3_inode_info *VAR_6 = FUNC_0(VAR_5);
 journal_t *VAR_7 = FUNC_1(VAR_5->i_sb)->s_journal;
 int VAR_8 = 0;
 tid_t VAR_9;

 FUNC_2(FUNC_6() == ((void*)0));

 FUNC_11(VAR_2, VAR_4);

 if (VAR_5->i_sb->s_flags & VAR_1)
  return 0;
 if (FUNC_7(VAR_5)) {
  VAR_8 = FUNC_5(VAR_5->i_sb);
  goto out;
 }

 if (VAR_4)
  VAR_9 = FUNC_3(&VAR_6->i_datasync_tid);
 else
  VAR_9 = FUNC_3(&VAR_6->i_sync_tid);

 if (FUNC_8(VAR_7, VAR_9)) {
  FUNC_9(VAR_7, VAR_9);
  goto out;
 }






 if (FUNC_10(VAR_5->i_sb, VAR_0))
  FUNC_4(VAR_5->i_sb->s_bdev, ((void*)0));
out:
 FUNC_12(VAR_5, VAR_8);
 return VAR_8;
}
