
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct fstrim_range {int start; int len; int minlen; } ;
struct ext3_super_block {int s_blocks_count; int s_first_data_block; } ;
struct ext3_group_desc {int bg_free_blocks_count; } ;
typedef int ext3_grpblk_t ;
typedef int ext3_fsblk_t ;
struct TYPE_2__ {struct ext3_super_block* s_es; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 struct ext3_group_desc* FUNC_2 (struct super_block*,unsigned long,int *) ;
 int FUNC_3 (struct super_block*,int,unsigned long*,int*) ;
 int FUNC_4 (struct super_block*,unsigned long,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct super_block *VAR_1, struct fstrim_range *VAR_2)
{
 ext3_grpblk_t VAR_3, VAR_4;
 unsigned long VAR_5, VAR_6, VAR_7;
 struct ext3_group_desc *VAR_8;
 struct ext3_super_block *VAR_9 = FUNC_1(VAR_1)->s_es;
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 ext3_fsblk_t VAR_14 =
   FUNC_6(FUNC_1(VAR_1)->s_es->s_first_data_block);
 ext3_fsblk_t VAR_15 = FUNC_6(VAR_9->s_blocks_count);
 int VAR_16 = 0;

 VAR_10 = VAR_2->start >> VAR_1->s_blocksize_bits;
 VAR_12 = VAR_10 + (VAR_2->len >> VAR_1->s_blocksize_bits) - 1;
 VAR_11 = VAR_2->minlen >> VAR_1->s_blocksize_bits;

 if (FUNC_8(VAR_11 > FUNC_0(VAR_1)) ||
     FUNC_8(VAR_10 >= VAR_15))
  return -VAR_0;
 if (FUNC_8(VAR_12 >= VAR_15))
  VAR_12 = VAR_15 - 1;
 if (VAR_12 <= VAR_14)
  return 0;
 if (VAR_10 < VAR_14)
  VAR_10 = VAR_14;

 FUNC_7();


 FUNC_3(VAR_1, (ext3_fsblk_t) VAR_10,
         &VAR_6, &VAR_4);
 FUNC_3(VAR_1, (ext3_fsblk_t) VAR_12,
         &VAR_7, &VAR_3);


 VAR_12 = FUNC_0(VAR_1);

 for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5++) {
  VAR_8 = FUNC_2(VAR_1, VAR_5, ((void*)0));
  if (!VAR_8)
   break;

  if (FUNC_5(VAR_8->bg_free_blocks_count) < VAR_11)
   continue;







  if (VAR_5 == VAR_7)
   VAR_12 = VAR_3;

  VAR_16 = FUNC_4(VAR_1, VAR_5, VAR_4,
      VAR_12, VAR_11);
  if (VAR_16 < 0)
   break;
  VAR_13 += VAR_16;





  VAR_4 = 0;
 }

 if (VAR_16 > 0)
  VAR_16 = 0;
 VAR_2->len = VAR_13 * VAR_1->s_blocksize;

 return VAR_16;
}
