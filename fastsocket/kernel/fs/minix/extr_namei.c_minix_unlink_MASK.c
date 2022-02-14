
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct minix_dir_entry {int dummy; } ;
struct inode {int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct minix_dir_entry*,struct page*) ;
 struct minix_dir_entry* FUNC_2 (struct dentry*,struct page**) ;

__attribute__((used)) static int FUNC_3(struct inode * VAR_1, struct dentry *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct inode * VAR_4 = VAR_2->d_inode;
 struct page * VAR_5;
 struct minix_dir_entry * VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (!VAR_6)
  goto end_unlink;

 VAR_3 = FUNC_1(VAR_6, VAR_5);
 if (VAR_3)
  goto end_unlink;

 VAR_4->i_ctime = VAR_1->i_ctime;
 FUNC_0(VAR_4);
end_unlink:
 return VAR_3;
}
