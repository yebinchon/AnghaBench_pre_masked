
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct hfs_find_data {int entryoffset; int bnode; TYPE_1__* search_key; } ;
struct TYPE_8__ {int fdCreator; int fdType; } ;
struct hfs_cat_file {TYPE_2__ UsrWds; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ssize_t ;
struct TYPE_9__ {struct hfs_cat_file file; } ;
typedef TYPE_3__ hfs_cat_rec ;
struct TYPE_11__ {int cat_key; } ;
struct TYPE_10__ {int cat_tree; } ;
struct TYPE_7__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (int ,struct hfs_find_data*) ;
 int FUNC_8 (void*,int *,int) ;
 int FUNC_9 (char const*,char*) ;

ssize_t FUNC_10(struct dentry *VAR_3, const char *VAR_4,
    void *VAR_5, size_t VAR_6)
{
 struct inode *VAR_7 = VAR_3->d_inode;
 struct hfs_find_data VAR_8;
 hfs_cat_rec VAR_9;
 struct hfs_cat_file *VAR_10;
 ssize_t VAR_11 = 0;

 if (!FUNC_3(VAR_7->i_mode) || FUNC_1(VAR_7))
  return -VAR_1;

 if (VAR_6) {
  VAR_11 = FUNC_7(FUNC_2(VAR_7->i_sb)->cat_tree, &VAR_8);
  if (VAR_11)
   return VAR_11;
  VAR_8.search_key->cat = FUNC_0(VAR_7)->cat_key;
  VAR_11 = FUNC_5(&VAR_8);
  if (VAR_11)
   goto out;
  FUNC_4(VAR_8.bnode, &VAR_9, VAR_8.entryoffset,
    sizeof(struct hfs_cat_file));
 }
 VAR_10 = &VAR_9.file;

 if (!FUNC_9(VAR_4, "hfs.type")) {
  if (VAR_6 >= 4) {
   FUNC_8(VAR_5, &VAR_10->UsrWds.fdType, 4);
   VAR_11 = 4;
  } else
   VAR_11 = VAR_6 ? -VAR_2 : 4;
 } else if (!FUNC_9(VAR_4, "hfs.creator")) {
  if (VAR_6 >= 4) {
   FUNC_8(VAR_5, &VAR_10->UsrWds.fdCreator, 4);
   VAR_11 = 4;
  } else
   VAR_11 = VAR_6 ? -VAR_2 : 4;
 } else
  VAR_11 = -VAR_0;
out:
 if (VAR_6)
  FUNC_6(&VAR_8);
 return VAR_11;
}
