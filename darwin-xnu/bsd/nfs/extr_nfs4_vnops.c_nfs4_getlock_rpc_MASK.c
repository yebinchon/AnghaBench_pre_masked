
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_lock_owner {int dummy; } ;
struct flock {scalar_t__ l_type; scalar_t__ l_start; int l_whence; scalar_t__ l_pid; scalar_t__ l_len; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_11__ {int nva_flags; } ;
struct TYPE_12__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,struct nfsreq_secinfo_args*,struct nfsm_chain*,scalar_t__*,int*) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int) ;
 int FUNC_9 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_10 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_11 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_12 (int,struct nfsm_chain*,int ,int ,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,struct nfsmount*,struct nfs_lock_owner*) ;
 int FUNC_14 (int,struct nfsm_chain*,int) ;
 int FUNC_15 (int,struct nfsm_chain*) ;
 int FUNC_16 (struct nfsm_chain*) ;
 int FUNC_17 (int,struct nfsm_chain*,int) ;
 int FUNC_18 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_19 (int,struct nfsm_chain*,TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_20 (struct nfsm_chain*) ;
 int FUNC_21 (int,struct nfsm_chain*,int) ;
 int FUNC_22 (int,struct nfsm_chain*) ;
 int FUNC_23 (int) ;

int
FUNC_24(
 nfsnode_t VAR_20,
 struct nfs_lock_owner *VAR_21,
 struct flock *VAR_22,
 uint64_t VAR_23,
 uint64_t VAR_24,
 vfs_context_t VAR_25)
{
 struct nfsmount *VAR_26;
 struct nfsm_chain VAR_27, VAR_28;
 uint64_t VAR_29, VAR_30 = 0;
 uint32_t VAR_31 = 0;
 int VAR_32 = 0, VAR_33, VAR_34, VAR_35;
 struct nfsreq_secinfo_args VAR_36;

 VAR_26 = FUNC_1(VAR_20);
 if (FUNC_3(VAR_26))
  return (VAR_2);
 if (VAR_20->n_vattr.nva_flags & VAR_10)
  return (VAR_0);

 VAR_33 = VAR_1;
 FUNC_0(&VAR_36, VAR_20, ((void*)0), 0, ((void*)0), 0);
 FUNC_20(&VAR_27);
 FUNC_20(&VAR_28);


 VAR_34 = 3;
 FUNC_14(VAR_32, &VAR_27, 26 * VAR_9);
 FUNC_11(VAR_32, &VAR_27, "locktest", VAR_26->nm_minor_vers, VAR_34);
 VAR_34--;
 FUNC_8(VAR_32, &VAR_27, VAR_15);
 FUNC_12(VAR_32, &VAR_27, VAR_16, VAR_20->n_fhp, VAR_20->n_fhsize);
 VAR_34--;
 FUNC_8(VAR_32, &VAR_27, VAR_13);
 FUNC_10(VAR_32, &VAR_27, VAR_19, VAR_26, VAR_20);
 VAR_34--;
 FUNC_8(VAR_32, &VAR_27, VAR_14);
 FUNC_8(VAR_32, &VAR_27, (VAR_22->l_type == VAR_6) ? VAR_12 : VAR_11);
 FUNC_9(VAR_32, &VAR_27, VAR_23);
 FUNC_9(VAR_32, &VAR_27, FUNC_2(VAR_23, VAR_24));
 FUNC_13(VAR_32, &VAR_27, VAR_26, VAR_21);
 FUNC_15(VAR_32, &VAR_27);
 FUNC_7(VAR_32, (VAR_34 == 0), VAR_3);
 FUNC_23(VAR_32);

 VAR_32 = FUNC_6(VAR_20, ((void*)0), &VAR_27, VAR_8, VAR_25, &VAR_36, &VAR_28, &VAR_29, &VAR_35);

 if ((VAR_33 = FUNC_4(VAR_20)))
  VAR_32 = VAR_33;
 FUNC_22(VAR_32, &VAR_28);
 FUNC_17(VAR_32, &VAR_28, VAR_34);
 FUNC_21(VAR_32, &VAR_28, VAR_15);
 FUNC_23(VAR_32);
 FUNC_21(VAR_32, &VAR_28, VAR_13);
 FUNC_19(VAR_32, &VAR_28, VAR_20, VAR_16, &VAR_29);
 FUNC_23(VAR_32);
 FUNC_21(VAR_32, &VAR_28, VAR_14);
 if (VAR_32 == VAR_7) {
  VAR_32 = 0;
  FUNC_18(VAR_32, &VAR_28, VAR_22->l_start);
  FUNC_18(VAR_32, &VAR_28, VAR_30);
  VAR_22->l_len = (VAR_30 == VAR_18) ? 0 : VAR_30;
  FUNC_17(VAR_32, &VAR_28, VAR_31);
  VAR_22->l_type = (VAR_31 == VAR_12) ? VAR_6 : VAR_4;
  VAR_22->l_pid = 0;
  VAR_22->l_whence = VAR_17;
 } else if (!VAR_32) {
  VAR_22->l_type = VAR_5;
 }
nfsmout:
 if (!VAR_33)
  FUNC_5(VAR_20);
 FUNC_16(&VAR_27);
 FUNC_16(&VAR_28);
 return (VAR_32);
}
