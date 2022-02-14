
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct hfs_find_data {int entryoffset; int bnode; TYPE_1__* search_key; } ;
struct TYPE_9__ {int fdCreator; int fdType; } ;
struct hfs_cat_file {TYPE_2__ UsrWds; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_10__ {struct hfs_cat_file file; } ;
typedef TYPE_3__ hfs_cat_rec ;
struct TYPE_12__ {int cat_key; } ;
struct TYPE_11__ {int cat_tree; } ;
struct TYPE_8__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_6__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int) ;
 int FUNC_5 (int ,TYPE_3__*,int ,int) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (struct hfs_find_data*) ;
 int FUNC_8 (int ,struct hfs_find_data*) ;
 int FUNC_9 (int *,void const*,int) ;
 int FUNC_10 (char const*,char*) ;

int FUNC_11(struct dentry *VAR_2, const char *VAR_3,
   const void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct inode *VAR_7 = VAR_2->d_inode;
 struct hfs_find_data VAR_8;
 hfs_cat_rec VAR_9;
 struct hfs_cat_file *VAR_10;
 int VAR_11;

 if (!FUNC_3(VAR_7->i_mode) || FUNC_1(VAR_7))
  return -VAR_0;

 VAR_11 = FUNC_8(FUNC_2(VAR_7->i_sb)->cat_tree, &VAR_8);
 if (VAR_11)
  return VAR_11;
 VAR_8.search_key->cat = FUNC_0(VAR_7)->cat_key;
 VAR_11 = FUNC_6(&VAR_8);
 if (VAR_11)
  goto out;
 FUNC_4(VAR_8.bnode, &VAR_9, VAR_8.entryoffset,
   sizeof(struct hfs_cat_file));
 VAR_10 = &VAR_9.file;

 if (!FUNC_10(VAR_3, "hfs.type")) {
  if (VAR_5 == 4)
   FUNC_9(&VAR_10->UsrWds.fdType, VAR_4, 4);
  else
   VAR_11 = -VAR_1;
 } else if (!FUNC_10(VAR_3, "hfs.creator")) {
  if (VAR_5 == 4)
   FUNC_9(&VAR_10->UsrWds.fdCreator, VAR_4, 4);
  else
   VAR_11 = -VAR_1;
 } else
  VAR_11 = -VAR_0;
 if (!VAR_11)
  FUNC_5(VAR_8.bnode, &VAR_9, VAR_8.entryoffset,
    sizeof(struct hfs_cat_file));
out:
 FUNC_7(&VAR_8);
 return VAR_11;
}
