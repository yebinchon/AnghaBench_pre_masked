
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_3__ {int name; } ;
struct dentry {unsigned long d_time; int d_flags; TYPE_1__ d_name; struct inode* d_inode; } ;
struct autofs_sb_info {int dirhash; } ;
struct autofs_dir_ent {int ino; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct autofs_dir_ent* FUNC_2 (int *,TYPE_1__*) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct autofs_sb_info*) ;
 int FUNC_5 (int *,struct autofs_dir_ent*) ;
 int FUNC_6 (struct autofs_sb_info*,TYPE_1__*) ;
 int FUNC_7 (struct dentry*) ;
 unsigned long VAR_3 ;
 int FUNC_8 (char*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_4, struct super_block *VAR_5, struct autofs_sb_info *VAR_6)
{
 struct inode * VAR_7;
 struct autofs_dir_ent *VAR_8;
 int VAR_9 = 0;

 if (!(VAR_8 = FUNC_2(&VAR_6->dirhash, &VAR_4->d_name))) {
  do {
   if (VAR_9 && VAR_4->d_inode) {
    if (VAR_9 != -VAR_2)
     FUNC_8("autofs warning: lookup failure on positive dentry, status = %d, name = %s\n", VAR_9, VAR_4->d_name.name);
    return 0;
   }


   if (VAR_9 == -VAR_2) {
    VAR_4->d_time = VAR_3 + VAR_0;
    VAR_4->d_flags &= ~VAR_1;
    return 1;
   } else if (VAR_9) {

    return 1;
   }
   VAR_9 = FUNC_6(VAR_6, &VAR_4->d_name);
  } while (!(VAR_8 = FUNC_2(&VAR_6->dirhash, &VAR_4->d_name)));
 }



 VAR_4->d_time = (unsigned long) VAR_8;

 if (!VAR_4->d_inode) {
  VAR_7 = FUNC_3(VAR_5, VAR_8->ino);
  if (FUNC_0(VAR_7)) {

   return 1;
  }
  VAR_4->d_inode = VAR_7;
 }



 if (FUNC_1(VAR_4->d_inode->i_mode) && !FUNC_7(VAR_4)) {
  return !FUNC_6(VAR_6, &VAR_4->d_name);
 }



 if (!FUNC_4(VAR_6)) {
  FUNC_5(&VAR_6->dirhash,VAR_8);
 }

 VAR_4->d_flags &= ~VAR_1;
 return 1;
}
