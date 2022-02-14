
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uio_t ;
typedef int thread_t ;
struct nfsreq_cbinfo {int dummy; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
typedef int mount_t ;
typedef int kauth_cred_t ;
struct TYPE_6__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct nfsmount* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,int *,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_5 (int,struct nfsm_chain*,size_t) ;
 int FUNC_6 (int,struct nfsm_chain*,size_t) ;
 int FUNC_7 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_8 (struct nfsm_chain*,int ,size_t) ;
 int FUNC_9 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_10 (int,struct nfsm_chain*) ;
 int FUNC_11 (struct nfsm_chain*) ;
 int FUNC_12 (struct nfsm_chain*) ;
 scalar_t__ FUNC_13 (size_t) ;
 int FUNC_14 (int) ;
 size_t FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

int
FUNC_17(
 nfsnode_t VAR_7,
 uio_t VAR_8,
 size_t VAR_9,
 thread_t VAR_10,
 kauth_cred_t VAR_11,
 int VAR_12,
 struct nfsreq_cbinfo *VAR_13,
 struct nfsreq **VAR_14)
{
 struct nfsmount *VAR_15;
 mount_t VAR_16;
 int VAR_17 = 0, VAR_18;
 struct nfsm_chain VAR_19;

 VAR_15 = FUNC_1(VAR_7);
 if (FUNC_3(VAR_15))
  return (VAR_0);
 VAR_18 = VAR_15->nm_vers;


 if ((VAR_12 != VAR_5) && VAR_6 &&
     ((VAR_16 = FUNC_0(VAR_7))) && (FUNC_16(VAR_16) & VAR_1))
  VAR_12 = VAR_5;

 FUNC_12(&VAR_19);
 FUNC_9(VAR_17, &VAR_19,
  FUNC_2(VAR_18) + 5 * VAR_3 + FUNC_13(VAR_9));
 FUNC_7(VAR_17, &VAR_19, VAR_18, VAR_7->n_fhp, VAR_7->n_fhsize);
 if (VAR_18 == VAR_4) {
  FUNC_6(VAR_17, &VAR_19, FUNC_15(VAR_8));
  FUNC_5(VAR_17, &VAR_19, VAR_9);
  FUNC_5(VAR_17, &VAR_19, VAR_12);
 } else {
  FUNC_5(VAR_17, &VAR_19, 0);
  FUNC_5(VAR_17, &VAR_19, FUNC_15(VAR_8));
  FUNC_5(VAR_17, &VAR_19, 0);
 }
 FUNC_5(VAR_17, &VAR_19, VAR_9);
 FUNC_14(VAR_17);
 VAR_17 = FUNC_8(&VAR_19, VAR_8, VAR_9);
 FUNC_10(VAR_17, &VAR_19);
 FUNC_14(VAR_17);
 VAR_17 = FUNC_4(VAR_7, ((void*)0), &VAR_19, VAR_2, VAR_10, VAR_11, ((void*)0), 0, VAR_13, VAR_14);
nfsmout:
 FUNC_11(&VAR_19);
 return (VAR_17);
}
