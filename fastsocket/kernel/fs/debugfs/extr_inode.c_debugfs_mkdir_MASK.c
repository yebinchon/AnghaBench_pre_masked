
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct dentry*,int,int ,void*,struct file_operations const*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
    void *VAR_6, const struct file_operations *VAR_7)
{
 int VAR_8;

 VAR_5 = (VAR_5 & (VAR_1 | VAR_2)) | VAR_0;
 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, 0, VAR_6, VAR_7);
 if (!VAR_8) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3, VAR_4);
 }
 return VAR_8;
}
