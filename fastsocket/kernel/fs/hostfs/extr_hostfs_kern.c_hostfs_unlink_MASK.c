
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct inode *VAR_3, struct dentry *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_4)) == ((void*)0))
  return -VAR_0;
 if (VAR_2)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5);
 FUNC_1(VAR_5);
 return VAR_6;
}
