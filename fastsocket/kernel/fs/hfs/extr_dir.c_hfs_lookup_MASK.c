
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; int i_ino; } ;
struct hfs_find_data {TYPE_1__* search_key; } ;
struct dentry {int d_name; int * d_op; } ;
typedef int rec ;
typedef int hfs_cat_rec ;
struct TYPE_4__ {int cat_tree; } ;
struct TYPE_3__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct hfs_find_data*,int *,int) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 struct inode* FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_3, struct dentry *VAR_4,
     struct nameidata *VAR_5)
{
 hfs_cat_rec VAR_6;
 struct hfs_find_data VAR_7;
 struct inode *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_4->d_op = &VAR_2;

 FUNC_6(FUNC_1(VAR_3->i_sb)->cat_tree, &VAR_7);
 FUNC_4(VAR_3->i_sb, VAR_7.search_key, VAR_3->i_ino, &VAR_4->d_name);
 VAR_9 = FUNC_3(&VAR_7, &VAR_6, sizeof(VAR_6));
 if (VAR_9) {
  FUNC_5(&VAR_7);
  if (VAR_9 == -VAR_1) {

   VAR_8 = ((void*)0);
   goto done;
  }
  return FUNC_0(VAR_9);
 }
 VAR_8 = FUNC_7(VAR_3->i_sb, &VAR_7.search_key->cat, &VAR_6);
 FUNC_5(&VAR_7);
 if (!VAR_8)
  return FUNC_0(-VAR_0);
done:
 FUNC_2(VAR_4, VAR_8);
 return ((void*)0);
}
