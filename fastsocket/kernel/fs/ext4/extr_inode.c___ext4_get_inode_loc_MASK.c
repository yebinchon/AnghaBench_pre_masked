
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct ext4_iloc {int block_group; int offset; struct buffer_head* bh; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int b_end_io; int b_size; int b_data; } ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {int s_inode_readahead_blks; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 TYPE_1__* FUNC_4 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_8 (struct super_block*,char*,int,int) ;
 struct ext4_group_desc* FUNC_9 (struct super_block*,int,int *) ;
 int FUNC_10 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_11 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_12 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_13 (int,int ) ;
 int FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (struct super_block*,int ) ;
 struct buffer_head* FUNC_19 (struct super_block*,int) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (int ,struct buffer_head*) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_4,
    struct ext4_iloc *VAR_5, int VAR_6)
{
 struct ext4_group_desc *VAR_7;
 struct buffer_head *VAR_8;
 struct super_block *VAR_9 = VAR_4->i_sb;
 ext4_fsblk_t VAR_10;
 int VAR_11, VAR_12;

 VAR_5->bh = ((void*)0);
 if (!FUNC_14(VAR_9, VAR_4->i_ino))
  return -VAR_0;

 VAR_5->block_group = (VAR_4->i_ino - 1) / FUNC_2(VAR_9);
 VAR_7 = FUNC_9(VAR_9, VAR_5->block_group, ((void*)0));
 if (!VAR_7)
  return -VAR_0;




 VAR_11 = (FUNC_0(VAR_9) / FUNC_3(VAR_9));
 VAR_12 = ((VAR_4->i_ino - 1) %
   FUNC_2(VAR_9));
 VAR_10 = FUNC_11(VAR_9, VAR_7) + (VAR_12 / VAR_11);
 VAR_5->offset = (VAR_12 % VAR_11) * FUNC_3(VAR_9);

 VAR_8 = FUNC_19(VAR_9, VAR_10);
 if (!VAR_8) {
  FUNC_8(VAR_9, "unable to read inode block - "
      "inode=%lu, block=%llu", VAR_4->i_ino, VAR_10);
  return -VAR_0;
 }
 if (!FUNC_6(VAR_8)) {
  FUNC_16(VAR_8);







  if (FUNC_7(VAR_8) && !FUNC_6(VAR_8))
   FUNC_20(VAR_8);

  if (FUNC_6(VAR_8)) {

   FUNC_22(VAR_8);
   goto has_buffer;
  }






  if (VAR_6) {
   struct buffer_head *VAR_13;
   int VAR_14, VAR_15;

   VAR_15 = VAR_12 & ~(VAR_11 - 1);


   VAR_13 = FUNC_19(VAR_9, FUNC_10(VAR_9, VAR_7));
   if (!VAR_13)
    goto make_io;






   if (!FUNC_6(VAR_13)) {
    FUNC_5(VAR_13);
    goto make_io;
   }
   for (VAR_14 = VAR_15; VAR_14 < VAR_15 + VAR_11; VAR_14++) {
    if (VAR_14 == VAR_12)
     continue;
    if (FUNC_13(VAR_14, VAR_13->b_data))
     break;
   }
   FUNC_5(VAR_13);
   if (VAR_14 == VAR_15 + VAR_11) {

    FUNC_17(VAR_8->b_data, 0, VAR_8->b_size);
    FUNC_20(VAR_8);
    FUNC_22(VAR_8);
    goto has_buffer;
   }
  }

make_io:




  if (FUNC_4(VAR_9)->s_inode_readahead_blks) {
   ext4_fsblk_t VAR_16, VAR_17, VAR_18;
   unsigned VAR_19;

   VAR_18 = FUNC_11(VAR_9, VAR_7);

   VAR_16 = VAR_10 & ~(FUNC_4(VAR_9)->s_inode_readahead_blks-1);
   if (VAR_18 > VAR_16)
    VAR_16 = VAR_18;
   VAR_17 = VAR_16 + FUNC_4(VAR_9)->s_inode_readahead_blks;
   VAR_19 = FUNC_2(VAR_9);
   if (FUNC_1(VAR_9,
           VAR_1))
    VAR_19 -= FUNC_12(VAR_9, VAR_7);
   VAR_18 += VAR_19 / VAR_11;
   if (VAR_17 > VAR_18)
    VAR_17 = VAR_18;
   while (VAR_16 <= VAR_17)
    FUNC_18(VAR_9, VAR_16++);
  }






  FUNC_15(VAR_8);
  VAR_8->b_end_io = VAR_3;
  FUNC_21(VAR_2, VAR_8);
  FUNC_23(VAR_8);
  if (!FUNC_6(VAR_8)) {
   FUNC_8(VAR_9, "unable to read inode block - inode=%lu,"
       " block=%llu", VAR_4->i_ino, VAR_10);
   FUNC_5(VAR_8);
   return -VAR_0;
  }
 }
has_buffer:
 VAR_5->bh = VAR_8;
 return 0;
}
