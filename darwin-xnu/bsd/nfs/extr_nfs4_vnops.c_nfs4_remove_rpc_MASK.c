
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_state; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_13__ {int nva_flags; } ;
struct TYPE_14__ {int n_flag; int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,struct nfsm_chain*,int *,int*) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int ) ;
 int FUNC_9 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_10 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_11 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_12 (int,struct nfsm_chain*,char*,int,struct nfsmount*) ;
 int FUNC_13 (int,struct nfsm_chain*,int) ;
 int FUNC_14 (int,struct nfsm_chain*) ;
 int FUNC_15 (int,struct nfsm_chain*,TYPE_2__*) ;
 int FUNC_16 (struct nfsm_chain*) ;
 int FUNC_17 (int,struct nfsm_chain*,int) ;
 int FUNC_18 (int,struct nfsm_chain*,TYPE_2__*,int,int *) ;
 int FUNC_19 (struct nfsm_chain*) ;
 int FUNC_20 (int,struct nfsm_chain*,int ) ;
 int FUNC_21 (int,struct nfsm_chain*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int *,scalar_t__,char*,int) ;

int
FUNC_24(
 nfsnode_t VAR_15,
 char *VAR_16,
 int VAR_17,
 thread_t VAR_18,
 kauth_cred_t VAR_19)
{
 int VAR_20 = 0, VAR_21 = VAR_1, VAR_22 = 0, VAR_23;
 struct nfsmount *VAR_24;
 int VAR_25, VAR_26;
 u_int64_t VAR_27;
 struct nfsm_chain VAR_28, VAR_29;
 struct nfsreq_secinfo_args VAR_30;

 VAR_24 = FUNC_2(VAR_15);
 if (FUNC_3(VAR_24))
  return (VAR_2);
 VAR_25 = VAR_24->nm_vers;
 if (VAR_15->n_vattr.nva_flags & VAR_7)
  return (VAR_0);
 FUNC_1(&VAR_30, VAR_15, ((void*)0), 0, ((void*)0), 0);
restart:
 FUNC_19(&VAR_28);
 FUNC_19(&VAR_29);


 VAR_26 = 3;
 FUNC_13(VAR_20, &VAR_28, 17 * VAR_6 + VAR_17);
 FUNC_10(VAR_20, &VAR_28, "remove", VAR_24->nm_minor_vers, VAR_26);
 VAR_26--;
 FUNC_8(VAR_20, &VAR_28, VAR_9);
 FUNC_11(VAR_20, &VAR_28, VAR_25, VAR_15->n_fhp, VAR_15->n_fhsize);
 VAR_26--;
 FUNC_8(VAR_20, &VAR_28, VAR_10);
 FUNC_12(VAR_20, &VAR_28, VAR_16, VAR_17, VAR_24);
 VAR_26--;
 FUNC_8(VAR_20, &VAR_28, VAR_8);
 FUNC_9(VAR_20, &VAR_28, VAR_14, VAR_24, VAR_15);
 FUNC_14(VAR_20, &VAR_28);
 FUNC_7(VAR_20, (VAR_26 == 0), VAR_3);
 FUNC_22(VAR_20);

 VAR_20 = FUNC_6(VAR_15, ((void*)0), &VAR_28, VAR_5, VAR_18, VAR_19, &VAR_30, 0, &VAR_29, &VAR_27, &VAR_23);

 if ((VAR_21 = FUNC_4(VAR_15)))
  VAR_20 = VAR_21;
 FUNC_21(VAR_20, &VAR_29);
 FUNC_17(VAR_20, &VAR_29, VAR_26);
 FUNC_20(VAR_20, &VAR_29, VAR_9);
 FUNC_20(VAR_20, &VAR_29, VAR_10);
 VAR_22 = VAR_20;
 FUNC_15(VAR_20, &VAR_29, VAR_15);
 FUNC_20(VAR_20, &VAR_29, VAR_8);
 FUNC_18(VAR_20, &VAR_29, VAR_15, VAR_25, &VAR_27);
 if (VAR_20 && !VAR_21)
  FUNC_0(VAR_15);
nfsmout:
 FUNC_16(&VAR_28);
 FUNC_16(&VAR_29);

 if (!VAR_21) {
  VAR_15->n_flag |= VAR_11;
  FUNC_5(VAR_15);
 }
 if (VAR_20 == VAR_4) {
  FUNC_23(&VAR_24->nm_state, (VAR_12-1), "nfsgrace", 2*VAR_13);
  goto restart;
 }

 return (VAR_22);
}
