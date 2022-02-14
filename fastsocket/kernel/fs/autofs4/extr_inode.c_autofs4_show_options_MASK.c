
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {TYPE_2__* mnt_sb; } ;
struct seq_file {int dummy; } ;
struct inode {scalar_t__ i_uid; scalar_t__ i_gid; } ;
struct autofs_sb_info {int exp_timeout; int type; int max_proto; int min_proto; int oz_pgrp; int pipefd; } ;
struct TYPE_4__ {TYPE_1__* s_root; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 struct autofs_sb_info* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, struct vfsmount *VAR_2)
{
 struct autofs_sb_info *VAR_3 = FUNC_0(VAR_2->mnt_sb);
 struct inode *VAR_4 = VAR_2->mnt_sb->s_root->d_inode;

 if (!VAR_3)
  return 0;

 FUNC_3(VAR_1, ",fd=%d", VAR_3->pipefd);
 if (VAR_4->i_uid != 0)
  FUNC_3(VAR_1, ",uid=%u", VAR_4->i_uid);
 if (VAR_4->i_gid != 0)
  FUNC_3(VAR_1, ",gid=%u", VAR_4->i_gid);
 FUNC_3(VAR_1, ",pgrp=%d", VAR_3->oz_pgrp);
 FUNC_3(VAR_1, ",timeout=%lu", VAR_3->exp_timeout/VAR_0);
 FUNC_3(VAR_1, ",minproto=%d", VAR_3->min_proto);
 FUNC_3(VAR_1, ",maxproto=%d", VAR_3->max_proto);

 if (FUNC_2(VAR_3->type))
  FUNC_3(VAR_1, ",offset");
 else if (FUNC_1(VAR_3->type))
  FUNC_3(VAR_1, ",direct");
 else
  FUNC_3(VAR_1, ",indirect");

 return 0;
}
