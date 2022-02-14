
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2,
    struct inode *VAR_3, struct dentry *VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7;

 if ((VAR_5 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return -VAR_0;
 if ((VAR_6 = FUNC_0(VAR_3, VAR_4)) == ((void*)0)) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_5, VAR_6);
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return VAR_7;
}
