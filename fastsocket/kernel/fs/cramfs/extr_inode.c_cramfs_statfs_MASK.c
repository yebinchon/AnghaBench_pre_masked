
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {TYPE_1__* s_bdev; } ;
struct TYPE_5__ {void** val; } ;
struct kstatfs {int f_namelen; TYPE_2__ f_fsid; scalar_t__ f_ffree; int f_files; scalar_t__ f_bavail; scalar_t__ f_bfree; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_6__ {int files; int blocks; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 u64 VAR_6 = FUNC_1(VAR_5->s_bdev->bd_dev);

 VAR_4->f_type = VAR_0;
 VAR_4->f_bsize = VAR_2;
 VAR_4->f_blocks = FUNC_0(VAR_5)->blocks;
 VAR_4->f_bfree = 0;
 VAR_4->f_bavail = 0;
 VAR_4->f_files = FUNC_0(VAR_5)->files;
 VAR_4->f_ffree = 0;
 VAR_4->f_fsid.val[0] = (u32)VAR_6;
 VAR_4->f_fsid.val[1] = (u32)(VAR_6 >> 32);
 VAR_4->f_namelen = VAR_1;
 return 0;
}
