
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int64_t ;
struct vnode_attr {int va_flags; int va_active; scalar_t__ va_uid; scalar_t__ va_gid; int va_guuid; int va_uuuid; } ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_20__ {scalar_t__* other; scalar_t__ seqid; } ;
typedef TYPE_3__ nfs_stateid ;
struct TYPE_18__ {int nva_flags; scalar_t__ nva_uid; scalar_t__ nva_gid; int nva_guuid; int nva_uuuid; } ;
struct TYPE_19__ {scalar_t__ n_xid; int n_lastio; TYPE_1__ n_vattr; int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_3 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct nfsmount*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_10 (struct vnode_attr*,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int ,int ,TYPE_3__*) ;
 int FUNC_14 (scalar_t__*) ;
 int VAR_20 ;
 scalar_t__ FUNC_15 (struct nfsmount*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,struct nfsreq_secinfo_args*,struct nfsm_chain*,scalar_t__*,int*) ;
 int FUNC_19 (struct nfsmount*,int*,struct vnode_attr*) ;
 int FUNC_20 (int*,struct vnode_attr*) ;
 int FUNC_21 (int,int,int ) ;
 int FUNC_22 (int,struct nfsm_chain*,int ) ;
 int FUNC_23 (int,struct nfsm_chain*,int*,struct nfsmount*,TYPE_2__*) ;
 int FUNC_24 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_25 (int,struct nfsm_chain*,struct vnode_attr*,struct nfsmount*) ;
 int FUNC_26 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_27 (int,struct nfsm_chain*,TYPE_3__*) ;
 int FUNC_28 (int,struct nfsm_chain*,int) ;
 int FUNC_29 (int,struct nfsm_chain*) ;
 int FUNC_30 (struct nfsm_chain*) ;
 int FUNC_31 (int,struct nfsm_chain*,int) ;
 int FUNC_32 (int,struct nfsm_chain*,int*,int) ;
 int FUNC_33 (int,struct nfsm_chain*,TYPE_2__*,int,scalar_t__*) ;
 int FUNC_34 (struct nfsm_chain*) ;
 int FUNC_35 (int,struct nfsm_chain*,int ) ;
 int FUNC_36 (int,struct nfsm_chain*) ;
 int FUNC_37 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;

int
FUNC_40(
 nfsnode_t VAR_29,
 struct vnode_attr *VAR_30,
 vfs_context_t VAR_31)
{
 struct nfsmount *VAR_32 = FUNC_4(VAR_29);
 int VAR_33 = 0, VAR_34 = 0, VAR_35 = VAR_3, VAR_36, VAR_37, VAR_38;
 u_int64_t VAR_39, VAR_40;
 struct nfsm_chain VAR_41, VAR_42;
 uint32_t VAR_43[VAR_9], VAR_44;
 uint32_t VAR_45[VAR_9];
 uint32_t VAR_46[VAR_9];
 nfs_stateid VAR_47;
 struct nfsreq_secinfo_args VAR_48;

 if (FUNC_15(VAR_32))
  return (VAR_5);
 VAR_37 = VAR_32->nm_vers;
 if (VAR_29->n_vattr.nva_flags & VAR_13)
  return (VAR_2);

 if (FUNC_10(VAR_30, VAR_23) && (VAR_30->va_flags & ~(VAR_17|VAR_18))) {

  if (VAR_30->va_active & ~VAR_19)
   return (VAR_2);
  else
   return (VAR_4);
 }


 if (FUNC_10(VAR_30, VAR_27) && (VAR_30->va_uid == VAR_29->n_vattr.nva_uid))
  FUNC_9(VAR_30, VAR_27);
 if (FUNC_10(VAR_30, VAR_24) && (VAR_30->va_gid == VAR_29->n_vattr.nva_gid))
  FUNC_9(VAR_30, VAR_24);
 if (FUNC_10(VAR_30, VAR_28) && FUNC_11(&VAR_30->va_uuuid, &VAR_29->n_vattr.nva_uuuid))
  FUNC_9(VAR_30, VAR_28);
 if (FUNC_10(VAR_30, VAR_25) && FUNC_11(&VAR_30->va_guuid, &VAR_29->n_vattr.nva_guuid))
  FUNC_9(VAR_30, VAR_25);

tryagain:

 FUNC_19(VAR_32, VAR_43, VAR_30);
 if (!VAR_43[0] && !VAR_43[1])
  return (0);

 FUNC_3(&VAR_48, VAR_29, ((void*)0), 0, ((void*)0), 0);
 FUNC_34(&VAR_41);
 FUNC_34(&VAR_42);






 FUNC_7(VAR_20, VAR_45);
 if (FUNC_5(VAR_43, VAR_10) ||
     FUNC_5(VAR_43, VAR_11)) {
  if (FUNC_1(VAR_29))
   FUNC_6(VAR_45, VAR_10);
  FUNC_0(VAR_29);
 }


 VAR_38 = 3;
 FUNC_28(VAR_33, &VAR_41, 40 * VAR_8);
 FUNC_24(VAR_33, &VAR_41, "setattr", VAR_32->nm_minor_vers, VAR_38);
 VAR_38--;
 FUNC_22(VAR_33, &VAR_41, VAR_15);
 FUNC_26(VAR_33, &VAR_41, VAR_37, VAR_29->n_fhp, VAR_29->n_fhsize);
 VAR_38--;
 FUNC_22(VAR_33, &VAR_41, VAR_16);
 if (FUNC_10(VAR_30, VAR_22))
  FUNC_13(VAR_29, FUNC_38(VAR_31), FUNC_39(VAR_31), &VAR_47);
 else
  VAR_47.seqid = VAR_47.other[0] = VAR_47.other[1] = VAR_47.other[2] = 0;
 FUNC_27(VAR_33, &VAR_41, &VAR_47);
 FUNC_25(VAR_33, &VAR_41, VAR_30, VAR_32);
 VAR_38--;
 FUNC_22(VAR_33, &VAR_41, VAR_14);
 FUNC_23(VAR_33, &VAR_41, VAR_45, VAR_32, VAR_29);
 FUNC_29(VAR_33, &VAR_41);
 FUNC_21(VAR_33, (VAR_38 == 0), VAR_6);
 FUNC_37(VAR_33);
 VAR_33 = FUNC_18(VAR_29, ((void*)0), &VAR_41, VAR_7, VAR_31, &VAR_48, &VAR_42, &VAR_39, &VAR_36);

 if ((VAR_35 = FUNC_16(VAR_29)))
  VAR_33 = VAR_35;
 FUNC_36(VAR_33, &VAR_42);
 FUNC_31(VAR_33, &VAR_42, VAR_38);
 FUNC_35(VAR_33, &VAR_42, VAR_15);
 FUNC_37(VAR_33);
 FUNC_35(VAR_33, &VAR_42, VAR_16);
 FUNC_37(VAR_33 == VAR_1);
 VAR_34 = VAR_33;
 VAR_33 = 0;
 VAR_44 = VAR_9;
 FUNC_32(VAR_33, &VAR_42, VAR_46, VAR_44);
 if (!VAR_33) {
  if (FUNC_10(VAR_30, VAR_22) && (VAR_29->n_vattr.nva_flags & VAR_12))
   FUNC_12(&VAR_29->n_lastio);
  FUNC_20(VAR_46, VAR_30);
  VAR_33 = VAR_34;
 }
 FUNC_35(VAR_33, &VAR_42, VAR_14);
 FUNC_33(VAR_33, &VAR_42, VAR_29, VAR_37, &VAR_39);
 if (VAR_33)
  FUNC_2(VAR_29);
 VAR_40 = 0;
 FUNC_14(&VAR_40);
 if (VAR_40 != (VAR_39 + 1)) {
  VAR_29->n_xid = VAR_40;
  FUNC_2(VAR_29);
 }
nfsmout:
 if (!VAR_35)
  FUNC_17(VAR_29);
 FUNC_30(&VAR_41);
 FUNC_30(&VAR_42);
 if ((VAR_34 == VAR_2) && FUNC_10(VAR_30, VAR_21) && FUNC_10(VAR_30, VAR_26) && !FUNC_8(VAR_32, VAR_0)) {






  if (((VAR_43[0] & VAR_46[0]) != VAR_43[0]) ||
      ((VAR_43[1] & (VAR_46[1]|VAR_11)) != VAR_43[1])) {
   FUNC_9(VAR_30, VAR_26);
   VAR_33 = 0;
   goto tryagain;
  }
 }
 return (VAR_33);
}
