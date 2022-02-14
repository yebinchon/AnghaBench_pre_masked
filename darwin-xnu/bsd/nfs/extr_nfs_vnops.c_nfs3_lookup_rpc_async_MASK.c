
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vfs_context_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_5__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,int *,int ,int *,struct nfsreq**) ;
 int FUNC_4 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_5 (int,struct nfsm_chain*,char*,int,struct nfsmount*) ;
 int FUNC_6 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_7 (int,struct nfsm_chain*) ;
 int FUNC_8 (struct nfsm_chain*) ;
 int FUNC_9 (struct nfsm_chain*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

int
FUNC_14(
 nfsnode_t VAR_3,
 char *VAR_4,
 int VAR_5,
 vfs_context_t VAR_6,
 struct nfsreq **VAR_7)
{
 struct nfsmount *VAR_8;
 struct nfsm_chain VAR_9;
 int VAR_10 = 0, VAR_11;

 VAR_8 = FUNC_0(VAR_3);
 if (FUNC_2(VAR_8))
  return (VAR_0);
 VAR_11 = VAR_8->nm_vers;

 FUNC_9(&VAR_9);

 FUNC_6(VAR_10, &VAR_9,
  FUNC_1(VAR_11) + VAR_2 + FUNC_10(VAR_5));
 FUNC_4(VAR_10, &VAR_9, VAR_11, VAR_3->n_fhp, VAR_3->n_fhsize);
 FUNC_5(VAR_10, &VAR_9, VAR_4, VAR_5, VAR_8);
 FUNC_7(VAR_10, &VAR_9);
 FUNC_11(VAR_10);
 VAR_10 = FUNC_3(VAR_3, ((void*)0), &VAR_9, VAR_1,
   FUNC_12(VAR_6), FUNC_13(VAR_6), ((void*)0), 0, ((void*)0), VAR_7);
nfsmout:
 FUNC_8(&VAR_9);
 return (VAR_10);
}
