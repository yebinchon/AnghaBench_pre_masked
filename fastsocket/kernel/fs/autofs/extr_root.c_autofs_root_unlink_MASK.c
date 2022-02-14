
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {unsigned long d_time; int d_name; } ;
struct autofs_dirhash {int dummy; } ;
struct autofs_sb_info {TYPE_1__* symlink; int symlink_bitmap; struct autofs_dirhash dirhash; } ;
struct autofs_dir_ent {unsigned int ino; } ;
struct TYPE_2__ {int data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct autofs_dir_ent*) ;
 struct autofs_dir_ent* FUNC_1 (struct autofs_dirhash*,int *) ;
 int FUNC_2 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_7, struct dentry *VAR_8)
{
 struct autofs_sb_info *VAR_9 = FUNC_3(VAR_7->i_sb);
 struct autofs_dirhash *VAR_10 = &VAR_9->dirhash;
 struct autofs_dir_ent *VAR_11;
 unsigned int VAR_12;


 FUNC_8();
 if (!FUNC_2(VAR_9) && !FUNC_4(VAR_2)) {
  FUNC_10();
  return -VAR_3;
 }

 VAR_11 = FUNC_1(VAR_10, &VAR_8->d_name);
 if (!VAR_11) {
  FUNC_10();
  return -VAR_6;
 }

 VAR_12 = VAR_11->ino - VAR_0;
 if (VAR_12 >= VAR_1) {
  FUNC_10();
  return -VAR_5;
 }
 if (!FUNC_9(VAR_12,VAR_9->symlink_bitmap)) {
  FUNC_10();
  return -VAR_4;
 }

 VAR_8->d_time = (unsigned long)(struct autofs_dirhash *)((void*)0);
 FUNC_0(VAR_11);
 FUNC_5(VAR_12,VAR_9->symlink_bitmap);
 FUNC_7(VAR_9->symlink[VAR_12].data);
 FUNC_6(VAR_8);

 FUNC_10();
 return 0;
}
