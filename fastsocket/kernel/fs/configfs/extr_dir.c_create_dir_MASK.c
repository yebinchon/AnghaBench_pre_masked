
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {int name; } ;
struct dentry {struct configfs_dirent* d_fsdata; int * d_op; int d_inode; TYPE_1__ d_name; } ;
struct configfs_dirent {int s_sibling; } ;
struct config_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dentry*,int,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct configfs_dirent*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct configfs_dirent*,struct dentry*,struct config_item*,int,int) ;
 int FUNC_3 (struct configfs_dirent*) ;
 int FUNC_4 (struct configfs_dirent*,struct configfs_dirent*) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct config_item * VAR_9, struct dentry * VAR_10,
        struct dentry * VAR_11)
{
 int VAR_12;
 umode_t VAR_13 = VAR_2| VAR_4 | VAR_3 | VAR_5;

 VAR_12 = FUNC_1(VAR_10->d_fsdata, VAR_11->d_name.name);
 if (!VAR_12)
  VAR_12 = FUNC_2(VAR_10->d_fsdata, VAR_11, VAR_9, VAR_13,
          VAR_0 | VAR_1);
 if (!VAR_12) {
  FUNC_4(VAR_10->d_fsdata, VAR_11->d_fsdata);
  VAR_12 = FUNC_0(VAR_11, VAR_13, VAR_8);
  if (!VAR_12) {
   FUNC_5(VAR_10->d_inode);
   (VAR_11)->d_op = &VAR_6;
  } else {
   struct configfs_dirent *VAR_14 = VAR_11->d_fsdata;
   if (VAR_14) {
    FUNC_7(&VAR_7);
    FUNC_6(&VAR_14->s_sibling);
    FUNC_8(&VAR_7);
    FUNC_3(VAR_14);
   }
  }
 }
 return VAR_12;
}
