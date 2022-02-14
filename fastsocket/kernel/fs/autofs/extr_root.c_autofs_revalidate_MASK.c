
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int d_flags; scalar_t__ d_time; TYPE_2__* d_inode; TYPE_1__* d_parent; } ;
struct autofs_sb_info {int dirhash; } ;
struct autofs_dir_ent {int dummy; } ;
struct TYPE_4__ {int i_mode; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int *,struct autofs_dir_ent*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct dentry*,int ,struct autofs_sb_info*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct dentry * VAR_3, struct nameidata *VAR_4)
{
 struct inode * VAR_5;
 struct autofs_sb_info *VAR_6;
 struct autofs_dir_ent *VAR_7;
 int VAR_8;

 FUNC_5();
 VAR_5 = VAR_3->d_parent->d_inode;
 VAR_6 = FUNC_2(VAR_5->i_sb);


 if (VAR_3->d_flags & VAR_1) {
  if (FUNC_1(VAR_6))
   VAR_8 = 1;
  else
   VAR_8 = FUNC_6(VAR_3, VAR_5->i_sb, VAR_6);
  FUNC_7();
  return VAR_8;
 }


 if (!VAR_3->d_inode) {
  FUNC_7();
  return (VAR_3->d_time - VAR_2 <= VAR_0);
 }


 if (FUNC_0(VAR_3->d_inode->i_mode) && !FUNC_4(VAR_3)) {
  if (FUNC_1(VAR_6))
   VAR_8 = 1;
  else
   VAR_8 = FUNC_6(VAR_3, VAR_5->i_sb, VAR_6);
  FUNC_7();
  return VAR_8;
 }


 if (!FUNC_1(VAR_6)) {
  VAR_7 = (struct autofs_dir_ent *) VAR_3->d_time;
  if (VAR_7)
   FUNC_3(&VAR_6->dirhash,VAR_7);
 }
 FUNC_7();
 return 1;
}
