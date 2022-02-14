
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int max_cluster; struct fatent_operations* fatent_ops; } ;
struct inode {struct super_block* i_sb; } ;
struct fatent_operations {int (* ent_bread ) (struct super_block*,struct fat_entry*,int,int ) ;int (* ent_get ) (struct fat_entry*) ;int (* ent_blocknr ) (struct super_block*,int,int*,int *) ;} ;
struct fat_entry {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct fat_entry*,int,int ) ;
 int FUNC_2 (struct super_block*,char*,int) ;
 int FUNC_3 (struct fat_entry*) ;
 int FUNC_4 (struct fat_entry*,int) ;
 int FUNC_5 (struct super_block*,int,int*,int *) ;
 int FUNC_6 (struct super_block*,struct fat_entry*,int,int ) ;
 int FUNC_7 (struct fat_entry*) ;

int FUNC_8(struct inode *VAR_2, struct fat_entry *VAR_3, int VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct msdos_sb_info *VAR_6 = FUNC_0(VAR_2->i_sb);
 struct fatent_operations *VAR_7 = VAR_6->fatent_ops;
 int VAR_8, VAR_9;
 sector_t VAR_10;

 if (VAR_4 < VAR_1 || VAR_6->max_cluster <= VAR_4) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_5, "invalid access to FAT (entry 0x%08x)", VAR_4);
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_4);
 VAR_7->ent_blocknr(VAR_5, VAR_4, &VAR_9, &VAR_10);

 if (!FUNC_1(VAR_5, VAR_3, VAR_9, VAR_10)) {
  FUNC_3(VAR_3);
  VAR_8 = VAR_7->ent_bread(VAR_5, VAR_3, VAR_9, VAR_10);
  if (VAR_8)
   return VAR_8;
 }
 return VAR_7->ent_get(VAR_3);
}
