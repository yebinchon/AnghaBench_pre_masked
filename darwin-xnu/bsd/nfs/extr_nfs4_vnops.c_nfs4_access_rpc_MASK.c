
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int uid_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct timeval {int tv_sec; } ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_auth; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_15__ {int nva_flags; } ;
struct TYPE_16__ {int n_flag; int* n_access; int * n_accessstamp; int * n_accessuid; int n_auth; int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;
struct TYPE_14__ {int n_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_10__* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct timeval*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_8 (struct nfsmount*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_13 (int,int,int ) ;
 int FUNC_14 (int,struct nfsm_chain*,int) ;
 int FUNC_15 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_16 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_17 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_18 (int,struct nfsm_chain*,int) ;
 int FUNC_19 (int,struct nfsm_chain*) ;
 int FUNC_20 (struct nfsm_chain*) ;
 int FUNC_21 (int,struct nfsm_chain*,int) ;
 int FUNC_22 (int,struct nfsm_chain*,TYPE_2__*,int,int *) ;
 int FUNC_23 (struct nfsm_chain*) ;
 int FUNC_24 (int,struct nfsm_chain*,int) ;
 int FUNC_25 (int,struct nfsm_chain*) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (scalar_t__) ;

int
FUNC_31(nfsnode_t VAR_17, u_int32_t *VAR_18, int VAR_19, vfs_context_t VAR_20)
{
 int VAR_21 = 0, VAR_22 = VAR_0, VAR_23, VAR_24, VAR_25;
 u_int64_t VAR_26;
 struct nfsm_chain VAR_27, VAR_28;
 struct timeval VAR_29;
 uint32_t VAR_30 = 0, VAR_31 = 0, VAR_32;
 struct nfsmount *VAR_33 = FUNC_1(VAR_17);
 int VAR_34 = VAR_33->nm_vers;
 uid_t VAR_35;
 struct nfsreq_secinfo_args VAR_36;

 if (VAR_17->n_vattr.nva_flags & VAR_8)
  return (0);

 FUNC_0(&VAR_36, VAR_17, ((void*)0), 0, ((void*)0), 0);
 FUNC_23(&VAR_27);
 FUNC_23(&VAR_28);


 VAR_24 = 3;
 FUNC_18(VAR_21, &VAR_27, 17 * VAR_4);
 FUNC_16(VAR_21, &VAR_27, "access", VAR_33->nm_minor_vers, VAR_24);
 VAR_24--;
 FUNC_14(VAR_21, &VAR_27, VAR_11);
 FUNC_17(VAR_21, &VAR_27, VAR_34, VAR_17->n_fhp, VAR_17->n_fhsize);
 VAR_24--;
 FUNC_14(VAR_21, &VAR_27, VAR_9);
 FUNC_14(VAR_21, &VAR_27, *VAR_18);
 VAR_24--;
 FUNC_14(VAR_21, &VAR_27, VAR_10);
 FUNC_15(VAR_21, &VAR_27, VAR_16, VAR_33, VAR_17);
 FUNC_19(VAR_21, &VAR_27);
 FUNC_13(VAR_21, (VAR_24 == 0), VAR_2);
 FUNC_26(VAR_21);
 VAR_21 = FUNC_12(VAR_17, ((void*)0), &VAR_27, VAR_3,
  FUNC_27(VAR_20), FUNC_28(VAR_20),
  &VAR_36, VAR_19, &VAR_28, &VAR_26, &VAR_23);

 if ((VAR_22 = FUNC_10(VAR_17)))
  VAR_21 = VAR_22;
 FUNC_25(VAR_21, &VAR_28);
 FUNC_21(VAR_21, &VAR_28, VAR_24);
 FUNC_24(VAR_21, &VAR_28, VAR_11);
 FUNC_24(VAR_21, &VAR_28, VAR_9);
 FUNC_21(VAR_21, &VAR_28, VAR_31);
 FUNC_21(VAR_21, &VAR_28, VAR_30);
 FUNC_26(VAR_21);
 if ((VAR_32 = (*VAR_18 & ~VAR_31))) {

  if (VAR_32 & VAR_5) {






   VAR_30 |= VAR_5;
  }
 }

 if (VAR_15) {
  vnode_t VAR_37 = VAR_13;
  if (VAR_17->n_flag & VAR_12)
   VAR_30 |= (VAR_7|VAR_6|VAR_5);
  else if (((VAR_37 = FUNC_29(FUNC_2(VAR_17))) != VAR_13) && (FUNC_3(VAR_37)->n_flag & VAR_12))
   VAR_30 |= VAR_5;
  if (VAR_37 != VAR_13)
   FUNC_30(VAR_37);
 }

 if (VAR_14 && (*VAR_18 & VAR_5) && !(VAR_30 & VAR_5))
  VAR_30 |= VAR_5;
 FUNC_24(VAR_21, &VAR_28, VAR_10);
 FUNC_22(VAR_21, &VAR_28, VAR_17, VAR_34, &VAR_26);
 FUNC_26(VAR_21);

 if (FUNC_8(VAR_33)) {
  VAR_21 = VAR_1;
 }
 FUNC_26(VAR_21);

 if (FUNC_4(VAR_17->n_auth) || FUNC_4(VAR_33->nm_auth)) {
  VAR_35 = FUNC_7(FUNC_28(VAR_20));
 } else {
  VAR_35 = FUNC_5(FUNC_28(VAR_20));
 }
 VAR_25 = FUNC_9(VAR_17, VAR_35, 1);
 VAR_17->n_accessuid[VAR_25] = VAR_35;
 FUNC_6(&VAR_29);
 VAR_17->n_accessstamp[VAR_25] = VAR_29.tv_sec;
 VAR_17->n_access[VAR_25] = VAR_30;


 *VAR_18 = VAR_17->n_access[VAR_25];
nfsmout:
 if (!VAR_22)
  FUNC_11(VAR_17);
 FUNC_20(&VAR_27);
 FUNC_20(&VAR_28);
 return (VAR_21);
}
