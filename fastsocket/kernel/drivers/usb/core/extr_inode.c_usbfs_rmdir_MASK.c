
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mutex; int i_flags; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct inode * VAR_5 = VAR_3->d_inode;

 FUNC_4(&VAR_5->i_mutex);
 FUNC_1(VAR_3);
 if (FUNC_6(VAR_3)) {
  FUNC_3(VAR_3->d_inode);
  FUNC_3(VAR_3->d_inode);
  FUNC_2(VAR_3);
  VAR_5->i_flags |= VAR_1;
  FUNC_3(VAR_2);
  VAR_4 = 0;
 }
 FUNC_5(&VAR_5->i_mutex);
 if (!VAR_4)
  FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 return VAR_4;
}
