
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {int f_namelen; TYPE_2__ f_fsid; int f_ffree; scalar_t__ f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct bfs_sb_info {int si_freei; scalar_t__ si_lasti; int si_freeb; int si_blocks; } ;
struct TYPE_3__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 struct bfs_sb_info *VAR_6 = FUNC_0(VAR_5);
 u64 VAR_7 = FUNC_1(VAR_5->s_bdev->bd_dev);
 VAR_4->f_type = VAR_0;
 VAR_4->f_bsize = VAR_5->s_blocksize;
 VAR_4->f_blocks = VAR_6->si_blocks;
 VAR_4->f_bfree = VAR_4->f_bavail = VAR_6->si_freeb;
 VAR_4->f_files = VAR_6->si_lasti + 1 - VAR_2;
 VAR_4->f_ffree = VAR_6->si_freei;
 VAR_4->f_fsid.val[0] = (u32)VAR_7;
 VAR_4->f_fsid.val[1] = (u32)(VAR_7 >> 32);
 VAR_4->f_namelen = VAR_1;
 return 0;
}
