
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_dir_entry {int dummy; } ;
struct inode {int i_version; int i_ino; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,struct msdos_dir_entry*) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct super_block*,int ) ;
 struct inode* FUNC_7 (struct super_block*) ;

struct inode *FUNC_8(struct super_block *VAR_2,
   struct msdos_dir_entry *VAR_3, loff_t VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_7(VAR_2);
 if (!VAR_5) {
  VAR_5 = FUNC_0(-VAR_0);
  goto out;
 }
 VAR_5->i_ino = FUNC_6(VAR_2, VAR_1);
 VAR_5->i_version = 1;
 VAR_6 = FUNC_2(VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_5(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
  goto out;
 }
 FUNC_1(VAR_5, VAR_4);
 FUNC_4(VAR_5);
out:
 return VAR_5;
}
