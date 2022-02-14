
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_owner {int noo_refcnt; int noo_flags; int noo_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_open_owner*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct nfs_open_owner *VAR_2)
{
 FUNC_0(&VAR_2->noo_lock);
 if (VAR_2->noo_refcnt < 1)
  FUNC_3("nfs_open_owner_rele: no refcnt");
 VAR_2->noo_refcnt--;
 if (!VAR_2->noo_refcnt && (VAR_2->noo_flags & VAR_0))
  FUNC_3("nfs_open_owner_rele: busy");

 if (VAR_2->noo_refcnt || (VAR_2->noo_flags & VAR_1)) {
  FUNC_1(&VAR_2->noo_lock);
  return;
 }

 FUNC_1(&VAR_2->noo_lock);
 FUNC_2(VAR_2);
}
