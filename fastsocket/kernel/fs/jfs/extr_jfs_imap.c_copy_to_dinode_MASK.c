
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct jfs_sb_info {int inostamp; int uid; int gid; int umask; } ;
struct jfs_inode_info {int fileset; int saved_uid; int saved_gid; int mode2; int next_index; int otime; int acltype; int dev; int ea; int acl; int ixpxd; } ;
struct TYPE_13__ {int tv_sec; int tv_nsec; } ;
struct TYPE_11__ {int tv_sec; int tv_nsec; } ;
struct TYPE_9__ {int tv_sec; int tv_nsec; } ;
struct inode {int i_ino; int i_generation; int i_nlink; int i_uid; int i_gid; int i_mode; TYPE_6__ i_mtime; TYPE_4__ i_ctime; TYPE_2__ i_atime; int i_blocks; int i_sb; int i_size; } ;
struct TYPE_14__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_12__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_10__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_8__ {void* tv_nsec; void* tv_sec; } ;
struct dinode {void* di_rdev; void* di_acltype; TYPE_7__ di_otime; void* di_next_index; int di_ea; int di_acl; int di_ixpxd; TYPE_5__ di_mtime; TYPE_3__ di_ctime; TYPE_1__ di_atime; void* di_mode; void* di_gid; void* di_uid; void* di_nlink; void* di_nblocks; void* di_size; void* di_gen; void* di_number; void* di_inostamp; void* di_fileset; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 struct jfs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct jfs_inode_info*) ;

__attribute__((used)) static void FUNC_8(struct dinode * VAR_0, struct inode *VAR_1)
{
 struct jfs_inode_info *VAR_2 = FUNC_0(VAR_1);
 struct jfs_sb_info *VAR_3 = FUNC_1(VAR_1->i_sb);

 VAR_0->di_fileset = FUNC_5(VAR_2->fileset);
 VAR_0->di_inostamp = FUNC_5(VAR_3->inostamp);
 VAR_0->di_number = FUNC_5(VAR_1->i_ino);
 VAR_0->di_gen = FUNC_5(VAR_1->i_generation);
 VAR_0->di_size = FUNC_6(VAR_1->i_size);
 VAR_0->di_nblocks = FUNC_6(FUNC_2(VAR_1->i_sb, VAR_1->i_blocks));
 VAR_0->di_nlink = FUNC_5(VAR_1->i_nlink);
 if (VAR_3->uid == -1)
  VAR_0->di_uid = FUNC_5(VAR_1->i_uid);
 else
  VAR_0->di_uid = FUNC_5(VAR_2->saved_uid);
 if (VAR_3->gid == -1)
  VAR_0->di_gid = FUNC_5(VAR_1->i_gid);
 else
  VAR_0->di_gid = FUNC_5(VAR_2->saved_gid);
 FUNC_7(VAR_2);




 if (VAR_3->umask == -1)
  VAR_0->di_mode = FUNC_5((VAR_2->mode2 & 0xffff0000) |
        VAR_1->i_mode);
 else
  VAR_0->di_mode = FUNC_5(VAR_2->mode2);

 VAR_0->di_atime.tv_sec = FUNC_5(VAR_1->i_atime.tv_sec);
 VAR_0->di_atime.tv_nsec = FUNC_5(VAR_1->i_atime.tv_nsec);
 VAR_0->di_ctime.tv_sec = FUNC_5(VAR_1->i_ctime.tv_sec);
 VAR_0->di_ctime.tv_nsec = FUNC_5(VAR_1->i_ctime.tv_nsec);
 VAR_0->di_mtime.tv_sec = FUNC_5(VAR_1->i_mtime.tv_sec);
 VAR_0->di_mtime.tv_nsec = FUNC_5(VAR_1->i_mtime.tv_nsec);
 VAR_0->di_ixpxd = VAR_2->ixpxd;
 VAR_0->di_acl = VAR_2->acl;
 VAR_0->di_ea = VAR_2->ea;
 VAR_0->di_next_index = FUNC_5(VAR_2->next_index);
 VAR_0->di_otime.tv_sec = FUNC_5(VAR_2->otime);
 VAR_0->di_otime.tv_nsec = 0;
 VAR_0->di_acltype = FUNC_5(VAR_2->acltype);
 if (FUNC_4(VAR_1->i_mode) || FUNC_3(VAR_1->i_mode))
  VAR_0->di_rdev = FUNC_5(VAR_2->dev);
}
