
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; int i_mode; } ;
struct TYPE_6__ {int fdCreator; int fdType; } ;
struct hfsplus_cat_file {TYPE_1__ user_info; } ;
struct hfs_find_data {int entryoffset; int bnode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_7__ {struct hfsplus_cat_file file; } ;
typedef TYPE_2__ hfsplus_cat_entry ;
struct TYPE_8__ {int cat_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_5__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 int FUNC_7 (int ,int ,struct hfs_find_data*) ;
 int FUNC_8 (int *,void const*,int) ;
 int FUNC_9 (char const*,char*) ;

int FUNC_10(struct dentry *VAR_2, const char *VAR_3,
       const void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct inode *VAR_7 = VAR_2->d_inode;
 struct hfs_find_data VAR_8;
 hfsplus_cat_entry VAR_9;
 struct hfsplus_cat_file *VAR_10;
 int VAR_11;

 if (!FUNC_2(VAR_7->i_mode) || FUNC_0(VAR_7))
  return -VAR_0;

 VAR_11 = FUNC_6(FUNC_1(VAR_7->i_sb).cat_tree, &VAR_8);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_7(VAR_7->i_sb, VAR_7->i_ino, &VAR_8);
 if (VAR_11)
  goto out;
 FUNC_3(VAR_8.bnode, &VAR_9, VAR_8.entryoffset,
   sizeof(struct hfsplus_cat_file));
 VAR_10 = &VAR_9.file;

 if (!FUNC_9(VAR_3, "hfs.type")) {
  if (VAR_5 == 4)
   FUNC_8(&VAR_10->user_info.fdType, VAR_4, 4);
  else
   VAR_11 = -VAR_1;
 } else if (!FUNC_9(VAR_3, "hfs.creator")) {
  if (VAR_5 == 4)
   FUNC_8(&VAR_10->user_info.fdCreator, VAR_4, 4);
  else
   VAR_11 = -VAR_1;
 } else
  VAR_11 = -VAR_0;
 if (!VAR_11)
  FUNC_4(VAR_8.bnode, &VAR_9, VAR_8.entryoffset,
    sizeof(struct hfsplus_cat_file));
out:
 FUNC_5(&VAR_8);
 return VAR_11;
}
