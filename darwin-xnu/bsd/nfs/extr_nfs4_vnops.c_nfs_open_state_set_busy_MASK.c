
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
struct timespec {int member_0; int member_1; } ;
struct nfsmount {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_4__ {int n_openflags; int n_openlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct nfsmount*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,int,char*,struct timespec*) ;
 scalar_t__ FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (struct nfsmount*,int *,int ,int ) ;

int
FUNC_7(nfsnode_t VAR_5, thread_t VAR_6)
{
 struct nfsmount *VAR_7;
 struct timespec VAR_8 = {2, 0};
 int VAR_9 = 0, VAR_10;

 VAR_7 = FUNC_0(VAR_5);
 if (FUNC_5(VAR_7))
  return (VAR_0);
 VAR_10 = (FUNC_1(VAR_7, VAR_1) && VAR_6) ? VAR_4 : 0;

 FUNC_2(&VAR_5->n_openlock);
 while (VAR_5->n_openflags & VAR_2) {
  if ((VAR_9 = FUNC_6(VAR_7, ((void*)0), VAR_6, 0)))
   break;
  VAR_5->n_openflags |= VAR_3;
  FUNC_4(&VAR_5->n_openflags, &VAR_5->n_openlock, VAR_10, "nfs_open_state_set_busy", &VAR_8);
  VAR_10 = 0;
 }
 if (!VAR_9)
  VAR_5->n_openflags |= VAR_2;
 FUNC_3(&VAR_5->n_openlock);

 return (VAR_9);
}
