
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; } ;
struct ext2_dir_entry_2 {int inode; int rec_len; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int ,int,unsigned int,int ,struct page**,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int,unsigned int) ;
 int FUNC_5 (struct page*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct ext2_dir_entry_2*,struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

void FUNC_12(struct inode *VAR_3, struct ext2_dir_entry_2 *VAR_4,
     struct page *VAR_5, struct inode *VAR_6, int VAR_7)
{
 loff_t VAR_8 = FUNC_11(VAR_5) +
   (char *) VAR_4 - (char *) FUNC_10(VAR_5);
 unsigned VAR_9 = FUNC_6(VAR_4->rec_len);
 int VAR_10;

 FUNC_8(VAR_5);
 VAR_10 = FUNC_2(((void*)0), VAR_5->mapping, VAR_8, VAR_9,
    VAR_0, &VAR_5, ((void*)0));
 FUNC_0(VAR_10);
 VAR_4->inode = FUNC_3(VAR_6->i_ino);
 FUNC_7(VAR_4, VAR_6);
 VAR_10 = FUNC_4(VAR_5, VAR_8, VAR_9);
 FUNC_5(VAR_5);
 if (VAR_7)
  VAR_3->i_mtime = VAR_3->i_ctime = VAR_1;
 FUNC_1(VAR_3)->i_flags &= ~VAR_2;
 FUNC_9(VAR_3);
}
