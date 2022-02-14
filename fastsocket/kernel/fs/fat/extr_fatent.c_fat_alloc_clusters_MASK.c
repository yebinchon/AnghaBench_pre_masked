
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dirt; } ;
struct msdos_sb_info {int free_clusters; int free_clus_valid; int prev_free; int max_cluster; struct fatent_operations* fatent_ops; } ;
struct inode {struct super_block* i_sb; } ;
struct fatent_operations {scalar_t__ (* ent_get ) (struct fat_entry*) ;int (* ent_put ) (struct fat_entry*,int) ;} ;
struct fat_entry {int entry; scalar_t__ nr_bhs; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head**,int*,struct fat_entry*) ;
 scalar_t__ FUNC_4 (struct msdos_sb_info*,struct fat_entry*) ;
 int FUNC_5 (struct super_block*,struct fat_entry*) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct super_block*,struct buffer_head**,int) ;
 int FUNC_8 (struct buffer_head**,int) ;
 int FUNC_9 (struct fat_entry*) ;
 int FUNC_10 (struct fat_entry*) ;
 int FUNC_11 (struct fat_entry*,int) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct msdos_sb_info*) ;
 scalar_t__ FUNC_14 (struct fat_entry*) ;
 int FUNC_15 (struct fat_entry*,int) ;
 int FUNC_16 (struct fat_entry*,int) ;
 int FUNC_17 (struct msdos_sb_info*) ;

int FUNC_18(struct inode *VAR_5, int *VAR_6, int VAR_7)
{
 struct super_block *VAR_8 = VAR_5->i_sb;
 struct msdos_sb_info *VAR_9 = FUNC_1(VAR_8);
 struct fatent_operations *VAR_10 = VAR_9->fatent_ops;
 struct fat_entry VAR_11, VAR_12;
 struct buffer_head *VAR_13[VAR_4];
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_0(VAR_7 > (VAR_4 / 2));

 FUNC_13(VAR_9);
 if (VAR_9->free_clusters != -1 && VAR_9->free_clus_valid &&
     VAR_9->free_clusters < VAR_7) {
  FUNC_17(VAR_9);
  return -VAR_0;
 }

 VAR_16 = VAR_17 = VAR_18 = 0;
 VAR_15 = VAR_3;
 FUNC_10(&VAR_12);
 FUNC_10(&VAR_11);
 FUNC_11(&VAR_11, VAR_9->prev_free + 1);
 while (VAR_15 < VAR_9->max_cluster) {
  if (VAR_11.entry >= VAR_9->max_cluster)
   VAR_11.entry = VAR_3;
  FUNC_11(&VAR_11, VAR_11.entry);
  VAR_16 = FUNC_5(VAR_8, &VAR_11);
  if (VAR_16)
   goto out;


  do {
   if (VAR_10->ent_get(&VAR_11) == VAR_2) {
    int VAR_19 = VAR_11.entry;


    VAR_10->ent_put(&VAR_11, VAR_1);
    if (VAR_12.nr_bhs)
     VAR_10->ent_put(&VAR_12, VAR_19);

    FUNC_3(VAR_13, &VAR_17, &VAR_11);

    VAR_9->prev_free = VAR_19;
    if (VAR_9->free_clusters != -1)
     VAR_9->free_clusters--;
    VAR_8->s_dirt = 1;

    VAR_6[VAR_18] = VAR_19;
    VAR_18++;
    if (VAR_18 == VAR_7)
     goto out;





    VAR_12 = VAR_11;
   }
   VAR_15++;
   if (VAR_15 == VAR_9->max_cluster)
    break;
  } while (FUNC_4(VAR_9, &VAR_11));
 }


 VAR_9->free_clusters = 0;
 VAR_9->free_clus_valid = 1;
 VAR_8->s_dirt = 1;
 VAR_16 = -VAR_0;

out:
 FUNC_17(VAR_9);
 FUNC_9(&VAR_11);
 if (!VAR_16) {
  if (FUNC_12(VAR_5))
   VAR_16 = FUNC_8(VAR_13, VAR_17);
  if (!VAR_16)
   VAR_16 = FUNC_7(VAR_8, VAR_13, VAR_17);
 }
 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++)
  FUNC_2(VAR_13[VAR_14]);

 if (VAR_16 && VAR_18)
  FUNC_6(VAR_5, VAR_6[0]);

 return VAR_16;
}
