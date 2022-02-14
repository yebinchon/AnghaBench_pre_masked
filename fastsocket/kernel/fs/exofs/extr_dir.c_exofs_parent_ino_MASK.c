
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct exofs_dir_entry {int inode_no; } ;
struct dentry {int d_inode; } ;
typedef int ino_t ;


 struct exofs_dir_entry* FUNC_0 (int ,struct page**) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;

ino_t FUNC_3(struct dentry *VAR_0)
{
 struct page *VAR_1;
 struct exofs_dir_entry *VAR_2;
 ino_t VAR_3;

 VAR_2 = FUNC_0(VAR_0->d_inode, &VAR_1);
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_2(VAR_2->inode_no);
 FUNC_1(VAR_1);
 return VAR_3;
}
