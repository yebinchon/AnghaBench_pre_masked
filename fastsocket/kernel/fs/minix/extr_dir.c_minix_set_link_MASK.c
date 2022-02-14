
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct minix_sb_info {scalar_t__ s_version; int s_dirsize; } ;
struct minix_dir_entry {int inode; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int inode; } ;
typedef TYPE_1__ minix3_dirent ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct address_space*,int,int ,int ,struct page**,int *) ;
 int FUNC_1 (struct page*,int,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 struct minix_sb_info* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

void FUNC_9(struct minix_dir_entry *VAR_3, struct page *VAR_4,
 struct inode *VAR_5)
{
 struct address_space *VAR_6 = VAR_4->mapping;
 struct inode *VAR_7 = VAR_6->host;
 struct minix_sb_info *VAR_8 = FUNC_5(VAR_7->i_sb);
 loff_t VAR_9 = FUNC_7(VAR_4) +
   (char *)VAR_3-(char*)FUNC_6(VAR_4);
 int VAR_10;

 FUNC_3(VAR_4);

 VAR_10 = FUNC_0(((void*)0), VAR_6, VAR_9, VAR_8->s_dirsize,
     VAR_0, &VAR_4, ((void*)0));
 if (VAR_10 == 0) {
  if (VAR_8->s_version == VAR_2)
   ((minix3_dirent *) VAR_3)->inode = VAR_5->i_ino;
  else
   VAR_3->inode = VAR_5->i_ino;
  VAR_10 = FUNC_1(VAR_4, VAR_9, VAR_8->s_dirsize);
 } else {
  FUNC_8(VAR_4);
 }
 FUNC_2(VAR_4);
 VAR_7->i_mtime = VAR_7->i_ctime = VAR_1;
 FUNC_4(VAR_7);
}
