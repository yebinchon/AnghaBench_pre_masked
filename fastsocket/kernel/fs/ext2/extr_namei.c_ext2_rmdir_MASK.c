
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3 (struct inode * VAR_1, struct dentry *VAR_2)
{
 struct inode * VAR_3 = VAR_2->d_inode;
 int VAR_4 = -VAR_0;

 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  if (!VAR_4) {
   VAR_3->i_size = 0;
   FUNC_2(VAR_3);
   FUNC_2(VAR_1);
  }
 }
 return VAR_4;
}
