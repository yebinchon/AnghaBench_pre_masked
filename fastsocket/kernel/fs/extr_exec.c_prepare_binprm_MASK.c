
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int umode_t ;
struct linux_binprm {int cred_prepared; int buf; TYPE_5__* file; TYPE_4__* cred; int per_clear; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;
struct TYPE_8__ {TYPE_2__* mnt; TYPE_1__* dentry; } ;
struct TYPE_10__ {TYPE_3__ f_path; int * f_op; } ;
struct TYPE_9__ {int egid; int euid; } ;
struct TYPE_7__ {int mnt_flags; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct linux_binprm*) ;

int FUNC_5(struct linux_binprm *VAR_7)
{
 umode_t VAR_8;
 struct inode * VAR_9 = VAR_7->file->f_path.dentry->d_inode;
 int VAR_10;

 VAR_8 = VAR_9->i_mode;
 if (VAR_7->file->f_op == ((void*)0))
  return -VAR_1;


 VAR_7->cred->euid = FUNC_1();
 VAR_7->cred->egid = FUNC_0();

 if (!(VAR_7->file->f_path.mnt->mnt_flags & VAR_2)) {

  if (VAR_8 & VAR_5) {
   VAR_7->per_clear |= VAR_3;
   VAR_7->cred->euid = VAR_9->i_uid;
  }







  if ((VAR_8 & (VAR_4 | VAR_6)) == (VAR_4 | VAR_6)) {
   VAR_7->per_clear |= VAR_3;
   VAR_7->cred->egid = VAR_9->i_gid;
  }
 }


 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  return VAR_10;
 VAR_7->cred_prepared = 1;

 FUNC_3(VAR_7->buf, 0, VAR_0);
 return FUNC_2(VAR_7->file, 0, VAR_7->buf, VAR_0);
}
