
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {unsigned int index; } ;
struct inode {int i_ino; int i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {unsigned long b_state; int b_blocknr; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_6__ {void* size; void* next; void* sequence; void* key; void* ptype; } ;
struct TYPE_5__ {int mmu_private; } ;
struct TYPE_4__ {int s_data_blksize; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 TYPE_3__* FUNC_1 (struct buffer_head*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 unsigned long VAR_0 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct page*) ;
 int VAR_3 ;
 int FUNC_8 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_9 (struct inode*,int,int) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct super_block*,struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct super_block*,char*,char*,int,int) ;
 int FUNC_14 (void**,int) ;
 int FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (struct buffer_head*) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (struct buffer_head*,struct inode*) ;
 int FUNC_19 (scalar_t__,char*,int) ;
 int FUNC_20 (int,unsigned int) ;
 char* FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (char*,int,unsigned long long,unsigned long long) ;
 int FUNC_24 (struct page*) ;

__attribute__((used)) static int FUNC_25(struct file *VAR_4, struct address_space *VAR_5,
    loff_t VAR_6, unsigned VAR_7, unsigned VAR_8,
    struct page *VAR_9, void *VAR_10)
{
 struct inode *VAR_11 = VAR_5->host;
 struct super_block *VAR_12 = VAR_11->i_sb;
 struct buffer_head *VAR_13, *VAR_14;
 char *VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 unsigned VAR_19, VAR_20;
 u32 VAR_21;
 int VAR_22;

 VAR_19 = VAR_6 & (VAR_2 - 1);
 VAR_20 = VAR_6 + VAR_7;






 FUNC_23("AFFS: write_begin(%u, %llu, %llu)\n", (u32)VAR_11->i_ino, (unsigned long long)VAR_6, (unsigned long long)VAR_6 + VAR_7);
 VAR_18 = FUNC_3(VAR_12)->s_data_blksize;
 VAR_15 = FUNC_21(VAR_9);

 VAR_13 = ((void*)0);
 VAR_22 = 0;
 VAR_21 = (VAR_9->index << VAR_1) + VAR_19;
 VAR_16 = VAR_21 / VAR_18;
 VAR_17 = VAR_21 % VAR_18;
 if (VAR_17) {
  VAR_13 = FUNC_9(VAR_11, VAR_16, 0);
  if (FUNC_5(VAR_13))
   return FUNC_6(VAR_13);
  VAR_21 = FUNC_20(VAR_18 - VAR_17, VAR_20 - VAR_19);
  FUNC_4(VAR_17 + VAR_21 > VAR_18 || VAR_21 > VAR_18);
  FUNC_19(FUNC_0(VAR_13) + VAR_17, VAR_15 + VAR_19, VAR_21);
  FUNC_14(&FUNC_1(VAR_13)->size, VAR_21);
  FUNC_11(VAR_12, VAR_13);
  FUNC_18(VAR_13, VAR_11);
  VAR_22 += VAR_21;
  VAR_19 += VAR_21;
  VAR_16++;
 } else if (VAR_16) {
  VAR_13 = FUNC_9(VAR_11, VAR_16 - 1, 0);
  if (FUNC_5(VAR_13))
   return FUNC_6(VAR_13);
 }
 while (VAR_19 + VAR_18 <= VAR_20) {
  VAR_14 = VAR_13;
  VAR_13 = FUNC_12(VAR_11, VAR_16);
  if (FUNC_5(VAR_13))
   goto out;
  FUNC_19(FUNC_0(VAR_13), VAR_15 + VAR_19, VAR_18);
  if (FUNC_16(VAR_13)) {
   FUNC_1(VAR_13)->ptype = FUNC_17(VAR_3);
   FUNC_1(VAR_13)->key = FUNC_17(VAR_11->i_ino);
   FUNC_1(VAR_13)->sequence = FUNC_17(VAR_16);
   FUNC_1(VAR_13)->size = FUNC_17(VAR_18);
   FUNC_1(VAR_13)->next = 0;
   VAR_13->b_state &= ~(1UL << VAR_0);
   if (VAR_14) {
    u32 VAR_23 = FUNC_15(FUNC_1(VAR_14)->next);
    if (VAR_23)
     FUNC_13(VAR_12, "commit_write_ofs", "next block already set for %d (%d)", VAR_16, VAR_23);
    FUNC_1(VAR_14)->next = FUNC_17(VAR_13->b_blocknr);
    FUNC_8(VAR_14, VAR_13->b_blocknr - VAR_23);
    FUNC_18(VAR_14, VAR_11);
   }
  }
  FUNC_10(VAR_14);
  FUNC_11(VAR_12, VAR_13);
  FUNC_18(VAR_13, VAR_11);
  VAR_22 += VAR_18;
  VAR_19 += VAR_18;
  VAR_16++;
 }
 if (VAR_19 < VAR_20) {
  VAR_14 = VAR_13;
  VAR_13 = FUNC_9(VAR_11, VAR_16, 1);
  if (FUNC_5(VAR_13))
   goto out;
  VAR_21 = FUNC_20(VAR_18, VAR_20 - VAR_19);
  FUNC_4(VAR_21 > VAR_18);
  FUNC_19(FUNC_0(VAR_13), VAR_15 + VAR_19, VAR_21);
  if (FUNC_16(VAR_13)) {
   FUNC_1(VAR_13)->ptype = FUNC_17(VAR_3);
   FUNC_1(VAR_13)->key = FUNC_17(VAR_11->i_ino);
   FUNC_1(VAR_13)->sequence = FUNC_17(VAR_16);
   FUNC_1(VAR_13)->size = FUNC_17(VAR_21);
   FUNC_1(VAR_13)->next = 0;
   VAR_13->b_state &= ~(1UL << VAR_0);
   if (VAR_14) {
    u32 VAR_24 = FUNC_15(FUNC_1(VAR_14)->next);
    if (VAR_24)
     FUNC_13(VAR_12, "commit_write_ofs", "next block already set for %d (%d)", VAR_16, VAR_24);
    FUNC_1(VAR_14)->next = FUNC_17(VAR_13->b_blocknr);
    FUNC_8(VAR_14, VAR_13->b_blocknr - VAR_24);
    FUNC_18(VAR_14, VAR_11);
   }
  } else if (FUNC_15(FUNC_1(VAR_13)->size) < VAR_21)
   FUNC_1(VAR_13)->size = FUNC_17(VAR_21);
  FUNC_10(VAR_14);
  FUNC_11(VAR_12, VAR_13);
  FUNC_18(VAR_13, VAR_11);
  VAR_22 += VAR_21;
  VAR_19 += VAR_21;
  VAR_16++;
 }
 FUNC_7(VAR_9);

done:
 FUNC_10(VAR_13);
 VAR_21 = (VAR_9->index << VAR_1) + VAR_19;
 if (VAR_21 > VAR_11->i_size)
  VAR_11->i_size = FUNC_2(VAR_11)->mmu_private = VAR_21;

 FUNC_24(VAR_9);
 FUNC_22(VAR_9);

 return VAR_22;

out:
 VAR_13 = VAR_14;
 if (!VAR_22)
  VAR_22 = FUNC_6(VAR_13);
 goto done;
}
