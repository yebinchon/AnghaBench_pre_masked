
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {int i_ino; void* i_ctime; void* i_mtime; int i_size; struct super_block* i_sb; } ;
struct hfs_find_data {int entrylength; int bnode; int search_key; int entryoffset; } ;
typedef int hfsplus_cat_entry ;
struct TYPE_2__ {int cat_tree; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (struct hfs_find_data*,int *,int) ;
 int FUNC_7 (struct hfs_find_data*) ;
 int FUNC_8 (struct hfs_find_data*) ;
 int FUNC_9 (int ,struct hfs_find_data*) ;
 int FUNC_10 (struct super_block*,int ,int ,struct qstr*) ;
 int FUNC_11 (struct super_block*,int *,int,int ,struct qstr*) ;
 int FUNC_12 (struct inode*) ;

int FUNC_13(u32 VAR_4,
         struct inode *VAR_5, struct qstr *VAR_6,
         struct inode *VAR_7, struct qstr *VAR_8)
{
 struct super_block *VAR_9;
 struct hfs_find_data VAR_10, VAR_11;
 hfsplus_cat_entry VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_1(VAR_1, "rename_cat: %u - %lu,%s - %lu,%s\n", VAR_4, VAR_5->i_ino, VAR_6->name,
  VAR_7->i_ino, VAR_8->name);
 VAR_9 = VAR_5->i_sb;
 FUNC_9(FUNC_0(VAR_9).cat_tree, &VAR_10);
 VAR_11 = VAR_10;


 FUNC_10(VAR_9, VAR_10.search_key, VAR_5->i_ino, VAR_6);
 VAR_15 = FUNC_5(&VAR_10);
 if (VAR_15)
  goto out;

 FUNC_3(VAR_10.bnode, &VAR_12, VAR_10.entryoffset,
    VAR_10.entrylength);


 FUNC_10(VAR_9, VAR_11.search_key, VAR_7->i_ino, VAR_8);
 VAR_15 = FUNC_5(&VAR_11);
 if (VAR_15 != -VAR_3) {
  if (!VAR_15)
   VAR_15 = -VAR_2;
  goto out;
 }

 VAR_15 = FUNC_6(&VAR_11, &VAR_12, VAR_10.entrylength);
 if (VAR_15)
  goto out;
 VAR_7->i_size++;
 VAR_7->i_mtime = VAR_7->i_ctime = VAR_0;
 FUNC_12(VAR_7);


 FUNC_10(VAR_9, VAR_10.search_key, VAR_5->i_ino, VAR_6);
 VAR_15 = FUNC_5(&VAR_10);
 if (VAR_15)
  goto out;
 VAR_15 = FUNC_7(&VAR_10);
 if (VAR_15)
  goto out;
 VAR_5->i_size--;
 VAR_5->i_mtime = VAR_5->i_ctime = VAR_0;
 FUNC_12(VAR_5);


 FUNC_10(VAR_9, VAR_10.search_key, VAR_4, ((void*)0));
 VAR_15 = FUNC_5(&VAR_10);
 if (VAR_15)
  goto out;
 VAR_14 = FUNC_4(VAR_10.bnode, VAR_10.entryoffset);
 VAR_15 = FUNC_7(&VAR_10);
 if (VAR_15)
  goto out;


 FUNC_10(VAR_9, VAR_11.search_key, VAR_4, ((void*)0));
 VAR_13 = FUNC_11(VAR_9, &VAR_12, VAR_14, VAR_7->i_ino, VAR_8);
 VAR_15 = FUNC_5(&VAR_11);
 if (VAR_15 != -VAR_3) {
  if (!VAR_15)
   VAR_15 = -VAR_2;
  goto out;
 }
 VAR_15 = FUNC_6(&VAR_11, &VAR_12, VAR_13);
out:
 FUNC_2(VAR_11.bnode);
 FUNC_8(&VAR_10);
 return VAR_15;
}
