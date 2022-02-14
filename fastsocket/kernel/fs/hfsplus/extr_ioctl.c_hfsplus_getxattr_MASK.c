
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; int i_mode; } ;
struct TYPE_5__ {int fdCreator; int fdType; } ;
struct hfsplus_cat_file {TYPE_1__ user_info; } ;
struct hfs_find_data {int entryoffset; int bnode; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ssize_t ;
struct TYPE_6__ {struct hfsplus_cat_file file; } ;
typedef TYPE_2__ hfsplus_cat_entry ;
struct TYPE_7__ {int cat_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_4__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (int ,struct hfs_find_data*) ;
 int FUNC_6 (int ,int ,struct hfs_find_data*) ;
 int FUNC_7 (void*,int *,int) ;
 int FUNC_8 (char const*,char*) ;

ssize_t FUNC_9(struct dentry *VAR_3, const char *VAR_4,
    void *VAR_5, size_t VAR_6)
{
 struct inode *VAR_7 = VAR_3->d_inode;
 struct hfs_find_data VAR_8;
 hfsplus_cat_entry VAR_9;
 struct hfsplus_cat_file *VAR_10;
 ssize_t VAR_11 = 0;

 if (!FUNC_2(VAR_7->i_mode) || FUNC_0(VAR_7))
  return -VAR_1;

 if (VAR_6) {
  VAR_11 = FUNC_5(FUNC_1(VAR_7->i_sb).cat_tree, &VAR_8);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_6(VAR_7->i_sb, VAR_7->i_ino, &VAR_8);
  if (VAR_11)
   goto out;
  FUNC_3(VAR_8.bnode, &VAR_9, VAR_8.entryoffset,
    sizeof(struct hfsplus_cat_file));
 }
 VAR_10 = &VAR_9.file;

 if (!FUNC_8(VAR_4, "hfs.type")) {
  if (VAR_6 >= 4) {
   FUNC_7(VAR_5, &VAR_10->user_info.fdType, 4);
   VAR_11 = 4;
  } else
   VAR_11 = VAR_6 ? -VAR_2 : 4;
 } else if (!FUNC_8(VAR_4, "hfs.creator")) {
  if (VAR_6 >= 4) {
   FUNC_7(VAR_5, &VAR_10->user_info.fdCreator, 4);
   VAR_11 = 4;
  } else
   VAR_11 = VAR_6 ? -VAR_2 : 4;
 } else
  VAR_11 = -VAR_0;
out:
 if (VAR_6)
  FUNC_4(&VAR_8);
 return VAR_11;
}
