
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vnode_t ;
typedef size_t vm_offset_t ;
typedef scalar_t__ upl_t ;
typedef int upl_page_info_t ;
typedef int uio_t ;
typedef int uio_buf ;
typedef scalar_t__ uint32_t ;
typedef int thread_t ;
struct vnop_pagein_args {scalar_t__ a_pl; size_t a_size; size_t a_f_offset; size_t a_pl_offset; int a_flags; int a_context; int a_vp; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {size_t nm_rsize; scalar_t__ nm_vers; scalar_t__ nm_stategenid; int nm_state; int nm_lock; TYPE_1__* nm_funcs; } ;
typedef int req ;
typedef size_t off_t ;
typedef TYPE_2__* nfsnode_t ;
typedef scalar_t__ kern_return_t ;
typedef int kauth_cred_t ;
struct TYPE_13__ {int pageins; } ;
struct TYPE_12__ {int n_flag; scalar_t__ n_size; } ;
struct TYPE_11__ {int (* nf_read_rpc_async ) (TYPE_2__*,size_t,size_t,int ,int ,int *,struct nfsreq**) ;int (* nf_read_rpc_async_finish ) (TYPE_2__*,struct nfsreq*,int ,size_t*,int *) ;} ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,TYPE_2__*,size_t,int,size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (size_t,size_t) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int VAR_7 ;
 int FUNC_5 (int,int *) ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_7 (int ) ;
 struct nfsmount* FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 () ;
 int VAR_17 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct nfsmount*) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (struct nfsmount*) ;
 int FUNC_16 (struct nfsmount*) ;
 int FUNC_17 (struct nfsmount*,int) ;
 int FUNC_18 (struct nfsreq*) ;
 TYPE_7__ VAR_18 ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (char*,size_t) ;
 int FUNC_21 (TYPE_2__*,size_t,size_t,int ,int ,int *,struct nfsreq**) ;
 int FUNC_22 (TYPE_2__*,struct nfsreq*,int ,size_t*,int *) ;
 int FUNC_23 (int *,scalar_t__,char*,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (scalar_t__,size_t,size_t,int) ;
 int FUNC_26 (scalar_t__,size_t,size_t,int) ;
 scalar_t__ FUNC_27 (scalar_t__,size_t*) ;
 int * FUNC_28 (scalar_t__) ;
 int FUNC_29 (scalar_t__) ;
 int FUNC_30 (int ,int ,size_t) ;
 int FUNC_31 (int,size_t,int ,int ,char**,int) ;
 TYPE_2__* FUNC_32 (int ) ;
 int FUNC_33 (int ,TYPE_2__*,int ,int ) ;
 size_t FUNC_34 (int ) ;
 int FUNC_35 (int ,int) ;
 int FUNC_36 (scalar_t__,uintptr_t,uintptr_t) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;

int
FUNC_39(
 struct vnop_pagein_args *VAR_19)
{
 vnode_t VAR_20 = VAR_19->a_vp;
 upl_t VAR_21 = VAR_19->a_pl;
 size_t VAR_22 = VAR_19->a_size;
 off_t VAR_23 = VAR_19->a_f_offset;
 vm_offset_t VAR_24 = VAR_19->a_pl_offset;
 int VAR_25 = VAR_19->a_flags;
 thread_t VAR_26;
 kauth_cred_t VAR_27;
 nfsnode_t VAR_28 = FUNC_7(VAR_20);
 size_t VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 off_t VAR_34;
 struct nfsmount *VAR_35;
 int VAR_36 = 0;
 vm_offset_t VAR_37, VAR_38;
 uio_t VAR_39;
 char VAR_40 [ FUNC_6(1) ];
 int VAR_41 = VAR_25 & VAR_16;
 upl_page_info_t *VAR_42;

 struct nfsreq *VAR_43[16];
 int VAR_44, VAR_45;
 uint32_t VAR_46 = 0, VAR_47 = 0;
 kern_return_t VAR_48;

 FUNC_1(322, VAR_28, VAR_23, VAR_22, VAR_25);
 if (VAR_21 == (upl_t)((void*)0))
  FUNC_19("nfs_pagein: no upl");

 if (VAR_22 <= 0) {
  FUNC_20("nfs_pagein: invalid size %ld", VAR_22);
  if (!VAR_41)
   (void) FUNC_25(VAR_21, VAR_24, VAR_22, 0);
  return (VAR_0);
 }
 if (VAR_23 < 0 || VAR_23 >= (off_t)VAR_28->n_size || (VAR_23 & VAR_8)) {
  if (!VAR_41)
   FUNC_25(VAR_21, VAR_24, VAR_22,
    VAR_12 | VAR_13);
  return (VAR_0);
 }

 VAR_26 = FUNC_37(VAR_19->a_context);
 VAR_27 = FUNC_24(VAR_20);
 if (!FUNC_2(VAR_27))
  VAR_27 = FUNC_38(VAR_19->a_context);

 VAR_39 = FUNC_31(1, VAR_23, VAR_11, VAR_10,
  &VAR_40, sizeof(VAR_40));

 VAR_35 = FUNC_8(VAR_20);
 if (FUNC_13(VAR_35)) {
  if (!VAR_41)
   FUNC_25(VAR_21, VAR_24, VAR_22,
    VAR_12 | VAR_13);
  return (VAR_2);
 }
 VAR_29 = VAR_35->nm_rsize;

 VAR_42 = FUNC_28(VAR_21);
 VAR_48 = FUNC_27(VAR_21, &VAR_37);
 if (VAR_48 != VAR_3)
  FUNC_19("nfs_vnop_pagein: ubc_upl_map() failed with (%d)", VAR_48);
 VAR_37 += VAR_24;

tryagain:
 if (VAR_35->nm_vers >= VAR_6)
  VAR_46 = VAR_35->nm_stategenid;
 VAR_31 = VAR_32 = VAR_22;
 VAR_34 = VAR_23;
 VAR_38 = VAR_37;

 FUNC_9(VAR_43, sizeof(VAR_43));
 VAR_44 = VAR_45 = 0;
 do {
  if (VAR_28->n_flag & VAR_7) {
   VAR_36 = VAR_1;
   break;
  }

  while ((VAR_31 > 0) && (VAR_43[VAR_44] == ((void*)0))) {
   VAR_30 = FUNC_3(VAR_29, VAR_31);
   if ((VAR_36 = VAR_35->nm_funcs->nf_read_rpc_async(VAR_28, VAR_34, VAR_30, VAR_26, VAR_27, ((void*)0), &VAR_43[VAR_44]))) {
    VAR_43[VAR_44] = ((void*)0);
    break;
   }
   VAR_34 += VAR_30;
   VAR_31 -= VAR_30;
   VAR_44 = (VAR_44 + 1) % 16;
  }

  while ((VAR_32 > 0) && VAR_43[VAR_45]) {
   VAR_30 = VAR_33 = FUNC_3(VAR_29, VAR_32);
   FUNC_33(VAR_39, FUNC_32(VAR_39), VAR_11, VAR_10);
   FUNC_30(VAR_39, FUNC_0(VAR_38), VAR_30);
   FUNC_1(322, FUNC_32(VAR_39), FUNC_34(VAR_39), VAR_38, VAR_32);



   FUNC_5(1, &VAR_18.pageins);
   VAR_36 = VAR_35->nm_funcs->nf_read_rpc_async_finish(VAR_28, VAR_43[VAR_45], VAR_39, &VAR_33, ((void*)0));
   VAR_43[VAR_45] = ((void*)0);
   VAR_45 = (VAR_45 + 1) % 16;
   if ((VAR_35->nm_vers >= VAR_6) && FUNC_14(VAR_36)) {
    FUNC_11(&VAR_35->nm_lock);
    if ((VAR_36 != VAR_5) && (VAR_46 == VAR_35->nm_stategenid)) {
     FUNC_4(VAR_28, "nfs_vnop_pagein: error %d, initiating recovery", VAR_36);
     FUNC_17(VAR_35, VAR_36);
    }
    FUNC_12(&VAR_35->nm_lock);
    VAR_47++;
    goto cancel;
   }
   if (VAR_36) {
    FUNC_1(322, FUNC_32(VAR_39), FUNC_34(VAR_39), VAR_36, -1);
    break;
   }
   if (VAR_33 < VAR_30) {

    int VAR_49 = VAR_30 - VAR_33;
    FUNC_9((char *)VAR_38 + VAR_33, VAR_49);
    FUNC_1(324, FUNC_32(VAR_39), VAR_33, VAR_49, VAR_38);
    FUNC_35(VAR_39, VAR_49);
   }
   VAR_38 += VAR_30;
   VAR_32 -= VAR_30;
   if (VAR_31)
    break;
  }
 } while (!VAR_36 && (VAR_31 || VAR_32));

 VAR_47 = 0;

 if (VAR_36) {
cancel:

  while (VAR_43[VAR_45]) {
   FUNC_18(VAR_43[VAR_45]);
   VAR_43[VAR_45] = ((void*)0);
   VAR_45 = (VAR_45 + 1) % 16;
  }
  if (VAR_28->n_flag & VAR_7) {
   VAR_36 = VAR_1;
  } else if (VAR_47) {
   if (VAR_47 <= FUNC_15(VAR_35)) {
    if (VAR_36 == VAR_5)
     FUNC_23(&VAR_35->nm_state, (VAR_9-1), "nfsgrace", 2*VAR_17);
    if (!(VAR_36 = FUNC_16(VAR_35)))
     goto tryagain;
   } else {
    FUNC_4(VAR_28, "nfs_pagein: too many restarts, aborting");
   }
  }
 }

 FUNC_29(VAR_21);

 if (!VAR_41) {
  if (VAR_36)
   FUNC_25(VAR_21, VAR_24, VAR_22,
         VAR_12 |
         VAR_13);
  else
   FUNC_26(VAR_21, VAR_24, VAR_22,
          VAR_14 |
          VAR_15);
 }
 return (VAR_36);
}
