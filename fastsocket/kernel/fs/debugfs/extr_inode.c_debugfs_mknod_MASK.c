
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {scalar_t__ d_inode; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct inode* FUNC_1 (int ,int,int ,void*,struct file_operations const*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct dentry *VAR_3,
    int VAR_4, dev_t VAR_5, void *VAR_6,
    const struct file_operations *VAR_7)
{
 struct inode *VAR_8;
 int VAR_9 = -VAR_1;

 if (VAR_3->d_inode)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2->i_sb, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_3, VAR_8);
  FUNC_2(VAR_3);
  VAR_9 = 0;
 }
 return VAR_9;
}
