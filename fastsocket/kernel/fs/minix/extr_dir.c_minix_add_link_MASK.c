
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int mapping; } ;
struct minix_sb_info {char* s_dirsize; scalar_t__ s_version; int s_namelen; } ;
struct inode {int i_ctime; int i_mtime; scalar_t__ i_ino; struct super_block* i_sb; } ;
struct TYPE_6__ {char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct TYPE_7__ {char* name; scalar_t__ inode; } ;
typedef TYPE_3__ minix_dirent ;
struct TYPE_8__ {char* name; scalar_t__ inode; } ;
typedef TYPE_4__ minix3_dirent ;
typedef int loff_t ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,int ,int,char*,int ,struct page**,int *) ;
 int FUNC_4 (struct page*,int,char*) ;
 struct page* FUNC_5 (struct inode*,unsigned long) ;
 unsigned long FUNC_6 (struct inode*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char*,int ,char*) ;
 int FUNC_12 (struct inode*,unsigned long) ;
 char* FUNC_13 (char*,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_14 (struct super_block*) ;
 scalar_t__ FUNC_15 (int,int ,char const*,char*) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;

int FUNC_19(struct dentry *VAR_6, struct inode *VAR_7)
{
 struct inode *VAR_8 = VAR_6->d_parent->d_inode;
 const char * VAR_9 = VAR_6->d_name.name;
 int VAR_10 = VAR_6->d_name.len;
 struct super_block * VAR_11 = VAR_8->i_sb;
 struct minix_sb_info * VAR_12 = FUNC_14(VAR_11);
 struct page *VAR_13 = ((void*)0);
 unsigned long VAR_14 = FUNC_6(VAR_8);
 unsigned long VAR_15;
 char *VAR_16, *VAR_17;
 minix_dirent *VAR_18;
 minix3_dirent *VAR_19;
 loff_t VAR_20;
 int VAR_21;
 char *VAR_22 = ((void*)0);
 __u32 VAR_23;






 for (VAR_15 = 0; VAR_15 <= VAR_14; VAR_15++) {
  char *VAR_24, *VAR_25;

  VAR_13 = FUNC_5(VAR_8, VAR_15);
  VAR_21 = FUNC_2(VAR_13);
  if (FUNC_1(VAR_13))
   goto out;
  FUNC_8(VAR_13);
  VAR_16 = (char*)FUNC_16(VAR_13);
  VAR_25 = VAR_16 + FUNC_12(VAR_8, VAR_15);
  VAR_24 = VAR_16 + VAR_5 - VAR_12->s_dirsize;
  for (VAR_17 = VAR_16; VAR_17 <= VAR_24; VAR_17 = FUNC_13(VAR_17, VAR_12)) {
   VAR_18 = (minix_dirent *)VAR_17;
   VAR_19 = (minix3_dirent *)VAR_17;
   if (VAR_12->s_version == VAR_4) {
    VAR_22 = VAR_19->name;
    VAR_23 = VAR_19->inode;
    } else {
      VAR_22 = VAR_18->name;
    VAR_23 = VAR_18->inode;
   }
   if (VAR_17 == VAR_25) {

    if (VAR_12->s_version == VAR_4)
     VAR_19->inode = 0;
     else
     VAR_18->inode = 0;
    goto got_it;
   }
   if (!VAR_23)
    goto got_it;
   VAR_21 = -VAR_2;
   if (FUNC_15(VAR_10, VAR_12->s_namelen, VAR_9, VAR_22))
    goto out_unlock;
  }
  FUNC_18(VAR_13);
  FUNC_7(VAR_13);
 }
 FUNC_0();
 return -VAR_3;

got_it:
 VAR_20 = FUNC_17(VAR_13) + VAR_17 - (char *)FUNC_16(VAR_13);
 VAR_21 = FUNC_3(((void*)0), VAR_13->mapping, VAR_20, VAR_12->s_dirsize,
     VAR_0, &VAR_13, ((void*)0));
 if (VAR_21)
  goto out_unlock;
 FUNC_10 (VAR_22, VAR_9, VAR_10);
 if (VAR_12->s_version == VAR_4) {
  FUNC_11 (VAR_22 + VAR_10, 0, VAR_12->s_dirsize - VAR_10 - 4);
  VAR_19->inode = VAR_7->i_ino;
 } else {
  FUNC_11 (VAR_22 + VAR_10, 0, VAR_12->s_dirsize - VAR_10 - 2);
  VAR_18->inode = VAR_7->i_ino;
 }
 VAR_21 = FUNC_4(VAR_13, VAR_20, VAR_12->s_dirsize);
 VAR_8->i_mtime = VAR_8->i_ctime = VAR_1;
 FUNC_9(VAR_8);
out_put:
 FUNC_7(VAR_13);
out:
 return VAR_21;
out_unlock:
 FUNC_18(VAR_13);
 goto out_put;
}
