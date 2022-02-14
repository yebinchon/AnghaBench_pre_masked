
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {int i_ctime; int i_mtime; int i_size; int i_ino; int i_mode; struct super_block* i_sb; int i_nlink; } ;
struct hfs_find_data {int search_key; } ;
typedef int hfsplus_cat_entry ;
struct TYPE_2__ {int cat_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (struct hfs_find_data*,int *,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (int ,struct hfs_find_data*) ;
 int FUNC_8 (struct super_block*,int ,int ,struct qstr*) ;
 int FUNC_9 (int *,int ,struct inode*) ;
 int FUNC_10 (struct super_block*,int *,int ,int ,struct qstr*) ;
 int FUNC_11 (struct inode*) ;

int FUNC_12(u32 VAR_6, struct inode *VAR_7, struct qstr *VAR_8, struct inode *VAR_9)
{
 struct hfs_find_data VAR_10;
 struct super_block *VAR_11;
 hfsplus_cat_entry VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_2(VAR_1, "create_cat: %s,%u(%d)\n", VAR_8->name, VAR_6, VAR_9->i_nlink);
 VAR_11 = VAR_7->i_sb;
 FUNC_7(FUNC_0(VAR_11).cat_tree, &VAR_10);

 FUNC_8(VAR_11, VAR_10.search_key, VAR_6, ((void*)0));
 VAR_13 = FUNC_10(VAR_11, &VAR_12, FUNC_1(VAR_9->i_mode) ?
   VAR_5 : VAR_4,
   VAR_7->i_ino, VAR_8);
 VAR_14 = FUNC_3(&VAR_10);
 if (VAR_14 != -VAR_3) {
  if (!VAR_14)
   VAR_14 = -VAR_2;
  goto err2;
 }
 VAR_14 = FUNC_4(&VAR_10, &VAR_12, VAR_13);
 if (VAR_14)
  goto err2;

 FUNC_8(VAR_11, VAR_10.search_key, VAR_7->i_ino, VAR_8);
 VAR_13 = FUNC_9(&VAR_12, VAR_6, VAR_9);
 VAR_14 = FUNC_3(&VAR_10);
 if (VAR_14 != -VAR_3) {

  if (!VAR_14)
   VAR_14 = -VAR_2;
  goto err1;
 }
 VAR_14 = FUNC_4(&VAR_10, &VAR_12, VAR_13);
 if (VAR_14)
  goto err1;

 VAR_7->i_size++;
 VAR_7->i_mtime = VAR_7->i_ctime = VAR_0;
 FUNC_11(VAR_7);
 FUNC_6(&VAR_10);
 return 0;

err1:
 FUNC_8(VAR_11, VAR_10.search_key, VAR_6, ((void*)0));
 if (!FUNC_3(&VAR_10))
  FUNC_5(&VAR_10);
err2:
 FUNC_6(&VAR_10);
 return VAR_14;
}
