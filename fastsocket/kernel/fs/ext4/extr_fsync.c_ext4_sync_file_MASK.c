
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tid_t ;
struct inode {TYPE_4__* i_sb; } ;
struct file {int dummy; } ;
struct ext4_inode_info {int i_sync_tid; int i_datasync_tid; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_7__ {int j_flags; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_9__ {TYPE_1__* s_journal; } ;
struct TYPE_8__ {int s_flags; int s_bdev; } ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct file*,struct dentry*,int) ;
 int FUNC_11 (struct file*,struct dentry*,int) ;

int FUNC_12(struct file *VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct ext4_inode_info *VAR_6 = FUNC_0(VAR_5);
 journal_t *VAR_7 = FUNC_1(VAR_5->i_sb)->s_journal;
 int VAR_8;
 tid_t VAR_9;
 bool VAR_10 = 0;

 FUNC_2(FUNC_5() == ((void*)0));

 FUNC_11(VAR_2, VAR_3, VAR_4);

 if (VAR_5->i_sb->s_flags & VAR_1)
  return 0;

 VAR_8 = FUNC_7(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_7)
  return FUNC_10(VAR_2, VAR_3, VAR_4);
 if (FUNC_6(VAR_5))
  return FUNC_4(VAR_5->i_sb);

 VAR_9 = VAR_4 ? VAR_6->i_datasync_tid : VAR_6->i_sync_tid;
 if (VAR_7->j_flags & VAR_0 &&
     !FUNC_9(VAR_7, VAR_9))
  VAR_10 = 1;
 VAR_8 = FUNC_8(VAR_7, VAR_9);
 if (VAR_10)
  FUNC_3(VAR_5->i_sb->s_bdev, ((void*)0));
 return VAR_8;
}
