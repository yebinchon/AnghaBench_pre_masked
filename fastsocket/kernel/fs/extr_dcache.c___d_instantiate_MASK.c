
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_dentry; } ;
struct dentry {struct inode* d_inode; int d_alias; int d_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1, struct inode *VAR_2)
{
 if (VAR_2) {
  if (FUNC_3(FUNC_0(VAR_2)))
   VAR_1->d_flags |= VAR_0;
  FUNC_2(&VAR_1->d_alias, &VAR_2->i_dentry);
 }
 VAR_1->d_inode = VAR_2;
 FUNC_1(VAR_1, VAR_2);
}
