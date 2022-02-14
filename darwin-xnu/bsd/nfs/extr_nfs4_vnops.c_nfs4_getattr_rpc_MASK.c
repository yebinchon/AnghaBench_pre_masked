
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int u_int64_t ;
typedef int u_char ;
struct nfsreq_secinfo_args {int dummy; } ;
struct TYPE_9__ {int nfsa_flags; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; TYPE_1__ nm_fsattr; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_vattr {int * nva_acl; int * nva_bitmap; } ;
typedef TYPE_3__* nfsnode_t ;
typedef scalar_t__ mount_t ;
struct TYPE_10__ {int nva_flags; } ;
struct TYPE_11__ {int n_parent; TYPE_2__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_3__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct nfsmount* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,struct nfs_vattr*,int *) ;
 int FUNC_8 (struct nfsm_chain*,int *,struct nfs_vattr*,int *,int *,int *) ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (struct nfsmount*) ;
 int FUNC_10 (TYPE_3__*,scalar_t__,struct nfsm_chain*,int ,int ,int ,int *,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_11 (int,int,int ) ;
 int FUNC_12 (int,struct nfsm_chain*,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,int *,struct nfsmount*,TYPE_3__*) ;
 int FUNC_14 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_15 (int,struct nfsm_chain*,int,int *,size_t) ;
 int FUNC_16 (int,struct nfsm_chain*,int) ;
 int FUNC_17 (int,struct nfsm_chain*) ;
 int FUNC_18 (struct nfsm_chain*) ;
 int FUNC_19 (int,struct nfsm_chain*,int) ;
 int FUNC_20 (struct nfsm_chain*) ;
 int FUNC_21 (int,struct nfsm_chain*,int ) ;
 int FUNC_22 (int,struct nfsm_chain*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;

int
FUNC_26(
 nfsnode_t VAR_16,
 mount_t VAR_17,
 u_char *VAR_18,
 size_t VAR_19,
 int VAR_20,
 vfs_context_t VAR_21,
 struct nfs_vattr *VAR_22,
 u_int64_t *VAR_23)
{
 struct nfsmount *VAR_24 = VAR_17 ? FUNC_5(VAR_17) : FUNC_1(VAR_16);
 int VAR_25 = 0, VAR_26, VAR_27, VAR_28, VAR_29 = 0, VAR_30;
 uint32_t VAR_31[VAR_4];
 struct nfsm_chain VAR_32, VAR_33;
 struct nfsreq_secinfo_args VAR_34;

 if (FUNC_9(VAR_24))
  return (VAR_0);
 VAR_27 = VAR_24->nm_vers;
 VAR_30 = (VAR_24->nm_fsattr.nfsa_flags & VAR_7);

 if (VAR_16 && (VAR_16->n_vattr.nva_flags & VAR_6)) {
  FUNC_7(FUNC_6(VAR_16->n_parent), ((void*)0), 0, VAR_22, ((void*)0));
  return (0);
 }

 if (VAR_20 & VAR_11)
  VAR_29 = VAR_13;

 if (VAR_20 & VAR_12)
  VAR_29 |= VAR_14;

 FUNC_0(&VAR_34, VAR_16, ((void*)0), 0, ((void*)0), 0);
 FUNC_20(&VAR_32);
 FUNC_20(&VAR_33);


 VAR_28 = 2;
 FUNC_16(VAR_25, &VAR_32, 15 * VAR_3);
 FUNC_14(VAR_25, &VAR_32, "getattr", VAR_24->nm_minor_vers, VAR_28);
 VAR_28--;
 FUNC_12(VAR_25, &VAR_32, VAR_9);
 FUNC_15(VAR_25, &VAR_32, VAR_27, VAR_18, VAR_19);
 VAR_28--;
 FUNC_12(VAR_25, &VAR_32, VAR_8);
 FUNC_4(VAR_15, VAR_31);
 if ((VAR_20 & VAR_10) && VAR_30)
  FUNC_3(VAR_31, VAR_5);
 FUNC_13(VAR_25, &VAR_32, VAR_31, VAR_24, VAR_16);
 FUNC_17(VAR_25, &VAR_32);
 FUNC_11(VAR_25, (VAR_28 == 0), VAR_1);
 FUNC_23(VAR_25);
 VAR_25 = FUNC_10(VAR_16, VAR_17, &VAR_32, VAR_2,
   FUNC_24(VAR_21), FUNC_25(VAR_21),
   ((void*)0), VAR_29, &VAR_33, VAR_23, &VAR_26);

 FUNC_22(VAR_25, &VAR_33);
 FUNC_19(VAR_25, &VAR_33, VAR_28);
 FUNC_21(VAR_25, &VAR_33, VAR_9);
 FUNC_21(VAR_25, &VAR_33, VAR_8);
 FUNC_23(VAR_25);
 VAR_25 = FUNC_8(&VAR_33, ((void*)0), VAR_22, ((void*)0), ((void*)0), ((void*)0));
 FUNC_23(VAR_25);
 if ((VAR_20 & VAR_10) && VAR_30 && !FUNC_2(VAR_22->nva_bitmap, VAR_5)) {

  FUNC_3(VAR_22->nva_bitmap, VAR_5);
  VAR_22->nva_acl = ((void*)0);
 }
nfsmout:
 FUNC_18(&VAR_32);
 FUNC_18(&VAR_33);
 return (VAR_25);
}
