
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_state {int state; TYPE_1__* owner; int open_states; } ;
typedef int fmode_t ;
struct TYPE_2__ {int so_states; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct nfs4_state *VAR_1, fmode_t VAR_2)
{
 if (VAR_1->state == VAR_2)
  return;

 if ((VAR_2 & VAR_0) != (VAR_1->state & VAR_0)) {
  if (VAR_2 & VAR_0)
   FUNC_0(&VAR_1->open_states, &VAR_1->owner->so_states);
  else
   FUNC_1(&VAR_1->open_states, &VAR_1->owner->so_states);
 }
 VAR_1->state = VAR_2;
}
