
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct page {int dummy; } ;
struct inode {int i_size; struct address_space* i_mapping; int i_ino; struct super_block* i_sb; } ;
struct hfs_find_data {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {int phys_size; void* first_blocks; int flags; int fs_blocks; void* alloc_blocks; int extents_lock; void* cached_blocks; void* cached_start; int cached_extents; int first_extents; } ;
struct TYPE_3__ {int alloc_blksz; int ext_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct hfs_find_data*,struct inode*,void*) ;
 int FUNC_3 (int ,char*,int ,long long,int) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (int ,struct hfs_find_data*) ;
 int FUNC_8 (struct super_block*,int ,void*,void*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct address_space*,int,int ,int ,struct page**,void**) ;
 int FUNC_14 (int *,struct address_space*,int,int ,int ,struct page*,void*) ;

void FUNC_15(struct inode *VAR_4)
{
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct hfs_find_data VAR_6;
 u16 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;

 FUNC_3(VAR_1, "truncate: %lu, %Lu -> %Lu\n", VAR_4->i_ino,
        (long long)FUNC_0(VAR_4)->phys_size, VAR_4->i_size);
 if (VAR_4->i_size > FUNC_0(VAR_4)->phys_size) {
  struct address_space *VAR_12 = VAR_4->i_mapping;
  void *VAR_13;
  struct page *VAR_14;
  int VAR_15;


  VAR_10 = VAR_4->i_size - 1;
  VAR_15 = FUNC_13(((void*)0), VAR_12, VAR_10+1, 0,
    VAR_0, &VAR_14, &VAR_13);
  if (!VAR_15) {
   VAR_15 = FUNC_14(((void*)0), VAR_12, VAR_10+1, 0, 0,
     VAR_14, VAR_13);
  }
  if (VAR_15)
   VAR_4->i_size = FUNC_0(VAR_4)->phys_size;
  return;
 } else if (VAR_4->i_size == FUNC_0(VAR_4)->phys_size)
  return;
 VAR_10 = VAR_4->i_size + FUNC_1(VAR_5)->alloc_blksz - 1;
 VAR_7 = VAR_10 / FUNC_1(VAR_5)->alloc_blksz;
 VAR_8 = FUNC_0(VAR_4)->alloc_blocks;
 if (VAR_7 == VAR_8)
  goto out;

 FUNC_11(&FUNC_0(VAR_4)->extents_lock);
 FUNC_7(FUNC_1(VAR_5)->ext_tree, &VAR_6);
 while (1) {
  if (VAR_8 == FUNC_0(VAR_4)->first_blocks) {
   FUNC_8(VAR_5, FUNC_0(VAR_4)->first_extents,
      VAR_8, VAR_8 - VAR_7);
   FUNC_5(FUNC_0(VAR_4)->first_extents);
   FUNC_0(VAR_4)->first_blocks = VAR_7;
   break;
  }
  VAR_11 = FUNC_2(&VAR_6, VAR_4, VAR_8);
  if (VAR_11)
   break;
  VAR_9 = FUNC_0(VAR_4)->cached_start;
  FUNC_8(VAR_5, FUNC_0(VAR_4)->cached_extents,
     VAR_8 - VAR_9, VAR_8 - VAR_7);
  FUNC_5(FUNC_0(VAR_4)->cached_extents);
  if (VAR_7 > VAR_9) {
   FUNC_0(VAR_4)->flags |= VAR_2;
   break;
  }
  VAR_8 = VAR_9;
  FUNC_0(VAR_4)->cached_start = FUNC_0(VAR_4)->cached_blocks = 0;
  FUNC_0(VAR_4)->flags &= ~(VAR_2|VAR_3);
  FUNC_4(&VAR_6);
 }
 FUNC_6(&VAR_6);
 FUNC_12(&FUNC_0(VAR_4)->extents_lock);

 FUNC_0(VAR_4)->alloc_blocks = VAR_7;
out:
 FUNC_0(VAR_4)->phys_size = VAR_4->i_size;
 FUNC_0(VAR_4)->fs_blocks = (VAR_4->i_size + VAR_5->s_blocksize - 1) >> VAR_5->s_blocksize_bits;
 FUNC_9(VAR_4, FUNC_0(VAR_4)->fs_blocks << VAR_5->s_blocksize_bits);
 FUNC_10(VAR_4);
}
