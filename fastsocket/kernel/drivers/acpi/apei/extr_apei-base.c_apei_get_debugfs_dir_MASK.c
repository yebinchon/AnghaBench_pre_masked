
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,int *) ;

struct dentry *FUNC_1(void)
{
 static struct dentry *VAR_0;

 if (!VAR_0)
  VAR_0 = FUNC_0("apei", ((void*)0));

 return VAR_0;
}
