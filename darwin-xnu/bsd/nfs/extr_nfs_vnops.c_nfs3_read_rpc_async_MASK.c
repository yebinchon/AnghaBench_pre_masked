
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_t ;
struct nfsreq_cbinfo {int dummy; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef size_t off_t ;
typedef TYPE_1__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_5__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,int *,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_4 (int,struct nfsm_chain*,size_t) ;
 int FUNC_5 (int,struct nfsm_chain*,size_t) ;
 int FUNC_6 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_8 (int,struct nfsm_chain*) ;
 int FUNC_9 (struct nfsm_chain*) ;
 int FUNC_10 (struct nfsm_chain*) ;
 int FUNC_11 (int) ;

int
FUNC_12(
 nfsnode_t VAR_4,
 off_t VAR_5,
 size_t VAR_6,
 thread_t VAR_7,
 kauth_cred_t VAR_8,
 struct nfsreq_cbinfo *VAR_9,
 struct nfsreq **VAR_10)
{
 struct nfsmount *VAR_11;
 int VAR_12 = 0, VAR_13;
 struct nfsm_chain VAR_14;

 VAR_11 = FUNC_0(VAR_4);
 if (FUNC_2(VAR_11))
  return (VAR_0);
 VAR_13 = VAR_11->nm_vers;

 FUNC_10(&VAR_14);
 FUNC_7(VAR_12, &VAR_14, FUNC_1(VAR_13) + 3 * VAR_2);
 FUNC_6(VAR_12, &VAR_14, VAR_13, VAR_4->n_fhp, VAR_4->n_fhsize);
 if (VAR_13 == VAR_3) {
  FUNC_5(VAR_12, &VAR_14, VAR_5);
  FUNC_4(VAR_12, &VAR_14, VAR_6);
 } else {
  FUNC_4(VAR_12, &VAR_14, VAR_5);
  FUNC_4(VAR_12, &VAR_14, VAR_6);
  FUNC_4(VAR_12, &VAR_14, 0);
 }
 FUNC_8(VAR_12, &VAR_14);
 FUNC_11(VAR_12);
 VAR_12 = FUNC_3(VAR_4, ((void*)0), &VAR_14, VAR_1, VAR_7, VAR_8, ((void*)0), 0, VAR_9, VAR_10);
nfsmout:
 FUNC_9(&VAR_14);
 return (VAR_12);
}
