
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union hfs_cat_rec {int dummy; } hfs_cat_rec ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {scalar_t__ i_size; int i_ctime; int i_mtime; int i_ino; int i_mode; struct super_block* i_sb; int i_nlink; } ;
struct hfs_find_data {int search_key; } ;
struct TYPE_2__ {int cat_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (struct hfs_find_data*,union hfs_cat_rec*,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (struct super_block*,int ,int ,struct qstr*) ;
 int FUNC_7 (union hfs_cat_rec*,int ,struct inode*) ;
 int FUNC_8 (struct super_block*,union hfs_cat_rec*,int ,int ,struct qstr*) ;
 int FUNC_9 (struct hfs_find_data*) ;
 int FUNC_10 (int ,struct hfs_find_data*) ;
 int FUNC_11 (struct inode*) ;

int FUNC_12(u32 VAR_8, struct inode *VAR_9, struct qstr *VAR_10, struct inode *VAR_11)
{
 struct hfs_find_data VAR_12;
 struct super_block *VAR_13;
 union hfs_cat_rec VAR_14;
 int VAR_15;
 int VAR_16;

 FUNC_2(VAR_1, "create_cat: %s,%u(%d)\n", VAR_10->name, VAR_8, VAR_11->i_nlink);
 if (VAR_9->i_size >= VAR_7)
  return -VAR_4;

 VAR_13 = VAR_9->i_sb;
 FUNC_10(FUNC_0(VAR_13)->cat_tree, &VAR_12);

 FUNC_6(VAR_13, VAR_12.search_key, VAR_8, ((void*)0));
 VAR_15 = FUNC_8(VAR_13, &VAR_14, FUNC_1(VAR_11->i_mode) ?
   VAR_6 : VAR_5,
   VAR_9->i_ino, VAR_10);
 VAR_16 = FUNC_3(&VAR_12);
 if (VAR_16 != -VAR_3) {
  if (!VAR_16)
   VAR_16 = -VAR_2;
  goto err2;
 }
 VAR_16 = FUNC_4(&VAR_12, &VAR_14, VAR_15);
 if (VAR_16)
  goto err2;

 FUNC_6(VAR_13, VAR_12.search_key, VAR_9->i_ino, VAR_10);
 VAR_15 = FUNC_7(&VAR_14, VAR_8, VAR_11);
 VAR_16 = FUNC_3(&VAR_12);
 if (VAR_16 != -VAR_3) {

  if (!VAR_16)
   VAR_16 = -VAR_2;
  goto err1;
 }
 VAR_16 = FUNC_4(&VAR_12, &VAR_14, VAR_15);
 if (VAR_16)
  goto err1;

 VAR_9->i_size++;
 VAR_9->i_mtime = VAR_9->i_ctime = VAR_0;
 FUNC_11(VAR_9);
 FUNC_9(&VAR_12);
 return 0;

err1:
 FUNC_6(VAR_13, VAR_12.search_key, VAR_8, ((void*)0));
 if (!FUNC_3(&VAR_12))
  FUNC_5(&VAR_12);
err2:
 FUNC_9(&VAR_12);
 return VAR_16;
}
