
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_lockowner {int l_pid; int l_owner; } ;
struct nfs4_state {int state_lock; int flags; } ;
struct TYPE_2__ {int list; } ;
struct nfs4_lock_state {int ls_flags; TYPE_1__ ls_sequence; int ls_stateid; } ;
typedef int pid_t ;
typedef int nfs4_stateid ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfs4_lock_state* FUNC_0 (struct nfs4_state*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs4_lock_state*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(nfs4_stateid *VAR_5,
  struct nfs4_state *VAR_6,
  const struct nfs_lockowner *VAR_7)
{
 struct nfs4_lock_state *VAR_8;
 fl_owner_t VAR_9;
 pid_t VAR_10;
 int VAR_11 = -VAR_0;


 if (VAR_7 == ((void*)0))
  goto out;

 if (FUNC_7(VAR_2, &VAR_6->flags) == 0)
  goto out;

 VAR_9 = VAR_7->l_owner;
 VAR_10 = VAR_7->l_pid;
 FUNC_5(&VAR_6->state_lock);
 VAR_8 = FUNC_0(VAR_6, VAR_9, VAR_10, VAR_3);
 if (VAR_8 != ((void*)0) && (VAR_8->ls_flags & VAR_4) != 0) {
  FUNC_3(VAR_5, &VAR_8->ls_stateid);
  VAR_11 = 0;
  FUNC_4();
  if (!FUNC_1(&VAR_8->ls_sequence.list))
   VAR_11 = -VAR_1;
 }
 FUNC_6(&VAR_6->state_lock);
 FUNC_2(VAR_8);
out:
 return VAR_11;
}
