
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_owner {int noo_lock; int noo_refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nfs_open_owner *VAR_0)
{
 FUNC_0(&VAR_0->noo_lock);
 VAR_0->noo_refcnt++;
 FUNC_1(&VAR_0->noo_lock);
}
