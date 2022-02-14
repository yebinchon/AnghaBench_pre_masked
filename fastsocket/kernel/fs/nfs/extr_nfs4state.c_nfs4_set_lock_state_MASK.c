
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_state {int dummy; } ;
struct nfs4_lock_state {int dummy; } ;
struct TYPE_3__ {struct nfs4_lock_state* owner; } ;
struct TYPE_4__ {TYPE_1__ nfs4_fl; } ;
struct file_lock {int fl_flags; int * fl_ops; TYPE_2__ fl_u; int fl_pid; int fl_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfs4_lock_state* FUNC_0 (struct nfs4_state*,int ,int ,int ) ;

int FUNC_1(struct nfs4_state *VAR_7, struct file_lock *VAR_8)
{
 struct nfs4_lock_state *VAR_9;

 if (VAR_8->fl_ops != ((void*)0))
  return 0;
 if (VAR_8->fl_flags & VAR_3)
  VAR_9 = FUNC_0(VAR_7, VAR_8->fl_owner, 0, VAR_5);
 else if (VAR_8->fl_flags & VAR_2)
  VAR_9 = FUNC_0(VAR_7, 0, VAR_8->fl_pid, VAR_4);
 else
  return -VAR_0;
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_8->fl_u.nfs4_fl.owner = VAR_9;
 VAR_8->fl_ops = &VAR_6;
 return 0;
}
