
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {scalar_t__ nm_ref; int nm_lock; int nm_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int *,scalar_t__,char*,int *) ;
 int FUNC_4 (struct nfsmount*) ;

void
FUNC_5(struct nfsmount *VAR_2)
{
 FUNC_1(&VAR_2->nm_lock);
 VAR_2->nm_state |= VAR_0;
 while (VAR_2->nm_ref > 0) {
  FUNC_3(&VAR_2->nm_ref, &VAR_2->nm_lock, VAR_1-1, "nfs_mount_drain", ((void*)0));
 }
 FUNC_0(VAR_2->nm_ref == 0);
 FUNC_2(&VAR_2->nm_lock);
 FUNC_4(VAR_2);
}
