
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct minix_sb_info {unsigned int s_dirsize; scalar_t__ s_version; } ;
struct minix_dir_entry {scalar_t__ inode; } ;
struct inode {int i_mtime; int i_ctime; int i_sb; } ;
struct address_space {scalar_t__ host; } ;
struct TYPE_2__ {scalar_t__ inode; } ;
typedef TYPE_1__ minix3_dirent ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct address_space*,int,unsigned int,int ,struct page**,int *) ;
 int FUNC_1 (struct page*,int,unsigned int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 struct minix_sb_info* FUNC_5 (int ) ;
 char* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct minix_dir_entry *VAR_3, struct page *VAR_4)
{
 struct address_space *VAR_5 = VAR_4->mapping;
 struct inode *VAR_6 = (struct inode*)VAR_5->host;
 char *VAR_7 = FUNC_6(VAR_4);
 loff_t VAR_8 = FUNC_7(VAR_4) + (char*)VAR_3 - VAR_7;
 struct minix_sb_info *VAR_9 = FUNC_5(VAR_6->i_sb);
 unsigned VAR_10 = VAR_9->s_dirsize;
 int VAR_11;

 FUNC_3(VAR_4);
 VAR_11 = FUNC_0(((void*)0), VAR_5, VAR_8, VAR_10,
     VAR_0, &VAR_4, ((void*)0));
 if (VAR_11 == 0) {
  if (VAR_9->s_version == VAR_2)
   ((minix3_dirent *) VAR_3)->inode = 0;
  else
   VAR_3->inode = 0;
  VAR_11 = FUNC_1(VAR_4, VAR_8, VAR_10);
 } else {
  FUNC_8(VAR_4);
 }
 FUNC_2(VAR_4);
 VAR_6->i_ctime = VAR_6->i_mtime = VAR_1;
 FUNC_4(VAR_6);
 return VAR_11;
}
