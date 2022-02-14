
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int d_name; int * d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int *,struct object_info*) ;
 struct inode* FUNC_2 (int ,struct object_info*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static struct dentry *
FUNC_6(struct inode *VAR_2, struct dentry *VAR_3, struct nameidata *VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 struct object_info VAR_6;
 int VAR_7;

 VAR_3->d_op = &VAR_1;
 FUNC_4();
 VAR_7 = FUNC_1(VAR_2, &VAR_3->d_name, &VAR_6);
 if (VAR_7 == 0) {
  VAR_7 = -VAR_0;




  VAR_5 = FUNC_2(VAR_2->i_sb, &VAR_6);
  if (VAR_5)
   VAR_7 = 0;
 }
 FUNC_5();
 FUNC_3(VAR_3, VAR_5);
 return FUNC_0(VAR_7);
}
