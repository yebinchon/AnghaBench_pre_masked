
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int64_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_state; int nm_vers; scalar_t__ nm_verf; int nm_lock; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_12__ {int nva_flags; } ;
struct TYPE_13__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_2__*,scalar_t__,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 int VAR_5 ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (struct nfsmount*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,struct nfsm_chain*,scalar_t__*,int*) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_12 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_13 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_14 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_15 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_16 (int,struct nfsm_chain*,int) ;
 int FUNC_17 (int,struct nfsm_chain*) ;
 int FUNC_18 (struct nfsm_chain*) ;
 int FUNC_19 (int,struct nfsm_chain*,int) ;
 int FUNC_20 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_21 (int,struct nfsm_chain*,TYPE_2__*,int,scalar_t__*) ;
 int FUNC_22 (struct nfsm_chain*) ;
 int FUNC_23 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_24 (int,struct nfsm_chain*) ;
 int FUNC_25 (int) ;

int
FUNC_26(
 nfsnode_t VAR_13,
 uint64_t VAR_14,
 uint64_t VAR_15,
 kauth_cred_t VAR_16,
 uint64_t VAR_17)
{
 struct nfsmount *VAR_18;
 int VAR_19 = 0, VAR_20, VAR_21, VAR_22, VAR_23;
 u_int64_t VAR_24, VAR_25;
 uint32_t VAR_26;
 struct nfsm_chain VAR_27, VAR_28;
 struct nfsreq_secinfo_args VAR_29;

 VAR_18 = FUNC_2(VAR_13);
 FUNC_0(521, VAR_13, VAR_14, VAR_15, VAR_18 ? VAR_18->nm_state : 0);
 if (FUNC_6(VAR_18))
  return (VAR_1);
 if (VAR_13->n_vattr.nva_flags & VAR_7)
  return (VAR_0);
 if (!(VAR_18->nm_state & VAR_5))
  return (0);
 VAR_22 = VAR_18->nm_vers;

 if (VAR_15 > VAR_11)
  VAR_26 = 0;
 else
  VAR_26 = VAR_15;

 FUNC_1(&VAR_29, VAR_13, ((void*)0), 0, ((void*)0), 0);
 FUNC_22(&VAR_27);
 FUNC_22(&VAR_28);


 VAR_23 = 3;
 FUNC_16(VAR_19, &VAR_27, 19 * VAR_6);
 FUNC_14(VAR_19, &VAR_27, "commit", VAR_18->nm_minor_vers, VAR_23);
 VAR_23--;
 FUNC_11(VAR_19, &VAR_27, VAR_10);
 FUNC_15(VAR_19, &VAR_27, VAR_22, VAR_13->n_fhp, VAR_13->n_fhsize);
 VAR_23--;
 FUNC_11(VAR_19, &VAR_27, VAR_8);
 FUNC_12(VAR_19, &VAR_27, VAR_14);
 FUNC_11(VAR_19, &VAR_27, VAR_26);
 VAR_23--;
 FUNC_11(VAR_19, &VAR_27, VAR_9);
 FUNC_13(VAR_19, &VAR_27, VAR_12, VAR_18, VAR_13);
 FUNC_17(VAR_19, &VAR_27);
 FUNC_10(VAR_19, (VAR_23 == 0), VAR_2);
 FUNC_25(VAR_19);
 VAR_19 = FUNC_9(VAR_13, ((void*)0), &VAR_27, VAR_4,
   FUNC_3(), VAR_16, &VAR_29, 0, &VAR_28, &VAR_24, &VAR_21);

 if ((VAR_20 = FUNC_7(VAR_13)))
  VAR_19 = VAR_20;
 FUNC_24(VAR_19, &VAR_28);
 FUNC_19(VAR_19, &VAR_28, VAR_23);
 FUNC_23(VAR_19, &VAR_28, VAR_10);
 FUNC_23(VAR_19, &VAR_28, VAR_8);
 FUNC_20(VAR_19, &VAR_28, VAR_25);
 FUNC_23(VAR_19, &VAR_28, VAR_9);
 FUNC_21(VAR_19, &VAR_28, VAR_13, VAR_22, &VAR_24);
 if (!VAR_20)
  FUNC_8(VAR_13);
 FUNC_25(VAR_19);
 FUNC_4(&VAR_18->nm_lock);
 if (VAR_18->nm_verf != VAR_25)
  VAR_18->nm_verf = VAR_25;
 if (VAR_17 != VAR_25)
  VAR_19 = VAR_3;
 FUNC_5(&VAR_18->nm_lock);
nfsmout:
 FUNC_18(&VAR_27);
 FUNC_18(&VAR_28);
 return (VAR_19);
}
