
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct configfs_symlink {int sl_list; int sl_target; } ;
struct configfs_dirent {int s_type; int s_links; } ;
struct config_item {TYPE_1__* ci_dentry; } ;
struct TYPE_2__ {struct configfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct configfs_symlink*,TYPE_1__*,struct dentry*) ;
 int FUNC_3 (struct configfs_dirent*) ;
 int VAR_4 ;
 int FUNC_4 (struct configfs_symlink*) ;
 struct configfs_symlink* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct config_item *VAR_5,
         struct config_item *VAR_6,
         struct dentry *VAR_7)
{
 struct configfs_dirent *VAR_8 = VAR_6->ci_dentry->d_fsdata;
 struct configfs_symlink *VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 if (!FUNC_3(VAR_8))
  goto out;
 VAR_10 = -VAR_2;
 VAR_9 = FUNC_5(sizeof(struct configfs_symlink), VAR_3);
 if (VAR_9) {
  VAR_9->sl_target = FUNC_0(VAR_6);
  FUNC_8(&VAR_4);
  if (VAR_8->s_type & VAR_0) {
   FUNC_9(&VAR_4);
   FUNC_1(VAR_6);
   FUNC_4(VAR_9);
   return -VAR_1;
  }
  FUNC_6(&VAR_9->sl_list, &VAR_8->s_links);
  FUNC_9(&VAR_4);
  VAR_10 = FUNC_2(VAR_9, VAR_5->ci_dentry,
        VAR_7);
  if (VAR_10) {
   FUNC_8(&VAR_4);
   FUNC_7(&VAR_9->sl_list);
   FUNC_9(&VAR_4);
   FUNC_1(VAR_6);
   FUNC_4(VAR_9);
  }
 }

out:
 return VAR_10;
}
