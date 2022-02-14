
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct ext2_dir_entry_2 {int dummy; } ;
typedef struct ext2_dir_entry_2 ext2_dirent ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct inode*,int ,int ) ;
 struct ext2_dir_entry_2* FUNC_2 (struct ext2_dir_entry_2*) ;
 scalar_t__ FUNC_3 (struct page*) ;

struct ext2_dir_entry_2 * FUNC_4 (struct inode *VAR_0, struct page **VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_0, 0, 0);
 ext2_dirent *VAR_3 = ((void*)0);

 if (!FUNC_0(VAR_2)) {
  VAR_3 = FUNC_2((ext2_dirent *) FUNC_3(VAR_2));
  *VAR_1 = VAR_2;
 }
 return VAR_3;
}
