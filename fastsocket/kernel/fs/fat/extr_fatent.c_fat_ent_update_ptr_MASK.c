
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct msdos_sb_info {int fat_bits; struct fatent_operations* fatent_ops; } ;
struct fatent_operations {int (* ent_set_ptr ) (struct fat_entry*,int) ;} ;
struct fat_entry {int nr_bhs; struct buffer_head** bhs; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef scalar_t__ sector_t ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct fat_entry*,int) ;

__attribute__((used)) static inline int FUNC_3(struct super_block *VAR_0,
         struct fat_entry *VAR_1,
         int VAR_2, sector_t VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_0);
 struct fatent_operations *VAR_5 = VAR_4->fatent_ops;
 struct buffer_head **VAR_6 = VAR_1->bhs;


 if (!VAR_1->nr_bhs || VAR_6[0]->b_blocknr != VAR_3)
  return 0;
 if (VAR_4->fat_bits == 12) {
  if ((VAR_2 + 1) < VAR_0->s_blocksize) {

   if (VAR_1->nr_bhs == 2) {
    FUNC_1(VAR_6[1]);
    VAR_1->nr_bhs = 1;
   }
  } else {

   if (VAR_1->nr_bhs != 2)
    return 0;
   if (VAR_6[1]->b_blocknr != (VAR_3 + 1))
    return 0;
  }
 }
 VAR_5->ent_set_ptr(VAR_1, VAR_2);
 return 1;
}
