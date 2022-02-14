
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct bitmap_storage {int file_pages; struct page** filemap_attr; struct page* sb_page; struct page** filemap; struct file* file; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct page**) ;

__attribute__((used)) static void FUNC_4(struct bitmap_storage *VAR_0)
{
 struct page **VAR_1, *VAR_2;
 int VAR_3;
 struct file *VAR_4;

 VAR_4 = VAR_0->file;
 VAR_1 = VAR_0->filemap;
 VAR_3 = VAR_0->file_pages;
 VAR_2 = VAR_0->sb_page;

 while (VAR_3--)
  if (VAR_1[VAR_3] != VAR_2)
   FUNC_1(VAR_1[VAR_3]);
 FUNC_3(VAR_1);
 FUNC_3(VAR_0->filemap_attr);

 if (VAR_2)
  FUNC_1(VAR_2);

 if (VAR_4) {
  struct inode *VAR_5 = VAR_4->f_path.dentry->d_inode;
  FUNC_2(VAR_5->i_mapping, 0, -1);
  FUNC_0(VAR_4);
 }
}
