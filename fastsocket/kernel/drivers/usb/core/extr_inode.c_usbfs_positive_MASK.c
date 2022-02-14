
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {scalar_t__ d_inode; } ;


 int FUNC_0 (struct dentry*) ;

__attribute__((used)) static inline int FUNC_1 (struct dentry *VAR_0)
{
 return VAR_0->d_inode && !FUNC_0(VAR_0);
}
