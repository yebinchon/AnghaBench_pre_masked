
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct dentry*,int,int ,void*,struct file_operations const*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct dentry *VAR_3, int VAR_4,
     void *VAR_5, const struct file_operations *VAR_6)
{
 int VAR_7;

 VAR_4 = (VAR_4 & VAR_0) | VAR_1;
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, 0, VAR_5, VAR_6);
 if (!VAR_7)
  FUNC_1(VAR_2, VAR_3);
 return VAR_7;
}
