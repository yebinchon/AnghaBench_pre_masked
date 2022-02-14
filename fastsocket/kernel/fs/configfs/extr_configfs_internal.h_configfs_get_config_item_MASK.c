
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_symlink {struct configfs_symlink* sl_target; } ;
struct configfs_dirent {int s_type; struct configfs_symlink* s_element; } ;
struct config_item {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (struct configfs_symlink*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct config_item *FUNC_4(struct dentry *VAR_2)
{
 struct config_item * VAR_3 = ((void*)0);

 FUNC_2(&VAR_1);
 if (!FUNC_1(VAR_2)) {
  struct configfs_dirent * VAR_4 = VAR_2->d_fsdata;
  if (VAR_4->s_type & VAR_0) {
   struct configfs_symlink * VAR_5 = VAR_4->s_element;
   VAR_3 = FUNC_0(VAR_5->sl_target);
  } else
   VAR_3 = FUNC_0(VAR_4->s_element);
 }
 FUNC_3(&VAR_1);

 return VAR_3;
}
