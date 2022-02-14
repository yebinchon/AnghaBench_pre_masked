
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; } ;
struct exofs_dir_entry {int inode_no; int rec_len; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*,int,unsigned int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct exofs_dir_entry*,struct inode*) ;
 int FUNC_5 (int *,int ,int,unsigned int,int ,struct page**,int *) ;
 unsigned int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

int FUNC_12(struct inode *VAR_2, struct exofs_dir_entry *VAR_3,
   struct page *VAR_4, struct inode *VAR_5)
{
 loff_t VAR_6 = FUNC_11(VAR_4) +
   (char *) VAR_3 - (char *) FUNC_10(VAR_4);
 unsigned VAR_7 = FUNC_6(VAR_3->rec_len);
 int VAR_8;

 FUNC_8(VAR_4);
 VAR_8 = FUNC_5(((void*)0), VAR_4->mapping, VAR_6, VAR_7,
    VAR_0, &VAR_4, ((void*)0));
 if (VAR_8)
  FUNC_0("exofs_set_link: exofs_write_begin FAILD => %d\n",
     VAR_8);

 VAR_3->inode_no = FUNC_1(VAR_5->i_ino);
 FUNC_4(VAR_3, VAR_5);
 if (FUNC_7(!VAR_8))
  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);
 FUNC_3(VAR_4);
 VAR_2->i_mtime = VAR_2->i_ctime = VAR_1;
 FUNC_9(VAR_2);
 return VAR_8;
}
