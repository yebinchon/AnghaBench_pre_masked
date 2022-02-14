
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int name; } ;
struct dentry {unsigned long d_time; TYPE_1__ d_name; } ;
struct autofs_dirhash {int dummy; } ;
struct autofs_sb_info {struct autofs_dirhash dirhash; } ;
struct autofs_dir_ent {struct dentry* dentry; scalar_t__ ino; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct autofs_dir_ent*) ;
 struct autofs_dir_ent* FUNC_1 (struct autofs_dirhash*,TYPE_1__*) ;
 int FUNC_2 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, struct dentry *VAR_5)
{
 struct autofs_sb_info *VAR_6 = FUNC_3(VAR_4->i_sb);
 struct autofs_dirhash *VAR_7 = &VAR_6->dirhash;
 struct autofs_dir_ent *VAR_8;

 FUNC_6();
 if (!FUNC_2(VAR_6)) {
  FUNC_8();
  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_7, &VAR_5->d_name);
 if (!VAR_8) {
  FUNC_8();
  return -VAR_2;
 }

 if ((unsigned int)VAR_8->ino < VAR_0) {
  FUNC_8();
  return -VAR_3;
 }

 if (VAR_8->dentry != VAR_5) {
  FUNC_7("autofs_rmdir: odentry != dentry for entry %s\n", VAR_5->d_name.name);
 }

 VAR_5->d_time = (unsigned long)(struct autofs_dir_ent *)((void*)0);
 FUNC_0(VAR_8);
 FUNC_5(VAR_4);
 FUNC_4(VAR_5);
 FUNC_8();

 return 0;
}
