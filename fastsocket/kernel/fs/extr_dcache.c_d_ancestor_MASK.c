
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;


 int FUNC_0 (struct dentry*) ;

struct dentry *FUNC_1(struct dentry *VAR_0, struct dentry *VAR_1)
{
 struct dentry *VAR_2;

 for (VAR_2 = VAR_1; !FUNC_0(VAR_2); VAR_2 = VAR_2->d_parent) {
  if (VAR_2->d_parent == VAR_0)
   return VAR_2;
 }
 return ((void*)0);
}
