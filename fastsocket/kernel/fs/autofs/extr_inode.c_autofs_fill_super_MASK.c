
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; struct autofs_sb_info* s_fs_info; struct dentry* s_root; int * s_op; int s_magic; } ;
struct inode {int i_gid; int i_uid; } ;
struct file {TYPE_1__* f_op; } ;
struct dentry {int dummy; } ;
struct autofs_sb_info {int catatonic; int oz_pgrp; struct file* pipe; struct super_block* sb; int next_dir_ino; int symlink_bitmap; int * queues; int dirhash; scalar_t__ exp_timeout; int magic; } ;
typedef int pid_t ;
struct TYPE_2__ {int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 struct dentry* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 struct file* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_11 (int,int ) ;
 int FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 (void*,int*,int *,int *,int *,int*,int*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct super_block*,void*) ;

int FUNC_17(struct super_block *VAR_9, void *VAR_10, int VAR_11)
{
 struct inode * VAR_12;
 struct dentry * VAR_13;
 struct file * VAR_14;
 int VAR_15;
 struct autofs_sb_info *VAR_16;
 int VAR_17, VAR_18;
 pid_t VAR_19;

 FUNC_16(VAR_9, VAR_10);

 VAR_16 = FUNC_11(sizeof(*VAR_16), VAR_7);
 if (!VAR_16)
  goto fail_unlock;
 FUNC_0(("autofs: starting up, sbi = %p\n",VAR_16));

 VAR_9->s_fs_info = VAR_16;
 VAR_16->magic = VAR_3;
 VAR_16->pipe = ((void*)0);
 VAR_16->catatonic = 1;
 VAR_16->exp_timeout = 0;
 FUNC_3(&VAR_16->dirhash);
 VAR_16->queues = ((void*)0);
 FUNC_12(VAR_16->symlink_bitmap, 0, sizeof(long)*VAR_5);
 VAR_16->next_dir_ino = VAR_0;
 VAR_9->s_blocksize = 1024;
 VAR_9->s_blocksize_bits = 10;
 VAR_9->s_magic = VAR_4;
 VAR_9->s_op = &VAR_8;
 VAR_9->s_time_gran = 1;
 VAR_16->sb = VAR_9;

 VAR_12 = FUNC_2(VAR_9, VAR_2);
 if (FUNC_1(VAR_12))
  goto fail_free;
 VAR_13 = FUNC_4(VAR_12);
 VAR_14 = ((void*)0);

 if (!VAR_13)
  goto fail_iput;


 if (FUNC_13(VAR_10, &VAR_15, &VAR_12->i_uid,
    &VAR_12->i_gid, &VAR_19, &VAR_17,
    &VAR_18)) {
  FUNC_14("autofs: called with bogus options\n");
  goto fail_dput;
 }


 if (VAR_17 > VAR_1 ||
      VAR_18 < VAR_1) {
  FUNC_14("autofs: kernel does not match daemon version\n");
  goto fail_dput;
 }

 FUNC_0(("autofs: pipe fd = %d, pgrp = %u\n", VAR_15, VAR_19));
 VAR_16->oz_pgrp = FUNC_7(VAR_19);

 if (!VAR_16->oz_pgrp) {
  FUNC_14("autofs: could not find process group %d\n", VAR_19);
  goto fail_dput;
 }

 VAR_14 = FUNC_6(VAR_15);

 if (!VAR_14) {
  FUNC_14("autofs: could not open pipe file descriptor\n");
  goto fail_put_pid;
 }

 if (!VAR_14->f_op || !VAR_14->f_op->write)
  goto fail_fput;
 VAR_16->pipe = VAR_14;
 VAR_16->catatonic = 0;




 VAR_9->s_root = VAR_13;
 return 0;

fail_fput:
 FUNC_14("autofs: pipe file descriptor does not contain proper ops\n");
 FUNC_8(VAR_14);
fail_put_pid:
 FUNC_15(VAR_16->oz_pgrp);
fail_dput:
 FUNC_5(VAR_13);
 goto fail_free;
fail_iput:
 FUNC_14("autofs: get root dentry failed\n");
 FUNC_9(VAR_12);
fail_free:
 FUNC_10(VAR_16);
 VAR_9->s_fs_info = ((void*)0);
fail_unlock:
 return -VAR_6;
}
