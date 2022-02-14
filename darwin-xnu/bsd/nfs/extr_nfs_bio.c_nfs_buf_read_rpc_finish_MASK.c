
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uio_t ;
typedef int uio_buf ;
typedef int thread_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct nfsreq_cbinfo {int* rcb_args; scalar_t__ rcb_func; struct nfsbuf* rcb_bp; } ;
struct TYPE_9__ {int * nmc_mhead; } ;
struct nfsreq {int r_mtx; scalar_t__ r_start; int r_flags; scalar_t__ r_xid; scalar_t__ r_resendtime; scalar_t__ r_error; TYPE_2__ r_nmrep; struct nfsreq_cbinfo r_callback; int r_cred; int r_thread; TYPE_3__* r_np; } ;
struct nfsmount {int nm_vers; int nm_stategenid; TYPE_1__* nm_funcs; int nm_state; int nm_lock; } ;
struct nfsbuf {int nb_error; int nb_endio; scalar_t__ nb_rpcs; int nb_flags; scalar_t__ nb_data; } ;
typedef scalar_t__ off_t ;
typedef TYPE_3__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_10__ {int n_flag; scalar_t__ n_size; } ;
struct TYPE_8__ {int (* nf_read_rpc_async_finish ) (TYPE_3__*,struct nfsreq*,int ,size_t*,int*) ;int (* nf_read_rpc_async ) (TYPE_3__*,scalar_t__,int,int ,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct nfsbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfsmount* FUNC_4 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_3__*,char*,int,scalar_t__,int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int ) ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int VAR_13 ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct timeval*) ;
 int FUNC_15 (struct nfsreq*) ;
 int * VAR_15 ;
 int FUNC_16 (struct nfsbuf*) ;
 scalar_t__ FUNC_17 (struct nfsmount*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct nfsmount*) ;
 int FUNC_20 (struct nfsmount*,int) ;
 int FUNC_21 (struct nfsreq*) ;
 int FUNC_22 (struct nfsreq*,int ) ;
 int FUNC_23 (struct nfsreq*) ;
 int FUNC_24 (TYPE_3__*,struct nfsreq*,int ,size_t*,int*) ;
 int FUNC_25 (TYPE_3__*,scalar_t__,int,int ,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_26 (int *,scalar_t__,char*,int) ;
 int FUNC_27 (int ,int ,int) ;
 int FUNC_28 (int,scalar_t__,int ,int ,char**,int) ;
 int FUNC_29 (void*) ;

void
FUNC_30(struct nfsreq *VAR_16)
{
 struct nfsmount *VAR_17;
 size_t VAR_18;
 struct nfsreq_cbinfo VAR_19;
 struct nfsbuf *VAR_20;
 int VAR_21 = 0, VAR_22, VAR_23, VAR_24, VAR_25 = 0, VAR_26, VAR_27;
 void *VAR_28 = ((void*)0);
 struct nfsreq *VAR_29 = ((void*)0);
 nfsnode_t VAR_30;
 thread_t VAR_31;
 kauth_cred_t VAR_32;
 uio_t VAR_33;
 char VAR_34 [ FUNC_7(1) ];

finish:
 VAR_30 = VAR_16->r_np;
 VAR_31 = VAR_16->r_thread;
 VAR_32 = VAR_16->r_cred;
 if (FUNC_2(VAR_32))
  FUNC_9(VAR_32);
 VAR_19 = VAR_16->r_callback;
 VAR_20 = VAR_19.rcb_bp;
 if (VAR_19.rcb_func)
  FUNC_22(VAR_16, 0);

 VAR_17 = FUNC_4(VAR_30);
 if (FUNC_17(VAR_17)) {
  FUNC_6(VAR_20->nb_flags, VAR_3);
  VAR_20->nb_error = VAR_21 = VAR_2;
 }
 if (VAR_21 || FUNC_1(VAR_20->nb_flags, VAR_3)) {

  FUNC_21(VAR_16);
  goto out;
 }

 VAR_22 = VAR_17->nm_vers;
 VAR_23 = VAR_19.rcb_args[0];
 VAR_18 = VAR_24 = VAR_19.rcb_args[1];

 VAR_33 = FUNC_28(1, FUNC_3(VAR_20) + VAR_23, VAR_13,
                                VAR_12, &VAR_34, sizeof(VAR_34));
 FUNC_27(VAR_33, FUNC_0(VAR_20->nb_data + VAR_23), VAR_24);


 VAR_21 = VAR_17->nm_funcs->nf_read_rpc_async_finish(VAR_30, VAR_16, VAR_33, &VAR_18, &VAR_25);
 if ((VAR_21 == VAR_0) && VAR_19.rcb_func) {

  if (VAR_19.rcb_func)
   FUNC_23(VAR_16);
  if (FUNC_2(VAR_32))
   FUNC_10(&VAR_32);
  return;
 }
 if ((VAR_17->nm_vers >= VAR_8) && FUNC_18(VAR_21) && !FUNC_1(VAR_20->nb_flags, VAR_3)) {
  FUNC_11(&VAR_17->nm_lock);
  if ((VAR_21 != VAR_6) && (VAR_21 != VAR_5) && (VAR_19.rcb_args[2] == VAR_17->nm_stategenid)) {
   FUNC_5(VAR_30, "nfs_buf_read_rpc_finish: error %d @ 0x%llx, 0x%x 0x%x, initiating recovery",
    VAR_21, FUNC_3(VAR_20)+VAR_23, VAR_19.rcb_args[2], VAR_17->nm_stategenid);
   FUNC_20(VAR_17, VAR_21);
  }
  FUNC_12(&VAR_17->nm_lock);
  if (VAR_30->n_flag & VAR_9) {
   VAR_21 = VAR_1;
  } else {
   if (VAR_21 == VAR_5) {
    if (VAR_19.rcb_func) {




     struct timeval VAR_35;
     if (VAR_16->r_nmrep.nmc_mhead) {
      FUNC_13(VAR_16->r_nmrep.nmc_mhead);
      VAR_16->r_nmrep.nmc_mhead = ((void*)0);
     }
     VAR_16->r_error = 0;
     FUNC_14(&VAR_35);
     FUNC_11(&VAR_16->r_mtx);
     VAR_16->r_resendtime = VAR_35.tv_sec + 2;
     VAR_16->r_xid = 0;
     VAR_16->r_flags |= VAR_11;
     VAR_16->r_start = 0;
     FUNC_15(VAR_16);
     FUNC_12(&VAR_16->r_mtx);
     if (FUNC_2(VAR_32))
      FUNC_10(&VAR_32);

     return;
    }

    FUNC_26(&VAR_17->nm_state, (VAR_10-1), "nfsgrace", 2*VAR_14);
   }
   if (!(VAR_21 = FUNC_19(VAR_17))) {
    VAR_18 = 0;
    goto readagain;
   }
  }
 }
 if (VAR_21) {
  FUNC_6(VAR_20->nb_flags, VAR_3);
  VAR_20->nb_error = VAR_21;
  goto out;
 }

 if ((VAR_18 > 0) && (VAR_20->nb_endio < (VAR_23 + (int)VAR_18)))
  VAR_20->nb_endio = VAR_23 + VAR_18;

 if ((VAR_22 == VAR_7) || VAR_25 || (VAR_18 == 0)) {

  off_t VAR_36, VAR_37, VAR_38;
  VAR_36 = (VAR_24 - VAR_18);
  VAR_37 = VAR_30->n_size - (FUNC_3(VAR_20) + VAR_23 + VAR_18);
  VAR_38 = (VAR_36 < VAR_37) ? VAR_36 : VAR_37;
  if (VAR_38 > 0)
   FUNC_8(VAR_20->nb_data + VAR_23 + VAR_18, VAR_38);
 } else if (((int)VAR_18 < VAR_24) && !FUNC_1(VAR_20->nb_flags, VAR_3)) {







readagain:
  VAR_23 += VAR_18;
  VAR_24 -= VAR_18;
  VAR_19.rcb_args[0] = VAR_23;
  VAR_19.rcb_args[1] = VAR_24;
  if (VAR_17->nm_vers >= VAR_8)
   VAR_19.rcb_args[2] = VAR_17->nm_stategenid;
  VAR_21 = VAR_17->nm_funcs->nf_read_rpc_async(VAR_30, FUNC_3(VAR_20) + VAR_23, VAR_24, VAR_31, VAR_32, &VAR_19, &VAR_29);
  if (!VAR_21) {
   if (FUNC_2(VAR_32))
    FUNC_10(&VAR_32);
   if (!VAR_19.rcb_func) {

    VAR_16 = VAR_29;
    VAR_29 = ((void*)0);
    goto finish;
   }
   FUNC_23(VAR_16);





   return;
  }
  FUNC_6(VAR_20->nb_flags, VAR_3);
  VAR_20->nb_error = VAR_21;
 }

out:
 if (VAR_19.rcb_func)
  FUNC_23(VAR_16);
 if (FUNC_2(VAR_32))
  FUNC_10(&VAR_32);
 VAR_26 = FUNC_1(VAR_20->nb_flags, VAR_4);
 if (VAR_26)
  FUNC_11(VAR_15);

 VAR_20->nb_rpcs--;
 VAR_27 = (VAR_20->nb_rpcs == 0);

 if (VAR_26)
  FUNC_12(VAR_15);

 if (VAR_27) {
  if (VAR_26)
   VAR_28 = &VAR_20->nb_rpcs;
  FUNC_16(VAR_20);
  if (VAR_28)
   FUNC_29(VAR_28);
 }
}
