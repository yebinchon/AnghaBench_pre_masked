
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_4__* s_bdev; TYPE_1__* s_type; int s_blocksize_bits; } ;
struct inode_operations {int dummy; } ;
struct address_space {struct backing_dev_info* backing_dev_info; scalar_t__ writeback_index; int * assoc_mapping; scalar_t__ flags; struct inode* host; struct address_space_operations const* a_ops; } ;
struct inode {int i_nlink; scalar_t__ i_fsnotify_mask; int i_default_acl; int i_acl; struct address_space* i_mapping; int * i_private; int i_alloc_sem; int i_mutex; int i_lock; scalar_t__ dirtied_when; scalar_t__ i_rdev; int * i_cdev; int * i_bdev; int * i_pipe; int i_dquot; scalar_t__ i_generation; scalar_t__ i_bytes; scalar_t__ i_blocks; scalar_t__ i_size; int i_writecount; scalar_t__ i_gid; scalar_t__ i_uid; struct file_operations const* i_fop; struct inode_operations const* i_op; int i_count; scalar_t__ i_flags; int i_blkbits; struct super_block* i_sb; struct address_space i_data; } ;
struct file_operations {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space_operations {int dummy; } ;
struct TYPE_8__ {TYPE_3__* bd_inode; } ;
struct TYPE_7__ {TYPE_2__* i_mapping; } ;
struct TYPE_6__ {struct backing_dev_info* backing_dev_info; } ;
struct TYPE_5__ {int i_alloc_sem_key; int i_mutex_key; int i_lock_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 struct backing_dev_info VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct address_space* const,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct super_block *VAR_4, struct inode *VAR_5)
{
 static const struct address_space_operations VAR_6;
 static const struct inode_operations VAR_7;
 static const struct file_operations VAR_8;
 struct address_space *const VAR_9 = &VAR_5->i_data;

 VAR_5->i_sb = VAR_4;
 VAR_5->i_blkbits = VAR_4->s_blocksize_bits;
 VAR_5->i_flags = 0;
 FUNC_0(&VAR_5->i_count, 1);
 VAR_5->i_op = &VAR_7;
 VAR_5->i_fop = &VAR_8;
 VAR_5->i_nlink = 1;
 VAR_5->i_uid = 0;
 VAR_5->i_gid = 0;
 FUNC_0(&VAR_5->i_writecount, 0);
 VAR_5->i_size = 0;
 VAR_5->i_blocks = 0;
 VAR_5->i_bytes = 0;
 VAR_5->i_generation = 0;



 VAR_5->i_pipe = ((void*)0);
 VAR_5->i_bdev = ((void*)0);
 VAR_5->i_cdev = ((void*)0);
 VAR_5->i_rdev = 0;
 VAR_5->dirtied_when = 0;

 if (FUNC_6(VAR_5))
  goto out;
 FUNC_7(&VAR_5->i_lock);
 FUNC_2(&VAR_5->i_lock, &VAR_4->s_type->i_lock_key);

 FUNC_5(&VAR_5->i_mutex);
 FUNC_2(&VAR_5->i_mutex, &VAR_4->s_type->i_mutex_key);

 FUNC_1(&VAR_5->i_alloc_sem);
 FUNC_2(&VAR_5->i_alloc_sem, &VAR_4->s_type->i_alloc_sem_key);

 VAR_9->a_ops = &VAR_6;
 VAR_9->host = VAR_5;
 VAR_9->flags = 0;
 FUNC_3(VAR_9, VAR_2);
 VAR_9->assoc_mapping = ((void*)0);
 VAR_9->backing_dev_info = &VAR_3;
 VAR_9->writeback_index = 0;






 if (VAR_4->s_bdev) {
  struct backing_dev_info *VAR_10;

  VAR_10 = VAR_4->s_bdev->bd_inode->i_mapping->backing_dev_info;
  VAR_9->backing_dev_info = VAR_10;
 }
 VAR_5->i_private = ((void*)0);
 VAR_5->i_mapping = VAR_9;
 return 0;
out:
 return -VAR_1;
}
