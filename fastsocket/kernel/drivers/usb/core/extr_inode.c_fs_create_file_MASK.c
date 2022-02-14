
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct file_operations {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int mode_t ;
typedef int gid_t ;
struct TYPE_2__ {int i_gid; int i_uid; struct file_operations const* i_fop; void* i_private; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,int ,struct dentry*,struct dentry**) ;

__attribute__((used)) static struct dentry *FUNC_2 (const char *VAR_0, mode_t VAR_1,
          struct dentry *VAR_2, void *VAR_3,
          const struct file_operations *VAR_4,
          uid_t VAR_5, gid_t VAR_6)
{
 struct dentry *VAR_7;
 int VAR_8;

 FUNC_0("creating file '%s'",VAR_0);

 VAR_8 = FUNC_1 (VAR_0, VAR_1, VAR_2, &VAR_7);
 if (VAR_8) {
  VAR_7 = ((void*)0);
 } else {
  if (VAR_7->d_inode) {
   if (VAR_3)
    VAR_7->d_inode->i_private = VAR_3;
   if (VAR_4)
    VAR_7->d_inode->i_fop = VAR_4;
   VAR_7->d_inode->i_uid = VAR_5;
   VAR_7->d_inode->i_gid = VAR_6;
  }
 }

 return VAR_7;
}
