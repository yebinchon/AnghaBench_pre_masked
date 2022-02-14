
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
struct kstatfs {int f_bfree; int f_bavail; int f_namelen; TYPE_2__ f_fsid; scalar_t__ f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_6__ {scalar_t__ s_reserved; scalar_t__ s_partition_size; } ;
struct TYPE_4__ {int bd_dev; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->d_sb;
 int VAR_4;
 u64 VAR_5 = FUNC_2(VAR_3->s_bdev->bd_dev);

 FUNC_3("AFFS: statfs() partsize=%d, reserved=%d\n",FUNC_0(VAR_3)->s_partition_size,
      FUNC_0(VAR_3)->s_reserved);

 VAR_4 = FUNC_1(VAR_3);
 VAR_2->f_type = VAR_0;
 VAR_2->f_bsize = VAR_3->s_blocksize;
 VAR_2->f_blocks = FUNC_0(VAR_3)->s_partition_size - FUNC_0(VAR_3)->s_reserved;
 VAR_2->f_bfree = VAR_4;
 VAR_2->f_bavail = VAR_4;
 VAR_2->f_fsid.val[0] = (u32)VAR_5;
 VAR_2->f_fsid.val[1] = (u32)(VAR_5 >> 32);
 VAR_2->f_namelen = 30;
 return 0;
}
