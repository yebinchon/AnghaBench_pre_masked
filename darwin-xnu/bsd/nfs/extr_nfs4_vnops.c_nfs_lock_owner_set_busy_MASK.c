
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
struct timespec {int member_0; int member_1; } ;
struct nfsmount {int dummy; } ;
struct nfs_lock_owner {int nlo_flags; int nlo_lock; TYPE_1__* nlo_open_owner; } ;
struct TYPE_2__ {struct nfsmount* noo_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_lock_owner*,int *,int,char*,struct timespec*) ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (struct nfsmount*,int *,int ,int ) ;

int
FUNC_6(struct nfs_lock_owner *VAR_5, thread_t VAR_6)
{
 struct nfsmount *VAR_7;
 struct timespec VAR_8 = {2, 0};
 int VAR_9 = 0, VAR_10;

 VAR_7 = VAR_5->nlo_open_owner->noo_mount;
 if (FUNC_4(VAR_7))
  return (VAR_0);
 VAR_10 = (FUNC_0(VAR_7, VAR_1) && VAR_6) ? VAR_4 : 0;

 FUNC_1(&VAR_5->nlo_lock);
 while (VAR_5->nlo_flags & VAR_2) {
  if ((VAR_9 = FUNC_5(VAR_7, ((void*)0), VAR_6, 0)))
   break;
  VAR_5->nlo_flags |= VAR_3;
  FUNC_3(VAR_5, &VAR_5->nlo_lock, VAR_10, "nfs_lock_owner_set_busy", &VAR_8);
  VAR_10 = 0;
 }
 if (!VAR_9)
  VAR_5->nlo_flags |= VAR_2;
 FUNC_2(&VAR_5->nlo_lock);

 return (VAR_9);
}
