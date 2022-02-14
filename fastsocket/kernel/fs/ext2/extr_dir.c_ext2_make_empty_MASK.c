
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;
struct inode {int i_ino; struct address_space* i_mapping; } ;
struct ext2_dir_entry_2 {int name_len; int name; void* inode; void* rec_len; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,unsigned int,int ,struct page**,int *) ;
 void* FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*,int ,unsigned int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct ext2_dir_entry_2*,struct inode*) ;
 struct page* FUNC_7 (struct address_space*,int ) ;
 void* FUNC_8 (struct page*,int ) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (void*,int ,unsigned int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

int FUNC_14(struct inode *VAR_2, struct inode *VAR_3)
{
 struct address_space *VAR_4 = VAR_2->i_mapping;
 struct page *VAR_5 = FUNC_7(VAR_4, 0);
 unsigned VAR_6 = FUNC_3(VAR_2);
 struct ext2_dir_entry_2 * VAR_7;
 int VAR_8;
 void *VAR_9;

 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_1(((void*)0), VAR_5->mapping, 0, VAR_6, 0,
       &VAR_5, ((void*)0));
 if (VAR_8) {
  FUNC_13(VAR_5);
  goto fail;
 }
 VAR_9 = FUNC_8(VAR_5, VAR_1);
 FUNC_11(VAR_9, 0, VAR_6);
 VAR_7 = (struct ext2_dir_entry_2 *)VAR_9;
 VAR_7->name_len = 1;
 VAR_7->rec_len = FUNC_5(FUNC_0(1));
 FUNC_10 (VAR_7->name, ".\0\0", 4);
 VAR_7->inode = FUNC_2(VAR_2->i_ino);
 FUNC_6 (VAR_7, VAR_2);

 VAR_7 = (struct ext2_dir_entry_2 *)(VAR_9 + FUNC_0(1));
 VAR_7->name_len = 2;
 VAR_7->rec_len = FUNC_5(VAR_6 - FUNC_0(1));
 VAR_7->inode = FUNC_2(VAR_3->i_ino);
 FUNC_10 (VAR_7->name, "..\0", 4);
 FUNC_6 (VAR_7, VAR_2);
 FUNC_9(VAR_9, VAR_1);
 VAR_8 = FUNC_4(VAR_5, 0, VAR_6);
fail:
 FUNC_12(VAR_5);
 return VAR_8;
}
