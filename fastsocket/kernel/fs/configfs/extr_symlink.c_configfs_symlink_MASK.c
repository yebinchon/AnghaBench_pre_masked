
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {TYPE_3__* d_parent; } ;
struct configfs_dirent {int dummy; } ;
struct config_item_type {TYPE_1__* ct_item_ops; } ;
struct config_item {struct config_item_type* ci_type; } ;
struct TYPE_6__ {struct configfs_dirent* d_fsdata; } ;
struct TYPE_5__ {TYPE_3__* s_root; } ;
struct TYPE_4__ {int (* allow_link ) (struct config_item*,struct config_item*) ;int (* drop_link ) (struct config_item*,struct config_item*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (struct configfs_dirent*) ;
 struct config_item* FUNC_2 (TYPE_3__*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct config_item*,struct config_item*,struct dentry*) ;
 int FUNC_4 (char const*,struct path*,struct config_item**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (struct config_item*,struct config_item*) ;
 int FUNC_9 (struct config_item*,struct config_item*) ;

int FUNC_10(struct inode *VAR_4, struct dentry *VAR_5, const char *VAR_6)
{
 int VAR_7;
 struct path VAR_8;
 struct configfs_dirent *VAR_9;
 struct config_item *VAR_10;
 struct config_item *VAR_11 = ((void*)0);
 struct config_item_type *VAR_12;

 VAR_7 = -VAR_1;
 if (VAR_5->d_parent == VAR_2->s_root)
  goto out;

 VAR_9 = VAR_5->d_parent->d_fsdata;




 VAR_7 = -VAR_0;
 if (!FUNC_1(VAR_9))
  goto out;

 VAR_10 = FUNC_2(VAR_5->d_parent);
 VAR_12 = VAR_10->ci_type;

 VAR_7 = -VAR_1;
 if (!VAR_12 || !VAR_12->ct_item_ops ||
     !VAR_12->ct_item_ops->allow_link)
  goto out_put;

 VAR_7 = FUNC_4(VAR_6, &VAR_8, &VAR_11);
 if (VAR_7)
  goto out_put;

 VAR_7 = VAR_12->ct_item_ops->allow_link(VAR_10, VAR_11);
 if (!VAR_7) {
  FUNC_5(&VAR_3);
  VAR_7 = FUNC_3(VAR_10, VAR_11, VAR_5);
  FUNC_6(&VAR_3);
  if (VAR_7 && VAR_12->ct_item_ops->drop_link)
   VAR_12->ct_item_ops->drop_link(VAR_10,
           VAR_11);
 }

 FUNC_0(VAR_11);
 FUNC_7(&VAR_8);

out_put:
 FUNC_0(VAR_10);

out:
 return VAR_7;
}
