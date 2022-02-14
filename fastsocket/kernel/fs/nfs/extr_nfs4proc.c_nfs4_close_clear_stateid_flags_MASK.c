
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_state {TYPE_1__* owner; int flags; } ;
typedef int fmode_t ;
struct TYPE_2__ {int so_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfs4_state *VAR_5,
  fmode_t VAR_6)
{
 FUNC_1(&VAR_5->owner->so_lock);
 if (!(VAR_6 & VAR_0))
  FUNC_0(VAR_2, &VAR_5->flags);
 if (!(VAR_6 & VAR_1))
  FUNC_0(VAR_4, &VAR_5->flags);
 FUNC_0(VAR_3, &VAR_5->flags);
 FUNC_2(&VAR_5->owner->so_lock);
}
