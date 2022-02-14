
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_root; struct hypfs_sb_info* s_fs_info; } ;
struct kiocb {TYPE_4__* ki_filp; } ;
struct iovec {int dummy; } ;
struct hypfs_sb_info {scalar_t__ last_update; int lock; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_8__ {TYPE_3__ f_path; } ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int ) ;
 size_t FUNC_5 (struct iovec const*,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static ssize_t FUNC_9(struct kiocb *VAR_2, const struct iovec *VAR_3,
         unsigned long VAR_4, loff_t VAR_5)
{
 int VAR_6;
 struct super_block *VAR_7;
 struct hypfs_sb_info *VAR_8;
 size_t VAR_9 = FUNC_5(VAR_3, VAR_4);

 VAR_7 = VAR_2->ki_filp->f_path.dentry->d_inode->i_sb;
 VAR_8 = VAR_7->s_fs_info;
 FUNC_6(&VAR_8->lock);
 if (VAR_8->last_update == FUNC_0()) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_1(VAR_7->s_root);
 if (VAR_1)
  VAR_6 = FUNC_4(VAR_7, VAR_7->s_root);
 else
  VAR_6 = FUNC_2(VAR_7, VAR_7->s_root);
 if (VAR_6) {
  FUNC_8("Updating the hypfs tree failed\n");
  FUNC_1(VAR_7->s_root);
  goto out;
 }
 FUNC_3(VAR_7);
 VAR_6 = VAR_9;
out:
 FUNC_7(&VAR_8->lock);
 return VAR_6;
}
