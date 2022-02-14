
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct hfs_extent {int count; } ;
typedef int hfs_extent_rec ;
typedef int __be32 ;
struct TYPE_4__ {int phys_size; int fs_blocks; int alloc_blocks; int clump_blocks; scalar_t__ first_blocks; int first_extents; } ;
struct TYPE_3__ {int alloc_blksz; int clumpablks; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int ,struct hfs_extent*,int) ;

void FUNC_6(struct inode *VAR_0, struct hfs_extent *VAR_1,
    __be32 VAR_2, __be32 VAR_3, u32 VAR_4)
{
 struct super_block *VAR_5 = VAR_0->i_sb;
 u32 VAR_6 = FUNC_3(VAR_2);
 u16 VAR_7;
 int VAR_8;

 FUNC_5(FUNC_0(VAR_0)->first_extents, VAR_1, sizeof(hfs_extent_rec));
 for (VAR_7 = 0, VAR_8 = 0; VAR_8 < 3; VAR_8++)
  VAR_7 += FUNC_2(VAR_1[VAR_8].count);
 FUNC_0(VAR_0)->first_blocks = VAR_7;

 VAR_0->i_size = FUNC_0(VAR_0)->phys_size = VAR_6;
 FUNC_0(VAR_0)->fs_blocks = (VAR_6 + VAR_5->s_blocksize - 1) >> VAR_5->s_blocksize_bits;
 FUNC_4(VAR_0, FUNC_0(VAR_0)->fs_blocks << VAR_5->s_blocksize_bits);
 FUNC_0(VAR_0)->alloc_blocks = FUNC_3(VAR_3) /
         FUNC_1(VAR_5)->alloc_blksz;
 FUNC_0(VAR_0)->clump_blocks = VAR_4 / FUNC_1(VAR_5)->alloc_blksz;
 if (!FUNC_0(VAR_0)->clump_blocks)
  FUNC_0(VAR_0)->clump_blocks = FUNC_1(VAR_5)->clumpablks;
}
