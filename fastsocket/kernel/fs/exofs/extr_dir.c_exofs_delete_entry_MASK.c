
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct inode {int i_mtime; int i_ctime; TYPE_1__* i_sb; } ;
struct exofs_sb_info {int s_numfiles; } ;
struct exofs_dir_entry {scalar_t__ rec_len; scalar_t__ inode_no; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct exofs_sb_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*,scalar_t__,unsigned int) ;
 struct exofs_dir_entry* FUNC_4 (struct exofs_dir_entry*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *,struct address_space*,scalar_t__,unsigned int,int ,struct page**,int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*) ;
 char* FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;

int FUNC_13(struct exofs_dir_entry *VAR_2, struct page *VAR_3)
{
 struct address_space *VAR_4 = VAR_3->mapping;
 struct inode *VAR_5 = VAR_4->host;
 struct exofs_sb_info *VAR_6 = VAR_5->i_sb->s_fs_info;
 char *VAR_7 = FUNC_11(VAR_3);
 unsigned VAR_8 = ((char *)VAR_2 - VAR_7) & ~(FUNC_2(VAR_5)-1);
 unsigned VAR_9 = ((char *)VAR_2 - VAR_7) + FUNC_7(VAR_2->rec_len);
 loff_t VAR_10;
 struct exofs_dir_entry *VAR_11 = ((void*)0);
 struct exofs_dir_entry *VAR_12 = (struct exofs_dir_entry *) (VAR_7 + VAR_8);
 int VAR_13;

 while (VAR_12 < VAR_2) {
  if (VAR_12->rec_len == 0) {
   FUNC_0("ERROR: exofs_delete_entry:"
    "zero-length directory entry");
   VAR_13 = -VAR_1;
   goto out;
  }
  VAR_11 = VAR_12;
  VAR_12 = FUNC_4(VAR_12);
 }
 if (VAR_11)
  VAR_8 = (char *)VAR_11 - (char *)FUNC_11(VAR_3);
 VAR_10 = FUNC_12(VAR_3) + VAR_8;
 FUNC_9(VAR_3);
 VAR_13 = FUNC_6(((void*)0), VAR_3->mapping, VAR_10, VAR_9 - VAR_8, 0,
       &VAR_3, ((void*)0));
 if (VAR_13)
  FUNC_0("exofs_delete_entry: exofs_write_begin FAILD => %d\n",
     VAR_13);
 if (VAR_11)
  VAR_11->rec_len = FUNC_1(VAR_9 - VAR_8);
 VAR_2->inode_no = 0;
 if (FUNC_8(!VAR_13))
  VAR_13 = FUNC_3(VAR_3, VAR_10, VAR_9 - VAR_8);
 VAR_5->i_ctime = VAR_5->i_mtime = VAR_0;
 FUNC_10(VAR_5);
 VAR_6->s_numfiles--;
out:
 FUNC_5(VAR_3);
 return VAR_13;
}
