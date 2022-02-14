
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_state {TYPE_1__* owner; int state_lock; int flags; int lock_states; } ;
struct nfs4_lock_state {int ls_locks; } ;
typedef int pid_t ;
typedef int fl_owner_t ;
struct TYPE_2__ {int so_server; } ;


 int VAR_0 ;
 struct nfs4_lock_state* FUNC_0 (struct nfs4_state*,int ,int ,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 struct nfs4_lock_state* FUNC_2 (struct nfs4_state*,int ,int ,unsigned int) ;
 int FUNC_3 (int ,struct nfs4_lock_state*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nfs4_lock_state *FUNC_7(struct nfs4_state *VAR_1, fl_owner_t VAR_2, pid_t VAR_3, unsigned int VAR_4)
{
 struct nfs4_lock_state *VAR_5, *VAR_6 = ((void*)0);

 for(;;) {
  FUNC_5(&VAR_1->state_lock);
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_5 != ((void*)0))
   break;
  if (VAR_6 != ((void*)0)) {
   FUNC_1(&VAR_6->ls_locks, &VAR_1->lock_states);
   FUNC_4(VAR_0, &VAR_1->flags);
   VAR_5 = VAR_6;
   VAR_6 = ((void*)0);
   break;
  }
  FUNC_6(&VAR_1->state_lock);
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6 == ((void*)0))
   return ((void*)0);
 }
 FUNC_6(&VAR_1->state_lock);
 if (VAR_6 != ((void*)0))
  FUNC_3(VAR_1->owner->so_server, VAR_6);
 return VAR_5;
}
