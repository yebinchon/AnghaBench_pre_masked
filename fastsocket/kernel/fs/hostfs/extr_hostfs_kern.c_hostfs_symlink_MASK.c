
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 if ((VAR_4 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_4, VAR_3);
 FUNC_1(VAR_4);
 return VAR_5;
}
