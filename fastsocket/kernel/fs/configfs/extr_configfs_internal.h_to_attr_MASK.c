
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {scalar_t__ s_element; } ;
struct configfs_attribute {int dummy; } ;



__attribute__((used)) static inline struct configfs_attribute * FUNC_0(struct dentry * VAR_0)
{
 struct configfs_dirent * VAR_1 = VAR_0->d_fsdata;
 return ((struct configfs_attribute *) VAR_1->s_element);
}
