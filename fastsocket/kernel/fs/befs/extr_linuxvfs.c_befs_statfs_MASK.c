
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
struct kstatfs {int f_namelen; TYPE_2__ f_fsid; scalar_t__ f_ffree; scalar_t__ f_files; scalar_t__ f_bfree; scalar_t__ f_bavail; scalar_t__ f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_6__ {scalar_t__ used_blocks; scalar_t__ num_blocks; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->d_sb;
 u64 VAR_5 = FUNC_2(VAR_4->s_bdev->bd_dev);

 FUNC_1(VAR_4, "---> befs_statfs()");

 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_4->s_blocksize;
 VAR_3->f_blocks = FUNC_0(VAR_4)->num_blocks;
 VAR_3->f_bfree = FUNC_0(VAR_4)->num_blocks - FUNC_0(VAR_4)->used_blocks;
 VAR_3->f_bavail = VAR_3->f_bfree;
 VAR_3->f_files = 0;
 VAR_3->f_ffree = 0;
 VAR_3->f_fsid.val[0] = (u32)VAR_5;
 VAR_3->f_fsid.val[1] = (u32)(VAR_5 >> 32);
 VAR_3->f_namelen = VAR_0;

 FUNC_1(VAR_4, "<--- befs_statfs()");

 return 0;
}
