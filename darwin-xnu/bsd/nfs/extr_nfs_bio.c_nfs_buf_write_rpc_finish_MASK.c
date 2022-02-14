
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uio_t ;
typedef int uio_buf ;
typedef scalar_t__ uint64_t ;
typedef int thread_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct nfsreq_cbinfo {int* rcb_args; scalar_t__ rcb_func; struct nfsbuf* rcb_bp; } ;
struct TYPE_9__ {int * nmc_mhead; } ;
struct nfsreq {int r_mtx; scalar_t__ r_start; int r_flags; scalar_t__ r_xid; scalar_t__ r_resendtime; scalar_t__ r_error; TYPE_2__ r_nmrep; struct nfsreq_cbinfo r_callback; int r_cred; int r_thread; TYPE_3__* r_np; } ;
struct nfsmount {int nm_vers; int nm_stategenid; TYPE_1__* nm_funcs; int nm_state; int nm_lock; } ;
struct nfsbuf {int nb_flags; int nb_error; int nb_commitlevel; scalar_t__ nb_verf; scalar_t__ nb_rpcs; scalar_t__ nb_data; } ;
typedef TYPE_3__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_10__ {int n_flag; } ;
struct TYPE_8__ {int (* nf_write_rpc_async_finish ) (TYPE_3__*,struct nfsreq*,int*,size_t*,scalar_t__*) ;int (* nf_write_rpc_async ) (TYPE_3__*,int ,int,int ,int ,int,struct nfsreq_cbinfo*,struct nfsreq**) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct nfsbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nfsmount* FUNC_4 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_3__*,char*,int,scalar_t__,int,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct timeval*) ;
 int FUNC_14 (struct nfsmount*) ;
 int FUNC_15 (struct nfsreq*) ;
 int * VAR_18 ;
 int FUNC_16 (struct nfsbuf*,int ,int ) ;
 scalar_t__ FUNC_17 (struct nfsmount*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct nfsmount*) ;
 int FUNC_20 (struct nfsmount*,int) ;
 int FUNC_21 (struct nfsreq*) ;
 int FUNC_22 (struct nfsreq*,int ) ;
 int FUNC_23 (struct nfsreq*) ;
 int FUNC_24 (TYPE_3__*,struct nfsreq*,int*,size_t*,scalar_t__*) ;
 int FUNC_25 (TYPE_3__*,int ,int,int ,int ,int,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_26 (int *,scalar_t__,char*,int) ;
 int FUNC_27 (int ,int ,int) ;
 int FUNC_28 (int,scalar_t__,int ,int ,char**,int) ;
 int FUNC_29 (void*) ;

void
FUNC_30(struct nfsreq *VAR_19)
{
 int VAR_20 = 0, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26 = VAR_10;
 uint64_t VAR_27 = 0;
 size_t VAR_28;
 void *VAR_29 = ((void*)0);
 struct nfsreq_cbinfo VAR_30;
 struct nfsreq *VAR_31 = ((void*)0);
 struct nfsbuf *VAR_32;
 struct nfsmount *VAR_33;
 nfsnode_t VAR_34;
 thread_t VAR_35;
 kauth_cred_t VAR_36;
 uio_t VAR_37;
 char VAR_38 [ FUNC_7(1) ];

finish:
 VAR_34 = VAR_19->r_np;
 VAR_35 = VAR_19->r_thread;
 VAR_36 = VAR_19->r_cred;
 if (FUNC_2(VAR_36))
  FUNC_8(VAR_36);
 VAR_30 = VAR_19->r_callback;
 VAR_32 = VAR_30.rcb_bp;
 if (VAR_30.rcb_func)
  FUNC_22(VAR_19, 0);

 VAR_33 = FUNC_4(VAR_34);
 if (FUNC_17(VAR_33)) {
  FUNC_6(VAR_32->nb_flags, VAR_3);
  VAR_32->nb_error = VAR_20 = VAR_2;
 }
 if (VAR_20 || FUNC_1(VAR_32->nb_flags, VAR_3)) {

  FUNC_21(VAR_19);
  goto out;
 }
 VAR_21 = VAR_33->nm_vers;

 VAR_22 = VAR_30.rcb_args[0];
 VAR_28 = VAR_23 = VAR_30.rcb_args[1];


 VAR_20 = VAR_33->nm_funcs->nf_write_rpc_async_finish(VAR_34, VAR_19, &VAR_26, &VAR_28, &VAR_27);
 if ((VAR_20 == VAR_0) && VAR_30.rcb_func) {

  if (VAR_30.rcb_func)
   FUNC_23(VAR_19);
  if (FUNC_2(VAR_36))
   FUNC_9(&VAR_36);
  return;
 }
 if ((VAR_33->nm_vers >= VAR_9) && FUNC_18(VAR_20) && !FUNC_1(VAR_32->nb_flags, VAR_3)) {
  FUNC_10(&VAR_33->nm_lock);
  if ((VAR_20 != VAR_7) && (VAR_20 != VAR_6) && (VAR_30.rcb_args[2] == VAR_33->nm_stategenid)) {
   FUNC_5(VAR_34, "nfs_buf_write_rpc_finish: error %d @ 0x%llx, 0x%x 0x%x, initiating recovery",
    VAR_20, FUNC_3(VAR_32)+VAR_22, VAR_30.rcb_args[2], VAR_33->nm_stategenid);
   FUNC_20(VAR_33, VAR_20);
  }
  FUNC_11(&VAR_33->nm_lock);
  if (VAR_34->n_flag & VAR_12) {
   VAR_20 = VAR_1;
  } else {
   if (VAR_20 == VAR_6) {
    if (VAR_30.rcb_func) {




     struct timeval VAR_39;
     if (VAR_19->r_nmrep.nmc_mhead) {
      FUNC_12(VAR_19->r_nmrep.nmc_mhead);
      VAR_19->r_nmrep.nmc_mhead = ((void*)0);
     }
     VAR_19->r_error = 0;
     FUNC_13(&VAR_39);
     FUNC_10(&VAR_19->r_mtx);
     VAR_19->r_resendtime = VAR_39.tv_sec + 2;
     VAR_19->r_xid = 0;
     VAR_19->r_flags |= VAR_14;
     VAR_19->r_start = 0;
     FUNC_15(VAR_19);
     FUNC_11(&VAR_19->r_mtx);
     if (FUNC_2(VAR_36))
      FUNC_9(&VAR_36);

     return;
    }

    FUNC_26(&VAR_33->nm_state, (VAR_13-1), "nfsgrace", 2*VAR_17);
   }
   if (!(VAR_20 = FUNC_19(VAR_33))) {
    VAR_28 = 0;
    goto writeagain;
   }
  }
 }
 if (VAR_20) {
  FUNC_6(VAR_32->nb_flags, VAR_3);
  VAR_32->nb_error = VAR_20;
 }
 if (VAR_20 || (VAR_21 == VAR_8))
  goto out;
 if (VAR_28 <= 0) {
  FUNC_6(VAR_32->nb_flags, VAR_3);
  VAR_32->nb_error = VAR_20 = VAR_1;
  goto out;
 }


 if (VAR_26 < VAR_32->nb_commitlevel)
  VAR_32->nb_commitlevel = VAR_26;


 if (!VAR_32->nb_verf) {
  VAR_32->nb_verf = VAR_27;
 } else if (VAR_32->nb_verf != VAR_27) {

  VAR_32->nb_flags |= VAR_5;
  VAR_32->nb_commitlevel = VAR_11;
  VAR_32->nb_verf = VAR_27;
 }
 if (((int)VAR_28 < VAR_23) && !(VAR_32->nb_flags & (VAR_5|VAR_3))) {
writeagain:
  VAR_22 += VAR_28;
  VAR_23 -= VAR_28;

  VAR_37 = FUNC_28(1, FUNC_3(VAR_32) + VAR_22, VAR_15,
   VAR_16, &VAR_38, sizeof(VAR_38));
  FUNC_27(VAR_37, FUNC_0(VAR_32->nb_data + VAR_22), VAR_23);

  VAR_30.rcb_args[0] = VAR_22;
  VAR_30.rcb_args[1] = VAR_23;
  if (VAR_33->nm_vers >= VAR_9)
   VAR_30.rcb_args[2] = VAR_33->nm_stategenid;


  VAR_20 = VAR_33->nm_funcs->nf_write_rpc_async(VAR_34, VAR_37, VAR_23, VAR_35, VAR_36,
    VAR_10, &VAR_30, &VAR_31);
  if (!VAR_20) {
   if (FUNC_2(VAR_36))
    FUNC_9(&VAR_36);
   if (!VAR_30.rcb_func) {

    VAR_19 = VAR_31;
    VAR_31 = ((void*)0);
    goto finish;
   }
   FUNC_23(VAR_19);





   return;
  }
  FUNC_6(VAR_32->nb_flags, VAR_3);
  VAR_32->nb_error = VAR_20;
 }

out:
 if (VAR_30.rcb_func) {
  FUNC_14(VAR_33);
  FUNC_23(VAR_19);
 }
 VAR_24 = FUNC_1(VAR_32->nb_flags, VAR_4);
 if (VAR_24)
  FUNC_10(VAR_18);

 VAR_32->nb_rpcs--;
 VAR_25 = (VAR_32->nb_rpcs == 0);

 if (VAR_24)
  FUNC_11(VAR_18);

 if (VAR_25) {
  if (VAR_24)
   VAR_29 = &VAR_32->nb_rpcs;
  FUNC_16(VAR_32, VAR_35, VAR_36);
  if (VAR_29)
   FUNC_29(VAR_29);
 }

 if (FUNC_2(VAR_36))
  FUNC_9(&VAR_36);
}
