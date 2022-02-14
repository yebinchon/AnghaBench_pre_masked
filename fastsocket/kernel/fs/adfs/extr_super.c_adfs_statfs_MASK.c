
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
struct kstatfs {int f_files; int f_bavail; int f_bfree; long f_ffree; TYPE_2__ f_fsid; scalar_t__ f_blocks; int f_bsize; int f_namelen; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct adfs_sb_info {int s_ids_per_zone; int s_map_size; scalar_t__ s_size; int s_namelen; } ;
struct TYPE_3__ {int bd_dev; } ;


 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->d_sb;
 struct adfs_sb_info *VAR_4 = FUNC_0(VAR_3);
 u64 VAR_5 = FUNC_2(VAR_3->s_bdev->bd_dev);

 VAR_2->f_type = VAR_0;
 VAR_2->f_namelen = VAR_4->s_namelen;
 VAR_2->f_bsize = VAR_3->s_blocksize;
 VAR_2->f_blocks = VAR_4->s_size;
 VAR_2->f_files = VAR_4->s_ids_per_zone * VAR_4->s_map_size;
 VAR_2->f_bavail =
 VAR_2->f_bfree = FUNC_1(VAR_3);
 VAR_2->f_ffree = (long)(VAR_2->f_bfree * VAR_2->f_files) / (long)VAR_2->f_blocks;
 VAR_2->f_fsid.val[0] = (u32)VAR_5;
 VAR_2->f_fsid.val[1] = (u32)(VAR_5 >> 32);

 return 0;
}
