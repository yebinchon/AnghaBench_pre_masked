
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_owner {int noo_lock; scalar_t__ noo_cred; } ;


 int FUNC_0 (struct nfs_open_owner*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

void
FUNC_3(struct nfs_open_owner *VAR_2)
{
 if (VAR_2->noo_cred)
  FUNC_1(&VAR_2->noo_cred);
 FUNC_2(&VAR_2->noo_lock, VAR_1);
 FUNC_0(VAR_2, VAR_0);
}
