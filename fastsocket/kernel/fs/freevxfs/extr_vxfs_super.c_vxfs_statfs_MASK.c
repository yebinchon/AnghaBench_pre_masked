
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxfs_sb_info {TYPE_1__* vsi_raw; } ;
struct kstatfs {int f_namelen; int f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; int f_bfree; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct TYPE_4__ {int s_blocksize; } ;
struct TYPE_3__ {int vs_ifree; int vs_free; int vs_dsize; } ;


 int VAR_0 ;
 struct vxfs_sb_info* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct vxfs_sb_info *VAR_4 = FUNC_0(VAR_2->d_sb);

 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_2->d_sb->s_blocksize;
 VAR_3->f_blocks = VAR_4->vsi_raw->vs_dsize;
 VAR_3->f_bfree = VAR_4->vsi_raw->vs_free;
 VAR_3->f_bavail = 0;
 VAR_3->f_files = 0;
 VAR_3->f_ffree = VAR_4->vsi_raw->vs_ifree;
 VAR_3->f_namelen = VAR_0;

 return 0;
}
