
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int64_t ;
struct timespec {int member_1; int member_0; } ;
struct nfsmount {int nm_state; int nm_vers; scalar_t__ nm_verf; int nm_lock; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_9__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*,scalar_t__,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct nfsmount*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,int *,int ,struct nfsm_chain*,scalar_t__*,int*) ;
 int FUNC_10 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_11 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_12 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,int ) ;
 int FUNC_14 (int,struct nfsm_chain*) ;
 int FUNC_15 (struct nfsm_chain*) ;
 int FUNC_16 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_17 (int,struct nfsm_chain*,TYPE_1__*,struct timespec*,int*,scalar_t__*) ;
 int FUNC_18 (struct nfsm_chain*) ;
 int FUNC_19 (int) ;

int
FUNC_20(
 nfsnode_t VAR_6,
 uint64_t VAR_7,
 uint64_t VAR_8,
 kauth_cred_t VAR_9,
 uint64_t VAR_10)
{
 struct nfsmount *VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14, VAR_15 = 0, VAR_16;
 struct timespec VAR_17 = { 0, 0 };
 u_int64_t VAR_18, VAR_19;
 uint32_t VAR_20;
 struct nfsm_chain VAR_21, VAR_22;

 VAR_11 = FUNC_1(VAR_6);
 FUNC_0(521, VAR_6, VAR_7, VAR_8, VAR_11 ? VAR_11->nm_state : 0);
 if (FUNC_6(VAR_11))
  return (VAR_0);
 if (!(VAR_11->nm_state & VAR_3))
  return (0);
 VAR_16 = VAR_11->nm_vers;

 if (VAR_8 > VAR_5)
  VAR_20 = 0;
 else
  VAR_20 = VAR_8;

 FUNC_18(&VAR_21);
 FUNC_18(&VAR_22);

 FUNC_13(VAR_12, &VAR_21, FUNC_2(VAR_4));
 FUNC_12(VAR_12, &VAR_21, VAR_16, VAR_6->n_fhp, VAR_6->n_fhsize);
 FUNC_11(VAR_12, &VAR_21, VAR_7);
 FUNC_10(VAR_12, &VAR_21, VAR_20);
 FUNC_14(VAR_12, &VAR_21);
 FUNC_19(VAR_12);
 VAR_12 = FUNC_9(VAR_6, ((void*)0), &VAR_21, VAR_2,
   FUNC_3(), VAR_9, ((void*)0), 0, &VAR_22, &VAR_18, &VAR_14);
 if ((VAR_13 = FUNC_7(VAR_6)))
  VAR_12 = VAR_13;

 FUNC_17(VAR_12, &VAR_22, VAR_6, &VAR_17, &VAR_15, &VAR_18);
 if (!VAR_13)
  FUNC_8(VAR_6);
 if (!VAR_12)
  VAR_12 = VAR_14;
 FUNC_16(VAR_12, &VAR_22, VAR_19);
 FUNC_19(VAR_12);
 FUNC_4(&VAR_11->nm_lock);
 if (VAR_11->nm_verf != VAR_19)
  VAR_11->nm_verf = VAR_19;
 if (VAR_10 != VAR_19)
  VAR_12 = VAR_1;
 FUNC_5(&VAR_11->nm_lock);
nfsmout:
 FUNC_15(&VAR_21);
 FUNC_15(&VAR_22);
 return (VAR_12);
}
