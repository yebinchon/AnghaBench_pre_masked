
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_owner {int nlo_lock; int * nlo_open_owner; } ;


 int FUNC_0 (struct nfs_lock_owner*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nfs_lock_owner *VAR_2)
{
 if (VAR_2->nlo_open_owner) {
  FUNC_2(VAR_2->nlo_open_owner);
  VAR_2->nlo_open_owner = ((void*)0);
 }
 FUNC_1(&VAR_2->nlo_lock, VAR_1);
 FUNC_0(VAR_2, VAR_0);
}
