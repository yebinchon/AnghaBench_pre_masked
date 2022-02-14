
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct super_block*,struct dentry*,char const*,int *,int) ;

struct dentry *FUNC_3(struct super_block *VAR_2, struct dentry *VAR_3,
      const char *VAR_4)
{
 struct dentry *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_1 | VAR_0);
 if (FUNC_0(VAR_5))
  return VAR_5;
 FUNC_1(VAR_5);
 return VAR_5;
}
