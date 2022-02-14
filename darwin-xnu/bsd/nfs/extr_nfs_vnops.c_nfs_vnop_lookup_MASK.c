
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef int u_int64_t ;
struct vnop_lookup_args {scalar_t__* a_vpp; scalar_t__ a_dvp; struct componentname* a_cnp; int a_context; } ;
struct vnop_access_args {int a_context; int a_action; scalar_t__ a_vp; int * a_desc; } ;
struct nfsreq {int r_auth; } ;
struct TYPE_24__ {scalar_t__ nfsa_maxname; int nfsa_bitmap; } ;
struct nfsmount {int nm_vers; TYPE_3__* nm_funcs; TYPE_2__ nm_fsattr; } ;
struct nfs_vattr {int dummy; } ;
struct componentname {int cn_flags; char* cn_nameptr; int cn_namelen; int cn_nameiop; } ;
typedef TYPE_4__* nfsnode_t ;
typedef scalar_t__ mount_t ;
struct TYPE_27__ {scalar_t__ fh_len; int fh_data; } ;
typedef TYPE_5__ fhandle_t ;
struct TYPE_28__ {int lookupcache_misses; int lookupcache_hits; } ;
struct TYPE_23__ {int nva_flags; } ;
struct TYPE_26__ {int n_flag; int n_xid; TYPE_1__ n_vattr; } ;
struct TYPE_25__ {int (* nf_lookup_rpc_async ) (TYPE_4__*,char*,int,int ,struct nfsreq**) ;int (* nf_lookup_rpc_async_finish ) (TYPE_4__*,char*,int,int ,struct nfsreq*,int *,TYPE_5__*,struct nfs_vattr*) ;} ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct nfsmount*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (struct nfs_vattr*) ;
 int FUNC_5 (struct nfs_vattr*) ;
 int FUNC_6 (int,int *) ;
 int VAR_18 ;

 struct nfsmount* FUNC_7 (scalar_t__) ;
 TYPE_4__* FUNC_8 (scalar_t__) ;
 struct nfsmount* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int *,struct componentname*) ;
 int FUNC_11 (scalar_t__,scalar_t__*,struct componentname*) ;
 int FUNC_12 (TYPE_4__*,TYPE_4__**,struct componentname*,int ,int ) ;
 int FUNC_13 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_14 (TYPE_4__*,struct nfs_vattr*,int *,int ) ;
 scalar_t__ FUNC_15 (struct nfsmount*) ;
 int FUNC_16 (scalar_t__,TYPE_4__*,struct componentname*,int ,scalar_t__,struct nfs_vattr*,int *,int ,int,TYPE_4__**) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int ) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (struct vnop_access_args*) ;
 int FUNC_22 (int) ;
 TYPE_9__ VAR_19 ;
 int FUNC_23 (TYPE_4__*,char*,int,int ,struct nfsreq**) ;
 int FUNC_24 (TYPE_4__*,char*,int,int ,struct nfsreq*,int *,TYPE_5__*,struct nfs_vattr*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int FUNC_29 (scalar_t__) ;
 scalar_t__ FUNC_30 (scalar_t__) ;
 int VAR_20 ;

int
FUNC_31(
 struct vnop_lookup_args *VAR_21)






{
 vfs_context_t VAR_22 = VAR_21->a_context;
 struct componentname *VAR_23 = VAR_21->a_cnp;
 vnode_t VAR_24 = VAR_21->a_dvp;
 vnode_t *VAR_25 = VAR_21->a_vpp;
 int VAR_26 = VAR_23->cn_flags;
 vnode_t VAR_27;
 nfsnode_t VAR_28, VAR_29;
 struct nfsmount *VAR_30;
 mount_t VAR_31;
 int VAR_32, VAR_33, VAR_34 = 129, VAR_35, VAR_36, VAR_37;
 u_int64_t VAR_38;
 struct nfs_vattr VAR_39;
 int VAR_40;
 struct vnop_access_args VAR_41;
 fhandle_t VAR_42;
 struct nfsreq VAR_43, *VAR_44 = &VAR_43;

 *VAR_25 = VAR_17;

 VAR_28 = FUNC_8(VAR_24);
 FUNC_5(&VAR_39);

 VAR_31 = FUNC_28(VAR_24);
 VAR_30 = FUNC_7(VAR_31);
 if (FUNC_15(VAR_30)) {
  VAR_33 = VAR_4;
  goto error_return;
 }
 VAR_32 = VAR_30->nm_vers;
 VAR_37 = !FUNC_3(VAR_30, VAR_16);

 if ((VAR_33 = VAR_34 = FUNC_19(VAR_28, FUNC_25(VAR_22))))
  goto error_return;

 if ((VAR_33 = FUNC_13(VAR_28, ((void*)0), VAR_22, VAR_13)))
  goto error_return;

 VAR_33 = FUNC_11(VAR_24, VAR_25, VAR_23);
 switch (VAR_33) {
 case 129:

  goto error_return;
 case 0:

  if ((VAR_32 > VAR_11) && FUNC_3(VAR_30, VAR_18)) {

   VAR_33 = FUNC_12(VAR_28, &VAR_29, VAR_23, VAR_22, 0);
   if (!VAR_33 && VAR_29) {

    *VAR_25 = FUNC_0(VAR_29);
    VAR_33 = -1;
   }
  }
  if (VAR_33 != -1)
   break;

 case -1:

  FUNC_6(1, &VAR_19.lookupcache_hits);

  FUNC_17(VAR_28);
  VAR_34 = 129;


  VAR_41.a_desc = &VAR_20;
  VAR_41.a_vp = VAR_24;
  VAR_41.a_action = VAR_7;
  VAR_41.a_context = VAR_22;


  VAR_33 = FUNC_21(&VAR_41);

 default:

  goto error_return;
 }


 VAR_35 = VAR_36 = 0;
 if (VAR_23->cn_nameptr[0] == '.') {
  if (VAR_23->cn_namelen == 1)
   VAR_35 = 1;
  if ((VAR_23->cn_namelen == 2) && (VAR_23->cn_nameptr[1] == '.'))
   VAR_36 = 1;
 }
 if (VAR_36 || VAR_35) {
  VAR_42.fh_len = 0;
  goto found;
 }
 if ((VAR_32 >= VAR_12) && (VAR_28->n_vattr.nva_flags & VAR_10)) {

  VAR_33 = 129;
  goto error_return;
 }


 VAR_30 = FUNC_9(VAR_24);
 if (FUNC_15(VAR_30)) {
  VAR_33 = VAR_4;
  goto error_return;
 }
 if (FUNC_1(VAR_30->nm_fsattr.nfsa_bitmap, VAR_9) &&
      (VAR_23->cn_namelen > (int)VAR_30->nm_fsattr.nfsa_maxname)) {
  VAR_33 = VAR_3;
  goto error_return;
 }

 VAR_33 = 0;
 VAR_27 = VAR_17;

 FUNC_6(1, &VAR_19.lookupcache_misses);

 VAR_33 = VAR_30->nm_funcs->nf_lookup_rpc_async(VAR_28, VAR_23->cn_nameptr, VAR_23->cn_namelen, VAR_22, &VAR_44);
 FUNC_22(VAR_33);
 VAR_33 = VAR_30->nm_funcs->nf_lookup_rpc_async_finish(VAR_28, VAR_23->cn_nameptr, VAR_23->cn_namelen, VAR_22, VAR_44, &VAR_38, &VAR_42, &VAR_39);
 FUNC_22(VAR_33);


 VAR_35 = FUNC_2(VAR_28, VAR_42.fh_data, VAR_42.fh_len);

found:
 if (VAR_26 & VAR_6) {
  switch (VAR_23->cn_nameiop) {
  case 130:
   VAR_23->cn_flags &= ~VAR_8;
   break;
  case 128:
   VAR_23->cn_flags &= ~VAR_8;
   if (VAR_35) {
    VAR_33 = VAR_1;
    goto error_return;
   }
   break;
  }
 }

 if (VAR_36) {
  VAR_27 = FUNC_27(VAR_24);
  if (!VAR_27) {
   VAR_33 = 129;
   goto error_return;
  }
 } else if (VAR_35) {
  VAR_33 = FUNC_26(VAR_24);
  if (VAR_33)
   goto error_return;
  VAR_27 = VAR_24;
  FUNC_18(VAR_28);
  if (VAR_42.fh_len && (VAR_28->n_xid <= VAR_38))
   FUNC_14(VAR_28, &VAR_39, &VAR_38, 0);
  FUNC_20(VAR_28);
 } else {
  VAR_40 = (VAR_23->cn_flags & VAR_8) ? VAR_14 : 0;
  VAR_33 = FUNC_16(VAR_31, VAR_28, VAR_23, VAR_42.fh_data, VAR_42.fh_len, &VAR_39, &VAR_38, VAR_43.r_auth, VAR_40, &VAR_29);
  if (VAR_33)
   goto error_return;
  VAR_27 = FUNC_0(VAR_29);
  FUNC_20(VAR_29);
 }
 *VAR_25 = VAR_27;

nfsmout:
 if (VAR_33) {
  if (((VAR_23->cn_nameiop == VAR_0) || (VAR_23->cn_nameiop == 128)) &&
      (VAR_26 & VAR_6) && (VAR_33 == 129)) {
   if (FUNC_28(VAR_24) && FUNC_30(VAR_24))
    VAR_33 = VAR_5;
   else
    VAR_33 = VAR_2;
  }
 }
 if ((VAR_33 == 129) && (VAR_23->cn_flags & VAR_8) &&
     (VAR_23->cn_nameiop != VAR_0) && VAR_37) {

  FUNC_18(VAR_28);
  FUNC_10(VAR_24, ((void*)0), VAR_23);
  VAR_28->n_flag |= VAR_15;
  FUNC_20(VAR_28);
 }
error_return:
 FUNC_4(&VAR_39);
 if (!VAR_34)
  FUNC_17(VAR_28);
 if (VAR_33 && *VAR_25) {
         FUNC_29(*VAR_25);
  *VAR_25 = VAR_17;
 }
 return (VAR_33);
}
