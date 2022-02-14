
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_operations {int dummy; } ;
struct TYPE_2__ {int dqptr_sem; int dqonoff_mutex; int dqio_mutex; } ;
struct super_block {int s_count; int s_time_gran; struct super_operations const* s_op; int s_qcop; int dq_op; int s_maxbytes; int s_wait_unfrozen; TYPE_1__ s_dquot; int s_vfs_rename_mutex; int s_active; int s_umount; int s_lock; int s_dentry_lru; int s_inodes; int s_anon; int s_instances; int s_files; } ;
struct file_system_type {int s_lock_key; int s_umount_key; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct super_block*,struct file_system_type*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*) ;
 struct super_block* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct super_block*) ;

__attribute__((used)) static struct super_block *FUNC_14(struct file_system_type *VAR_5)
{
 struct super_block *VAR_6 = FUNC_9(sizeof(struct super_block), VAR_0);
 static const struct super_operations VAR_7;

 if (VAR_6) {
  if (FUNC_12(VAR_6)) {




   FUNC_8(VAR_6);
   VAR_6 = ((void*)0);
   goto out;
  }
  FUNC_1(&VAR_6->s_files);
  if (FUNC_6(VAR_6, VAR_5))
   goto err_out;
  FUNC_1(&VAR_6->s_instances);
  FUNC_0(&VAR_6->s_anon);
  FUNC_1(&VAR_6->s_inodes);
  FUNC_1(&VAR_6->s_dentry_lru);
  FUNC_5(&VAR_6->s_umount);
  FUNC_11(&VAR_6->s_lock);
  FUNC_10(&VAR_6->s_umount, &VAR_5->s_umount_key);





  FUNC_10(&VAR_6->s_lock, &VAR_5->s_lock_key);
  FUNC_4(&VAR_6->s_umount, VAR_2);
  VAR_6->s_count = 1;
  FUNC_2(&VAR_6->s_active, 1);
  FUNC_11(&VAR_6->s_vfs_rename_mutex);
  FUNC_11(&VAR_6->s_dquot.dqio_mutex);
  FUNC_11(&VAR_6->s_dquot.dqonoff_mutex);
  FUNC_5(&VAR_6->s_dquot.dqptr_sem);
  FUNC_7(&VAR_6->s_wait_unfrozen);
  VAR_6->s_maxbytes = VAR_1;
  VAR_6->dq_op = VAR_3;
  VAR_6->s_qcop = VAR_4;
  VAR_6->s_op = &VAR_7;
  VAR_6->s_time_gran = 1000000000;
 }
out:
 return VAR_6;
err_out:
 FUNC_13(VAR_6);
 FUNC_3(VAR_6);
 FUNC_8(VAR_6);
 VAR_6 = ((void*)0);
 goto out;
}
