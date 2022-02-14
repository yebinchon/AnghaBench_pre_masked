
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct address_space*,int ,void*) ;

struct page *FUNC_3(struct file *VAR_0, loff_t VAR_1)
{
 struct dentry *VAR_2;
 struct inode *VAR_3;
 struct address_space *VAR_4;
 struct page *VAR_5;

 VAR_2 = VAR_0->f_path.dentry;
 VAR_3 = VAR_2->d_inode;
 VAR_4 = VAR_3->i_mapping;
 VAR_5 = FUNC_2(VAR_4, VAR_1, (void *)VAR_0);
 if (!FUNC_0(VAR_5))
  FUNC_1(VAR_5);
 return VAR_5;
}
