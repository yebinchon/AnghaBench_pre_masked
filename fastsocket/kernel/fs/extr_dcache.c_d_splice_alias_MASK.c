
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int d_parent; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct dentry*,struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct dentry *FUNC_10(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct dentry *VAR_3 = ((void*)0);

 if (VAR_1 && FUNC_0(VAR_1->i_mode)) {
  FUNC_8(&VAR_0);
  VAR_3 = FUNC_2(VAR_1, VAR_2->d_parent);
  if (VAR_3) {
   FUNC_9(&VAR_0);
   FUNC_7(VAR_3, VAR_1);
   FUNC_5(VAR_2);
   FUNC_4(VAR_3, VAR_2);
   FUNC_6(VAR_1);
  } else {

   FUNC_1(VAR_2, VAR_1);
   FUNC_9(&VAR_0);
   FUNC_7(VAR_2, VAR_1);
   FUNC_5(VAR_2);
  }
 } else
  FUNC_3(VAR_2, VAR_1);
 return VAR_3;
}
