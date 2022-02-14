
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct minix_sb_info {char* s_dirsize; scalar_t__ s_version; int s_namelen; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_6__ {char* name; int len; } ;
struct dentry {TYPE_2__* d_parent; TYPE_1__ d_name; } ;
struct TYPE_8__ {char* name; int inode; } ;
typedef TYPE_3__ minix_dirent ;
struct TYPE_9__ {char* name; int inode; } ;
typedef TYPE_4__ minix3_dirent ;
typedef int __u32 ;
struct TYPE_7__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 struct page* FUNC_1 (struct inode*,unsigned long) ;
 unsigned long FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*,unsigned long) ;
 char* FUNC_5 (char*,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (int,int ,char const*,char*) ;
 scalar_t__ FUNC_8 (struct page*) ;

minix_dirent *FUNC_9(struct dentry *VAR_1, struct page **VAR_2)
{
 const char * VAR_3 = VAR_1->d_name.name;
 int VAR_4 = VAR_1->d_name.len;
 struct inode * VAR_5 = VAR_1->d_parent->d_inode;
 struct super_block * VAR_6 = VAR_5->i_sb;
 struct minix_sb_info * VAR_7 = FUNC_6(VAR_6);
 unsigned long VAR_8;
 unsigned long VAR_9 = FUNC_2(VAR_5);
 struct page *VAR_10 = ((void*)0);
 char *VAR_11;

 char *VAR_12;
 __u32 VAR_13;
 *VAR_2 = ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  char *VAR_14, *VAR_15;

  VAR_10 = FUNC_1(VAR_5, VAR_8);
  if (FUNC_0(VAR_10))
   continue;

  VAR_14 = (char*)FUNC_8(VAR_10);
  VAR_15 = VAR_14 + FUNC_4(VAR_5, VAR_8) - VAR_7->s_dirsize;
  for (VAR_11 = VAR_14; VAR_11 <= VAR_15; VAR_11 = FUNC_5(VAR_11, VAR_7)) {
   if (VAR_7->s_version == VAR_0) {
    minix3_dirent *VAR_16 = (minix3_dirent *)VAR_11;
    VAR_12 = VAR_16->name;
    VAR_13 = VAR_16->inode;
    } else {
    minix_dirent *VAR_17 = (minix_dirent *)VAR_11;
    VAR_12 = VAR_17->name;
    VAR_13 = VAR_17->inode;
   }
   if (!VAR_13)
    continue;
   if (FUNC_7(VAR_4, VAR_7->s_namelen, VAR_3, VAR_12))
    goto found;
  }
  FUNC_3(VAR_10);
 }
 return ((void*)0);

found:
 *VAR_2 = VAR_10;
 return (minix_dirent *)VAR_11;
}
