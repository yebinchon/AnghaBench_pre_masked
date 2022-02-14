
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfsmount {int nm_lock; int nm_dreturnq; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_6__ {scalar_t__ tqe_next; } ;
struct TYPE_7__ {TYPE_1__ n_dreturn; int n_openlock; int n_openflags; } ;


 scalar_t__ VAR_0 ;
 struct nfsmount* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (struct nfsmount*) ;

void
FUNC_6(nfsnode_t VAR_3)
{
 struct nfsmount *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_4(VAR_4))
  return;

 FUNC_2(&VAR_3->n_openlock);
 VAR_3->n_openflags |= VAR_1;
 FUNC_3(&VAR_3->n_openlock);

 FUNC_2(&VAR_4->nm_lock);
 if (VAR_3->n_dreturn.tqe_next == VAR_0)
  FUNC_1(&VAR_4->nm_dreturnq, VAR_3, VAR_2);
 FUNC_5(VAR_4);
 FUNC_3(&VAR_4->nm_lock);
}
