
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct minix_sb_info {scalar_t__ s_version; } ;
struct minix_dir_entry {int inode; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int inode; } ;
typedef TYPE_1__ minix3_dirent ;
typedef int ino_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct minix_dir_entry* FUNC_1 (struct dentry*,struct page**) ;
 struct minix_sb_info* FUNC_2 (int ) ;

ino_t FUNC_3(struct dentry *VAR_1)
{
 struct page *VAR_2;
 struct minix_dir_entry *VAR_3 = FUNC_1(VAR_1, &VAR_2);
 ino_t VAR_4 = 0;

 if (VAR_3) {
  struct address_space *VAR_5 = VAR_2->mapping;
  struct inode *VAR_6 = VAR_5->host;
  struct minix_sb_info *VAR_7 = FUNC_2(VAR_6->i_sb);

  if (VAR_7->s_version == VAR_0)
   VAR_4 = ((minix3_dirent *) VAR_3)->inode;
  else
   VAR_4 = VAR_3->inode;
  FUNC_0(VAR_2);
 }
 return VAR_4;
}
