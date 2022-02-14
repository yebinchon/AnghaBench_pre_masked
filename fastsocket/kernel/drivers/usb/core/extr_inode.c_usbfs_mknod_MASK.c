
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {scalar_t__ d_inode; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3 (struct inode *VAR_2, struct dentry *VAR_3, int VAR_4,
   dev_t VAR_5)
{
 struct inode *VAR_6 = FUNC_2(VAR_2->i_sb, VAR_4, VAR_5);
 int VAR_7 = -VAR_1;

 if (VAR_3->d_inode)
  return -VAR_0;

 if (VAR_6) {
  FUNC_0(VAR_3, VAR_6);
  FUNC_1(VAR_3);
  VAR_7 = 0;
 }
 return VAR_7;
}
