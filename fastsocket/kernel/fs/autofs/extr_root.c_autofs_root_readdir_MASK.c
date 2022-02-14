
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
struct autofs_dirhash {int dummy; } ;
struct autofs_sb_info {struct autofs_dirhash dirhash; } ;
struct autofs_dir_ent {char* name; int len; int ino; int dentry; } ;
typedef int off_t ;
typedef int (* filldir_t ) (void*,char*,int,int,int ,int ) ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct autofs_dir_ent* FUNC_0 (struct autofs_dirhash*,int*,struct autofs_dir_ent*) ;
 struct autofs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3, filldir_t VAR_4)
{
 struct autofs_dir_ent *VAR_5 = ((void*)0);
 struct autofs_dirhash *VAR_6;
 struct autofs_sb_info *VAR_7;
 struct inode * VAR_8 = VAR_2->f_path.dentry->d_inode;
 off_t VAR_9, VAR_10;

 FUNC_3();

 VAR_7 = FUNC_1(VAR_8->i_sb);
 VAR_6 = &VAR_7->dirhash;
 VAR_10 = VAR_2->f_pos;

 switch(VAR_10)
 {
 case 0:
  if (VAR_4(VAR_3, ".", 1, VAR_10, VAR_8->i_ino, VAR_0) < 0)
   goto out;
  VAR_2->f_pos = ++VAR_10;

 case 1:
  if (VAR_4(VAR_3, "..", 2, VAR_10, VAR_8->i_ino, VAR_0) < 0)
   goto out;
  VAR_2->f_pos = ++VAR_10;

 default:
  while (VAR_9 = VAR_10, VAR_5 = FUNC_0(VAR_6,&VAR_10,VAR_5)) {
   if (!VAR_5->dentry || FUNC_2(VAR_5->dentry)) {
    if (VAR_4(VAR_3,VAR_5->name,VAR_5->len,VAR_9,VAR_5->ino,VAR_1) < 0)
     goto out;
    VAR_2->f_pos = VAR_10;
   }
  }
  break;
 }

out:
 FUNC_4();
 return 0;
}
