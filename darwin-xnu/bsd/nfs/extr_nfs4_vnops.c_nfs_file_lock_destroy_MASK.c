
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_owner {int nlo_lock; } ;
struct nfs_file_lock {int nfl_flags; struct nfs_lock_owner* nfl_owner; } ;


 int FUNC_0 (struct nfs_file_lock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfs_file_lock*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs_lock_owner*) ;

void
FUNC_5(struct nfs_file_lock *VAR_2)
{
 struct nfs_lock_owner *VAR_3 = VAR_2->nfl_owner;

 if (VAR_2->nfl_flags & VAR_1) {
  VAR_2->nfl_owner = ((void*)0);
  FUNC_0(VAR_2, VAR_0);
 } else {
  FUNC_2(&VAR_3->nlo_lock);
  FUNC_1(VAR_2, sizeof(*VAR_2));
  FUNC_3(&VAR_3->nlo_lock);
 }
 FUNC_4(VAR_3);
}
