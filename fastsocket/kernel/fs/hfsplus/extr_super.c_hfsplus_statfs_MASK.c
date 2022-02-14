
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct TYPE_5__ {void** val; } ;
struct kstatfs {int f_blocks; int f_bfree; int f_bavail; int f_files; int f_namelen; TYPE_2__ f_fsid; scalar_t__ f_ffree; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_6__ {int total_blocks; int fs_shift; int free_blocks; scalar_t__ next_cnid; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 TYPE_3__ FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->d_sb;
 u64 VAR_5 = FUNC_1(VAR_4->s_bdev->bd_dev);

 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_4->s_blocksize;
 VAR_3->f_blocks = FUNC_0(VAR_4).total_blocks << FUNC_0(VAR_4).fs_shift;
 VAR_3->f_bfree = FUNC_0(VAR_4).free_blocks << FUNC_0(VAR_4).fs_shift;
 VAR_3->f_bavail = VAR_3->f_bfree;
 VAR_3->f_files = 0xFFFFFFFF;
 VAR_3->f_ffree = 0xFFFFFFFF - FUNC_0(VAR_4).next_cnid;
 VAR_3->f_fsid.val[0] = (u32)VAR_5;
 VAR_3->f_fsid.val[1] = (u32)(VAR_5 >> 32);
 VAR_3->f_namelen = VAR_0;

 return 0;
}
