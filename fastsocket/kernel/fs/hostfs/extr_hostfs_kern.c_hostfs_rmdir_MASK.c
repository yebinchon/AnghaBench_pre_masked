
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) == ((void*)0))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 return VAR_4;
}
