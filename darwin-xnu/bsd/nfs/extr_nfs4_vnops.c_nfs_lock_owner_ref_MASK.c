
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_owner {int nlo_lock; int nlo_refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nfs_lock_owner *VAR_0)
{
 FUNC_0(&VAR_0->nlo_lock);
 VAR_0->nlo_refcnt++;
 FUNC_1(&VAR_0->nlo_lock);
}
