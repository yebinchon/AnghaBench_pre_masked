
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_user_proc {int lockspace; } ;
struct TYPE_2__ {int sb_lkid; } ;
struct dlm_user_args {TYPE_1__ lksb; int xid; int bastaddr; int bastparam; scalar_t__ castaddr; int castparam; scalar_t__ user_lksb; struct dlm_user_proc* proc; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lock_params {int flags; scalar_t__ timeout; int namelen; int name; int mode; int lvb; int lkid; int xid; int bastaddr; int bastparam; scalar_t__ castaddr; int castparam; scalar_t__ lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dlm_ls* FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_user_args*,int ,int,int ,int ,unsigned long) ;
 int FUNC_3 (struct dlm_ls*,struct dlm_user_args*,int ,int,int ,int ,unsigned long) ;
 struct dlm_user_args* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct dlm_user_proc *VAR_5,
       struct dlm_lock_params *VAR_6)
{
 struct dlm_ls *VAR_7;
 struct dlm_user_args *VAR_8;
 int VAR_9 = -VAR_3;

 VAR_7 = FUNC_0(VAR_5->lockspace);
 if (!VAR_7)
  return -VAR_2;

 if (!VAR_6->castaddr || !VAR_6->lksb) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_4(sizeof(struct dlm_user_args), VAR_4);
 if (!VAR_8)
  goto out;
 VAR_8->proc = VAR_5;
 VAR_8->user_lksb = VAR_6->lksb;
 VAR_8->castparam = VAR_6->castparam;
 VAR_8->castaddr = VAR_6->castaddr;
 VAR_8->bastparam = VAR_6->bastparam;
 VAR_8->bastaddr = VAR_6->bastaddr;
 VAR_8->xid = VAR_6->xid;

 if (VAR_6->flags & VAR_0)
  VAR_9 = FUNC_2(VAR_7, VAR_8,
             VAR_6->mode, VAR_6->flags,
             VAR_6->lkid, VAR_6->lvb,
      (unsigned long) VAR_6->timeout);
 else {
  VAR_9 = FUNC_3(VAR_7, VAR_8,
      VAR_6->mode, VAR_6->flags,
      VAR_6->name, VAR_6->namelen,
      (unsigned long) VAR_6->timeout);
  if (!VAR_9)
   VAR_9 = VAR_8->lksb.sb_lkid;
 }
 out:
 FUNC_1(VAR_7);
 return VAR_9;
}
