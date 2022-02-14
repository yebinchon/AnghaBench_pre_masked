
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uint64_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct timespec {int member_0; int member_1; } ;
struct nfsmount {int nm_vers; TYPE_2__* nm_funcs; } ;
struct nfs_vattr {int * nva_acl; int nva_bitmap; } ;
typedef TYPE_3__* nfsnode_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
struct TYPE_26__ {int nva_size; } ;
struct TYPE_28__ {int n_flag; int n_openflags; int n_xid; TYPE_1__ n_vattr; int n_size; int n_ncgen; int n_fhsize; int n_fhp; int n_lock; } ;
struct TYPE_27__ {int (* nf_access_rpc ) (TYPE_3__*,int *,int,int ) ;int (* nf_getattr_rpc ) (TYPE_3__*,int *,int ,int ,int,int ,struct nfs_vattr*,int *) ;} ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,TYPE_3__*,int,...) ;
 int FUNC_2 (int,int ,int,int ,int) ;
 int FUNC_3 (int,int ,TYPE_3__*,int ,int) ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_5 ;
 struct nfsmount* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int,TYPE_3__*,struct nfs_vattr*) ;
 scalar_t__ FUNC_10 (int,TYPE_3__*,struct nfs_vattr*) ;
 int FUNC_11 (int,TYPE_3__*,struct nfs_vattr*) ;
 int FUNC_12 (int,TYPE_3__*,struct nfs_vattr*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (struct nfs_vattr*) ;
 int FUNC_15 (struct nfs_vattr*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_16 (int,int) ;
 int VAR_22 ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_23 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_3__*,int *,scalar_t__,char*,struct timespec*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (TYPE_3__*,struct nfs_vattr*,int) ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (TYPE_3__*,struct nfs_vattr*,int *,int ) ;
 scalar_t__ FUNC_26 (struct nfsmount*) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (TYPE_3__*) ;
 int FUNC_29 (TYPE_3__*) ;
 int FUNC_30 (struct nfsmount*,int *,int ,int ) ;
 scalar_t__ FUNC_31 (struct nfsmount*) ;
 int FUNC_32 (int ,int ,int ,int) ;
 int FUNC_33 (int) ;
 int FUNC_34 (TYPE_3__*,int *,int,int ) ;
 int FUNC_35 (TYPE_3__*,int *,int ,int ,int,int ,struct nfs_vattr*,int *) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (TYPE_3__*) ;

int
FUNC_39(nfsnode_t VAR_26, struct nfs_vattr *VAR_27, vfs_context_t VAR_28, int VAR_29)
{
 struct nfsmount *VAR_30;
 int VAR_31 = 0, VAR_32, VAR_33 = 0, VAR_34 = 0, VAR_35;
 struct nfs_vattr VAR_36;
 struct timespec VAR_37 = { 2, 0 };
 u_int64_t VAR_38;

 FUNC_3(513, VAR_26->n_size, VAR_26, VAR_26->n_vattr.nva_size, VAR_26->n_flag);

 VAR_30 = FUNC_6(VAR_26);

 if (FUNC_26(VAR_30))
  return (VAR_2);
 VAR_32 = VAR_30->nm_vers;

 if (!VAR_27)
  VAR_27 = &VAR_36;
 FUNC_15(VAR_27);


 if (VAR_26->n_flag & (VAR_4 | VAR_17)) {
  FUNC_28(VAR_26);
  VAR_26->n_flag |= VAR_5;
  FUNC_29(VAR_26);
 }

 if (FUNC_4(VAR_26->n_flag, VAR_18))
  FUNC_22(VAR_26, 0);

 VAR_31 = FUNC_27(VAR_26);
 FUNC_33(VAR_31);
 if (!(VAR_29 & (VAR_13|VAR_11)) || ((VAR_32 >= VAR_9) && (VAR_26->n_openflags & VAR_19))) {






  while (1) {
   VAR_31 = FUNC_23(VAR_26, VAR_27, VAR_29);
   if (!VAR_31 || (VAR_31 != VAR_1)) {
    FUNC_29(VAR_26);
    goto nfsmout;
   }
   VAR_31 = 0;
   if (!FUNC_4(VAR_26->n_flag, VAR_14))
    break;
   if (VAR_29 & VAR_11) {

    VAR_31 = VAR_0;
    FUNC_29(VAR_26);
    goto nfsmout;
   }
   FUNC_16(VAR_26->n_flag, VAR_15);
   FUNC_20(VAR_26, &VAR_26->n_lock, VAR_20-1, "nfsgetattrwant", &VAR_37);
   if ((VAR_31 = FUNC_30(FUNC_6(VAR_26), ((void*)0), FUNC_36(VAR_28), 0))) {
    FUNC_29(VAR_26);
    goto nfsmout;
   }
  }
  FUNC_16(VAR_26->n_flag, VAR_14);
  VAR_33 = 1;
 } else if (!FUNC_4(VAR_26->n_flag, VAR_14)) {
  FUNC_16(VAR_26->n_flag, VAR_14);
  VAR_33 = 1;
 } else if (VAR_29 & VAR_11) {

  VAR_31 = VAR_0;
 }
 FUNC_29(VAR_26);

 VAR_30 = FUNC_6(VAR_26);
 if (FUNC_26(VAR_30))
  VAR_31 = VAR_2;
 if (VAR_31)
  goto nfsmout;






 if (FUNC_5(VAR_26) && FUNC_31(VAR_30))
  VAR_29 |= VAR_12;







 if (!(VAR_29 & VAR_10) && (VAR_32 != VAR_8) && VAR_25 && (VAR_24 > 0)) {
  if (FUNC_21(VAR_26) > 0) {

   u_int32_t VAR_39 = VAR_6;
   int VAR_40 = 0;


   if (VAR_29 & VAR_12)
    VAR_40 |= VAR_21;

   VAR_31 = VAR_30->nm_funcs->nf_access_rpc(VAR_26, &VAR_39, VAR_40, VAR_28);

   if (VAR_31 == VAR_3)
    goto returncached;

   if (VAR_31)
    goto nfsmout;
   FUNC_28(VAR_26);
   VAR_31 = FUNC_23(VAR_26, VAR_27, VAR_29);
   FUNC_29(VAR_26);
   if (!VAR_31 || (VAR_31 != VAR_1))
    goto nfsmout;

   VAR_31 = 0;
  }
 }

 VAR_35 = 0;

tryagain:
 VAR_31 = VAR_30->nm_funcs->nf_getattr_rpc(VAR_26, ((void*)0), VAR_26->n_fhp, VAR_26->n_fhsize, VAR_29, VAR_28, VAR_27, &VAR_38);
 if (!VAR_31) {
  FUNC_28(VAR_26);
  VAR_31 = FUNC_25(VAR_26, VAR_27, &VAR_38, 0);
  FUNC_29(VAR_26);
 }




returncached:
 if ((VAR_29 & VAR_12) && (VAR_31 == VAR_3)) {
  FUNC_28(VAR_26);
  VAR_31 = FUNC_23(VAR_26, VAR_27, VAR_29);
  if (!VAR_31 || (VAR_31 != VAR_1)) {
   FUNC_29(VAR_26);
   goto nfsmout;
  }
  FUNC_29(VAR_26);
 }
 FUNC_33(VAR_31);

 if (!VAR_38) {
  FUNC_1(513, -1, VAR_26, VAR_26->n_xid >> 32, VAR_26->n_xid);
  if (VAR_35++ < 20)
   goto tryagain;


 }
nfsmout:
 FUNC_28(VAR_26);
 if (VAR_33) {
  VAR_34 = FUNC_4(VAR_26->n_flag, VAR_15);
  FUNC_0(VAR_26->n_flag, (VAR_14 | VAR_15));
 }
 if (!VAR_31) {

  vnode_t VAR_41 = FUNC_7(VAR_26);
  enum vtype VAR_42 = FUNC_37(VAR_41);
  if ((VAR_42 == VAR_22) && FUNC_10(VAR_32, VAR_26, VAR_27)) {
   FUNC_1(513, -1, VAR_26, 0, VAR_26);
   VAR_26->n_flag &= ~VAR_16;
   FUNC_18(VAR_41);
   VAR_26->n_ncgen++;
   FUNC_12(VAR_32, VAR_26, VAR_27);
   FUNC_13("Purge directory 0x%llx\n",
         (uint64_t)FUNC_17(VAR_41));
  }
  if (FUNC_9(VAR_32, VAR_26, VAR_27)) {
   FUNC_1(513, -1, VAR_26, -1, VAR_26);
   if (VAR_42 == VAR_22) {
    FUNC_13("Invalidate directory 0x%llx\n",
                  (uint64_t)FUNC_17(VAR_41));
    FUNC_24(VAR_26);
   }
   FUNC_29(VAR_26);
   if (VAR_34)
    FUNC_38(VAR_26);
   VAR_31 = FUNC_32(VAR_41, VAR_23, VAR_28, 1);
   FUNC_1(513, -1, VAR_26, -2, VAR_31);
   if (!VAR_31) {
    FUNC_28(VAR_26);
    FUNC_11(VAR_32, VAR_26, VAR_27);
    FUNC_29(VAR_26);
   }
  } else {
   FUNC_29(VAR_26);
   if (VAR_34)
    FUNC_38(VAR_26);
  }
 } else {
  FUNC_29(VAR_26);
  if (VAR_34)
   FUNC_38(VAR_26);
 }

 if (VAR_27 == &VAR_36) {
  FUNC_14(VAR_27);
 } else if (!(VAR_29 & VAR_10)) {

  FUNC_8(VAR_27->nva_bitmap, VAR_7);
  if (VAR_27->nva_acl) {
   FUNC_19(VAR_27->nva_acl);
   VAR_27->nva_acl = ((void*)0);
  }
 }
 FUNC_2(513, VAR_26->n_size, VAR_31, VAR_26->n_vattr.nva_size, VAR_26->n_flag);
 return (VAR_31);
}
