
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_owner {int nlo_refcnt; int nlo_flags; int nlo_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_lock_owner*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct nfs_lock_owner *VAR_2)
{
 FUNC_0(&VAR_2->nlo_lock);
 if (VAR_2->nlo_refcnt < 1)
  FUNC_3("nfs_lock_owner_rele: no refcnt");
 VAR_2->nlo_refcnt--;
 if (!VAR_2->nlo_refcnt && (VAR_2->nlo_flags & VAR_0))
  FUNC_3("nfs_lock_owner_rele: busy");

 if (VAR_2->nlo_refcnt || (VAR_2->nlo_flags & VAR_1)) {
  FUNC_1(&VAR_2->nlo_lock);
  return;
 }

 FUNC_1(&VAR_2->nlo_lock);
 FUNC_2(VAR_2);
}
