
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hfs_readdir_data {int list; } ;
struct file {struct hfs_readdir_data* private_data; } ;


 int FUNC_0 (struct hfs_readdir_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct hfs_readdir_data *VAR_2 = VAR_1->private_data;
 if (VAR_2) {
  FUNC_1(&VAR_2->list);
  FUNC_0(VAR_2);
 }
 return 0;
}
