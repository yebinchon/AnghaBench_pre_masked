
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct super_block {int dummy; } ;
struct inode {unsigned int i_blocks; int i_blkbits; struct super_block* i_sb; } ;
struct ext4_inode_info {struct inode vfs_inode; } ;
struct ext4_inode {void* i_blocks_high; void* i_blocks_lo; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int ) ;
 int VAR_2 ;
 void* FUNC_1 (unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_3,
    struct ext4_inode *VAR_4,
    struct ext4_inode_info *VAR_5)
{
 struct inode *VAR_6 = &(VAR_5->vfs_inode);
 u64 VAR_7 = VAR_6->i_blocks;
 struct super_block *VAR_8 = VAR_6->i_sb;

 if (VAR_7 <= ~0U) {




  VAR_4->i_blocks_lo = FUNC_2(VAR_7);
  VAR_4->i_blocks_high = 0;
  FUNC_3(VAR_6, VAR_2);
  return 0;
 }
 if (!FUNC_0(VAR_8, VAR_1))
  return -VAR_0;

 if (VAR_7 <= 0xffffffffffffULL) {




  VAR_4->i_blocks_lo = FUNC_2(VAR_7);
  VAR_4->i_blocks_high = FUNC_1(VAR_7 >> 32);
  FUNC_3(VAR_6, VAR_2);
 } else {
  FUNC_4(VAR_6, VAR_2);

  VAR_7 = VAR_7 >> (VAR_6->i_blkbits - 9);
  VAR_4->i_blocks_lo = FUNC_2(VAR_7);
  VAR_4->i_blocks_high = FUNC_1(VAR_7 >> 32);
 }
 return 0;
}
