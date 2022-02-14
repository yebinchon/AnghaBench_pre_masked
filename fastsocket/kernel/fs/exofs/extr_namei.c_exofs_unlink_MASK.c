
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ctime; } ;
struct exofs_dir_entry {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct exofs_dir_entry*,struct page*) ;
 struct exofs_dir_entry* FUNC_1 (struct inode*,struct dentry*,struct page**) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 struct exofs_dir_entry *VAR_4;
 struct page *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5);
 if (!VAR_4)
  goto out;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 VAR_3->i_ctime = VAR_1->i_ctime;
 FUNC_2(VAR_3);
 VAR_6 = 0;
out:
 return VAR_6;
}
