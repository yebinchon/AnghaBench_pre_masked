
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; struct hugetlbfs_sb_info* s_fs_info; } ;
struct inode {int dummy; } ;
struct hugetlbfs_sb_info {int max_inodes; int free_inodes; struct hugetlbfs_sb_info* spool; int stat_lock; int * hstate; } ;
struct hugetlbfs_config {int nr_blocks; int nr_inodes; int mode; int gid; int uid; int * hstate; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct dentry* FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct hugetlbfs_sb_info* FUNC_5 (int) ;
 struct inode* FUNC_6 (struct super_block*,int ,int ,int,int ) ;
 int VAR_6 ;
 int FUNC_7 (void*,struct hugetlbfs_config*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct hugetlbfs_sb_info*) ;
 struct hugetlbfs_sb_info* FUNC_10 (int,int ) ;
 int FUNC_11 (struct super_block*,void*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct super_block *VAR_7, void *VAR_8, int VAR_9)
{
 struct inode * VAR_10;
 struct dentry * VAR_11;
 int VAR_12;
 struct hugetlbfs_config VAR_13;
 struct hugetlbfs_sb_info *VAR_14;

 FUNC_11(VAR_7, VAR_8);

 VAR_13.nr_blocks = -1;
 VAR_13.nr_inodes = -1;
 VAR_13.uid = FUNC_1();
 VAR_13.gid = FUNC_0();
 VAR_13.mode = 0755;
 VAR_13.hstate = &VAR_5;
 VAR_12 = FUNC_7(VAR_8, &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_14 = FUNC_10(sizeof(struct hugetlbfs_sb_info), VAR_1);
 if (!VAR_14)
  return -VAR_0;
 VAR_7->s_fs_info = VAR_14;
 VAR_14->hstate = VAR_13.hstate;
 FUNC_12(&VAR_14->stat_lock);
 VAR_14->max_inodes = VAR_13.nr_inodes;
 VAR_14->free_inodes = VAR_13.nr_inodes;
 VAR_14->spool = ((void*)0);
 if (VAR_13.nr_blocks != -1) {
  VAR_14->spool = FUNC_5(VAR_13.nr_blocks);
  if (!VAR_14->spool)
   goto out_free;
 }
 VAR_7->s_maxbytes = VAR_3;
 VAR_7->s_blocksize = FUNC_4(VAR_13.hstate);
 VAR_7->s_blocksize_bits = FUNC_3(VAR_13.hstate);
 VAR_7->s_magic = VAR_2;
 VAR_7->s_op = &VAR_6;
 VAR_7->s_time_gran = 1;
 VAR_10 = FUNC_6(VAR_7, VAR_13.uid, VAR_13.gid,
     VAR_4 | VAR_13.mode, 0);
 if (!VAR_10)
  goto out_free;

 VAR_11 = FUNC_2(VAR_10);
 if (!VAR_11) {
  FUNC_8(VAR_10);
  goto out_free;
 }
 VAR_7->s_root = VAR_11;
 return 0;
out_free:
 if (VAR_14->spool)
  FUNC_9(VAR_14->spool);
 FUNC_9(VAR_14);
 return -VAR_0;
}
