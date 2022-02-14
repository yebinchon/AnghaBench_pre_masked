
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct dentry*,int ) ;
 char* FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(struct dentry *VAR_1, struct inode *VAR_2, struct dentry *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 if ((VAR_4 = FUNC_1(VAR_2, VAR_3)) == ((void*)0))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_1, 0);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }
 VAR_6 = FUNC_3(VAR_5, VAR_4);
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
