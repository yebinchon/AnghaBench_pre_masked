
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ino; int i_size; struct super_block* i_sb; } ;
struct buffer_head {unsigned long b_state; int b_blocknr; } ;
struct TYPE_6__ {void* next; void* size; void* sequence; void* key; void* ptype; } ;
struct TYPE_5__ {int mmu_private; } ;
struct TYPE_4__ {int s_data_blksize; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 TYPE_3__* FUNC_1 (struct buffer_head*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 unsigned long VAR_0 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_7 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_8 (struct inode*,int,int ) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct super_block*,struct buffer_head*) ;
 struct buffer_head* FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct super_block*,char*,char*,int,int) ;
 int FUNC_13 (void**,int) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (struct buffer_head*,struct inode*) ;
 int FUNC_17 (scalar_t__,int ,int) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (char*,int,int) ;

__attribute__((used)) static int
FUNC_20(struct inode *VAR_2, u32 VAR_3)
{
 struct super_block *VAR_4 = VAR_2->i_sb;
 struct buffer_head *VAR_5, *VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 u32 VAR_11;

 FUNC_19("AFFS: extent_file(%u, %d)\n", (u32)VAR_2->i_ino, VAR_3);
 VAR_10 = FUNC_3(VAR_4)->s_data_blksize;
 VAR_5 = ((void*)0);
 VAR_9 = FUNC_2(VAR_2)->mmu_private;
 VAR_7 = VAR_9 / VAR_10;
 VAR_8 = VAR_9 % VAR_10;
 if (VAR_8) {
  VAR_5 = FUNC_8(VAR_2, VAR_7, 0);
  if (FUNC_5(VAR_5))
   return FUNC_6(VAR_5);
  VAR_11 = FUNC_18(VAR_10 - VAR_8, VAR_3 - VAR_9);
  FUNC_4(VAR_8 + VAR_11 > VAR_10 || VAR_11 > VAR_10);
  FUNC_17(FUNC_0(VAR_5) + VAR_8, 0, VAR_11);
  FUNC_13(&FUNC_1(VAR_5)->size, VAR_11);
  FUNC_10(VAR_4, VAR_5);
  FUNC_16(VAR_5, VAR_2);
  VAR_9 += VAR_11;
  VAR_7++;
 } else if (VAR_7) {
  VAR_5 = FUNC_8(VAR_2, VAR_7 - 1, 0);
  if (FUNC_5(VAR_5))
   return FUNC_6(VAR_5);
 }

 while (VAR_9 < VAR_3) {
  VAR_6 = VAR_5;
  VAR_5 = FUNC_11(VAR_2, VAR_7);
  if (FUNC_5(VAR_5))
   goto out;
  VAR_11 = FUNC_18(VAR_10, VAR_3 - VAR_9);
  FUNC_4(VAR_11 > VAR_10);
  FUNC_1(VAR_5)->ptype = FUNC_15(VAR_1);
  FUNC_1(VAR_5)->key = FUNC_15(VAR_2->i_ino);
  FUNC_1(VAR_5)->sequence = FUNC_15(VAR_7);
  FUNC_1(VAR_5)->size = FUNC_15(VAR_11);
  FUNC_10(VAR_4, VAR_5);
  VAR_5->b_state &= ~(1UL << VAR_0);
  FUNC_16(VAR_5, VAR_2);
  if (VAR_6) {
   u32 VAR_12 = FUNC_14(FUNC_1(VAR_6)->next);
   if (VAR_12)
    FUNC_12(VAR_4, "extent_file_ofs", "next block already set for %d (%d)", VAR_7, VAR_12);
   FUNC_1(VAR_6)->next = FUNC_15(VAR_5->b_blocknr);
   FUNC_7(VAR_6, VAR_5->b_blocknr - VAR_12);
   FUNC_16(VAR_6, VAR_2);
   FUNC_9(VAR_6);
  }
  VAR_9 += VAR_10;
  VAR_7++;
 }
 FUNC_9(VAR_5);
 VAR_2->i_size = FUNC_2(VAR_2)->mmu_private = VAR_3;
 return 0;

out:
 VAR_2->i_size = FUNC_2(VAR_2)->mmu_private = VAR_3;
 return FUNC_6(VAR_5);
}
