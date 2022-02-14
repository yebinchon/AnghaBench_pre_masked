
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_type; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {int i_mutex; int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct configfs_dirent*) ;
 int FUNC_1 (struct configfs_dirent*) ;
 int FUNC_2 (struct config_item*,struct config_item*,struct dentry*) ;
 int FUNC_3 (struct config_item*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct config_item*) ;

__attribute__((used)) static int FUNC_9(struct config_item *VAR_3,
     struct config_item *VAR_4,
     struct dentry *VAR_5)
{
 int VAR_6;
 struct configfs_dirent *VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  VAR_7 = VAR_5->d_fsdata;
  VAR_7->s_type |= VAR_0;
  FUNC_5(&VAR_5->d_inode->i_mutex, VAR_1);
  FUNC_1(VAR_7);
  VAR_6 = FUNC_7(FUNC_8(VAR_4));
  if (VAR_6) {
   FUNC_3(VAR_4);
   VAR_5->d_inode->i_flags |= VAR_2;
  }
  FUNC_0(VAR_7);
  FUNC_6(&VAR_5->d_inode->i_mutex);
  if (VAR_6)
   FUNC_4(VAR_5);
 }

 return VAR_6;
}
