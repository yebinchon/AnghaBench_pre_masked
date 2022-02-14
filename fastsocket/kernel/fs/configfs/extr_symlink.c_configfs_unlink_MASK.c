
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {scalar_t__ d_parent; struct configfs_dirent* d_fsdata; } ;
struct configfs_symlink {struct config_item* sl_target; int sl_list; } ;
struct configfs_dirent {int s_type; int s_sibling; struct configfs_symlink* s_element; } ;
struct config_item_type {TYPE_1__* ct_item_ops; } ;
struct config_item {struct config_item_type* ci_type; } ;
struct TYPE_4__ {scalar_t__ s_root; } ;
struct TYPE_3__ {int (* drop_link ) (struct config_item*,struct config_item*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct config_item*) ;
 int VAR_2 ;
 int FUNC_2 (struct configfs_dirent*,scalar_t__) ;
 struct config_item* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct configfs_dirent*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct configfs_symlink*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct config_item*,struct config_item*) ;

int FUNC_11(struct inode *VAR_4, struct dentry *VAR_5)
{
 struct configfs_dirent *VAR_6 = VAR_5->d_fsdata;
 struct configfs_symlink *VAR_7;
 struct config_item *VAR_8;
 struct config_item_type *VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 if (!(VAR_6->s_type & VAR_0))
  goto out;

 FUNC_0(VAR_5->d_parent == VAR_3->s_root);

 VAR_7 = VAR_6->s_element;

 VAR_8 = FUNC_3(VAR_5->d_parent);
 VAR_9 = VAR_8->ci_type;

 FUNC_8(&VAR_2);
 FUNC_7(&VAR_6->s_sibling);
 FUNC_9(&VAR_2);
 FUNC_2(VAR_6, VAR_5->d_parent);
 FUNC_5(VAR_5);
 FUNC_4(VAR_6);






 if (VAR_9 && VAR_9->ct_item_ops &&
     VAR_9->ct_item_ops->drop_link)
  VAR_9->ct_item_ops->drop_link(VAR_8,
            VAR_7->sl_target);

 FUNC_8(&VAR_2);
 FUNC_7(&VAR_7->sl_list);
 FUNC_9(&VAR_2);


 FUNC_1(VAR_7->sl_target);
 FUNC_6(VAR_7);

 FUNC_1(VAR_8);

 VAR_10 = 0;

out:
 return VAR_10;
}
