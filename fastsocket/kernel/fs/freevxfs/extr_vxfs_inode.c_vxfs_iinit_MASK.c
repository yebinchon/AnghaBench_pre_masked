
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vxfs_inode_info {int vii_gen; int vii_blocks; int vii_mtime; int vii_ctime; int vii_atime; int vii_size; int vii_nlink; scalar_t__ vii_gid; scalar_t__ vii_uid; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {struct vxfs_inode_info* i_private; int i_generation; int i_blocks; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; int i_size; int i_nlink; scalar_t__ i_gid; scalar_t__ i_uid; int i_mode; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (struct vxfs_inode_info*) ;

__attribute__((used)) static void
FUNC_1(struct inode *VAR_0, struct vxfs_inode_info *VAR_1)
{

 VAR_0->i_mode = FUNC_0(VAR_1);
 VAR_0->i_uid = (uid_t)VAR_1->vii_uid;
 VAR_0->i_gid = (gid_t)VAR_1->vii_gid;

 VAR_0->i_nlink = VAR_1->vii_nlink;
 VAR_0->i_size = VAR_1->vii_size;

 VAR_0->i_atime.tv_sec = VAR_1->vii_atime;
 VAR_0->i_ctime.tv_sec = VAR_1->vii_ctime;
 VAR_0->i_mtime.tv_sec = VAR_1->vii_mtime;
 VAR_0->i_atime.tv_nsec = 0;
 VAR_0->i_ctime.tv_nsec = 0;
 VAR_0->i_mtime.tv_nsec = 0;

 VAR_0->i_blocks = VAR_1->vii_blocks;
 VAR_0->i_generation = VAR_1->vii_gen;

 VAR_0->i_private = VAR_1;

}
