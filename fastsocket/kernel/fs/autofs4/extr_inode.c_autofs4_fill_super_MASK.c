
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; struct autofs_sb_info* s_fs_info; struct dentry* s_root; int * s_op; int s_magic; } ;
struct inode {int * i_op; int * i_fop; int i_gid; int i_uid; } ;
struct file {TYPE_1__* f_op; } ;
struct dentry {struct autofs_sb_info* d_fsdata; int * d_op; } ;
struct autofs_sb_info {int pipefd; int catatonic; scalar_t__ version; scalar_t__ min_proto; scalar_t__ max_proto; struct file* pipe; int oz_pgrp; scalar_t__ sub_version; int type; int expiring_list; int active_list; int lookup_lock; int * queues; int fs_lock; int pipe_mutex; int wq_mutex; struct super_block* sb; scalar_t__ exp_timeout; int magic; } ;
struct autofs_info {int pipefd; int catatonic; scalar_t__ version; scalar_t__ min_proto; scalar_t__ max_proto; struct file* pipe; int oz_pgrp; scalar_t__ sub_version; int type; int expiring_list; int active_list; int lookup_lock; int * queues; int fs_lock; int pipe_mutex; int wq_mutex; struct super_block* sb; scalar_t__ exp_timeout; int magic; } ;
struct TYPE_2__ {int write; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct inode* FUNC_3 (struct super_block*,struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_4 (struct autofs_sb_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_11 ;
 struct dentry* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*) ;
 struct file* FUNC_8 (int) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (void*,int*,int *,int *,int *,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

int FUNC_19(struct super_block *VAR_12, void *VAR_13, int VAR_14)
{
 struct inode * VAR_15;
 struct dentry * VAR_16;
 struct file * VAR_17;
 int VAR_18;
 struct autofs_sb_info *VAR_19;
 struct autofs_info *VAR_20;

 VAR_19 = FUNC_12(sizeof(*VAR_19), VAR_6);
 if (!VAR_19)
  goto fail_unlock;
 FUNC_0("starting up, sbi = %p",VAR_19);

 VAR_12->s_fs_info = VAR_19;
 VAR_19->magic = VAR_3;
 VAR_19->pipefd = -1;
 VAR_19->pipe = ((void*)0);
 VAR_19->catatonic = 1;
 VAR_19->exp_timeout = 0;
 VAR_19->oz_pgrp = FUNC_18(VAR_11);
 VAR_19->sb = VAR_12;
 VAR_19->version = 0;
 VAR_19->sub_version = 0;
 FUNC_16(&VAR_19->type);
 VAR_19->min_proto = 0;
 VAR_19->max_proto = 0;
 FUNC_13(&VAR_19->wq_mutex);
 FUNC_13(&VAR_19->pipe_mutex);
 FUNC_17(&VAR_19->fs_lock);
 VAR_19->queues = ((void*)0);
 FUNC_17(&VAR_19->lookup_lock);
 FUNC_1(&VAR_19->active_list);
 FUNC_1(&VAR_19->expiring_list);
 VAR_12->s_blocksize = 1024;
 VAR_12->s_blocksize_bits = 10;
 VAR_12->s_magic = VAR_4;
 VAR_12->s_op = &VAR_10;
 VAR_12->s_time_gran = 1;




 VAR_20 = FUNC_4(VAR_19);
 if (!VAR_20)
  goto fail_free;
 VAR_15 = FUNC_3(VAR_12, VAR_20);
 if (!VAR_15)
  goto fail_ino;

 VAR_16 = FUNC_6(VAR_15);
 if (!VAR_16)
  goto fail_iput;
 VAR_17 = ((void*)0);

 VAR_16->d_op = &VAR_7;
 VAR_16->d_fsdata = VAR_20;


 if (FUNC_14(VAR_13, &VAR_18, &VAR_15->i_uid, &VAR_15->i_gid,
    &VAR_19->oz_pgrp, &VAR_19->type, &VAR_19->min_proto,
    &VAR_19->max_proto)) {
  FUNC_15("autofs: called with bogus options\n");
  goto fail_dput;
 }

 if (FUNC_5(VAR_19->type))
  FUNC_2(VAR_16);

 VAR_15->i_fop = &VAR_9;
 VAR_15->i_op = &VAR_8;


 if (VAR_19->max_proto < VAR_1 ||
     VAR_19->min_proto > VAR_0) {
  FUNC_15("autofs: kernel does not match daemon version "
         "daemon (%d, %d) kernel (%d, %d)\n",
   VAR_19->min_proto, VAR_19->max_proto,
   VAR_1, VAR_0);
  goto fail_dput;
 }


 if (VAR_19->max_proto > VAR_0)
  VAR_19->version = VAR_0;
 else
  VAR_19->version = VAR_19->max_proto;
 VAR_19->sub_version = VAR_2;

 FUNC_0("pipe fd = %d, pgrp = %u", VAR_18, VAR_19->oz_pgrp);
 VAR_17 = FUNC_8(VAR_18);

 if (!VAR_17) {
  FUNC_15("autofs: could not open pipe file descriptor\n");
  goto fail_dput;
 }
 if (!VAR_17->f_op || !VAR_17->f_op->write)
  goto fail_fput;
 VAR_19->pipe = VAR_17;
 VAR_19->pipefd = VAR_18;
 VAR_19->catatonic = 0;




 VAR_12->s_root = VAR_16;
 return 0;




fail_fput:
 FUNC_15("autofs: pipe file descriptor does not contain proper ops\n");
 FUNC_9(VAR_17);

fail_dput:
 FUNC_7(VAR_16);
 goto fail_free;
fail_iput:
 FUNC_15("autofs: get root dentry failed\n");
 FUNC_10(VAR_15);
fail_ino:
 FUNC_11(VAR_20);
fail_free:
 FUNC_11(VAR_19);
 VAR_12->s_fs_info = ((void*)0);
fail_unlock:
 return -VAR_5;
}
