
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_alias; } ;


 int FUNC_0 (int) ;
 struct dentry* FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct dentry *FUNC_8(struct dentry *VAR_1, struct inode *VAR_2)
{
 struct dentry *VAR_3;

 FUNC_0(!FUNC_4(&VAR_1->d_alias));

 FUNC_6(&VAR_0);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_7(&VAR_0);

 if (!VAR_3) {
  FUNC_5(VAR_1, VAR_2);
  return ((void*)0);
 }

 FUNC_0(!FUNC_2(VAR_3));
 FUNC_3(VAR_2);
 return VAR_3;
}
