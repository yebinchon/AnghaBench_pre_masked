
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uio_t ;
typedef int uio_buf ;
typedef int uint32_t ;
typedef int thread_t ;
struct nfsreq_cbinfo {int* rcb_args; struct nfsbuf* rcb_bp; int (* rcb_func ) (struct nfsreq*) ;} ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; int nm_wsize; int nm_stategenid; TYPE_1__* nm_funcs; } ;
struct nfsbuf {int nb_error; int nb_flags; int nb_offio; int nb_endio; int nb_rpcs; scalar_t__ nb_data; int nb_commitlevel; int nb_np; } ;
typedef int nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_2__ {int (* nf_write_rpc_async ) (int ,int ,int,int ,int ,int,struct nfsreq_cbinfo*,struct nfsreq**) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (struct nfsbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct nfsmount* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*,int ,int ,char*,int *) ;
 int FUNC_10 (struct nfsmount*) ;
 int FUNC_11 (struct nfsmount*) ;
 int FUNC_12 (struct nfsbuf*) ;
 int VAR_11 ;
 int FUNC_13 (struct nfsbuf*,int ,int ) ;
 int FUNC_14 (struct nfsreq*) ;
 scalar_t__ FUNC_15 (struct nfsmount*) ;
 int FUNC_16 (int ,int ,int,int ,int ,int,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int,int,int ,int ,char**,int) ;

int
FUNC_19(struct nfsbuf *VAR_12, int VAR_13, thread_t VAR_14, kauth_cred_t VAR_15)
{
 struct nfsmount *VAR_16;
 nfsnode_t VAR_17 = VAR_12->nb_np;
 int VAR_18 = 0, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 uint32_t VAR_23, VAR_24, VAR_25;
 struct nfsreq *VAR_26;
 struct nfsreq_cbinfo VAR_27;
 uio_t VAR_28;
 char VAR_29 [ FUNC_6(1) ];

 VAR_16 = FUNC_4(VAR_17);
 if (FUNC_15(VAR_16)) {
  VAR_12->nb_error = VAR_18 = VAR_1;
  FUNC_5(VAR_12->nb_flags, VAR_3);
  FUNC_12(VAR_12);
  return (VAR_18);
 }
 VAR_19 = VAR_16->nm_vers;
 VAR_23 = VAR_16->nm_wsize;

 VAR_21 = VAR_12->nb_offio;
 VAR_24 = VAR_12->nb_endio - VAR_12->nb_offio;


 VAR_20 = (VAR_12->nb_flags & VAR_2) && (VAR_5 > 0);
 VAR_12->nb_commitlevel = VAR_8;
 VAR_27.rcb_func = VAR_20 ? FUNC_14 : ((void*)0);
 VAR_27.rcb_bp = VAR_12;

 if ((VAR_19 == VAR_6) && ((FUNC_3(VAR_12) + VAR_12->nb_endio) > 0xffffffffLL)) {
  VAR_12->nb_error = VAR_18 = VAR_0;
  FUNC_5(VAR_12->nb_flags, VAR_3);
  FUNC_12(VAR_12);
  return (VAR_18);
 }

 VAR_28 = FUNC_18(1, FUNC_3(VAR_12) + VAR_21, VAR_9,
  VAR_10, &VAR_29, sizeof(VAR_29));
 FUNC_17(VAR_28, FUNC_0(VAR_12->nb_data + VAR_21), VAR_24);

 VAR_12->nb_rpcs = VAR_22 = (VAR_24 + VAR_23 - 1) / VAR_23;
 if (VAR_20 && (VAR_22 > 1)) {
  FUNC_5(VAR_12->nb_flags, VAR_4);
 } else {
  FUNC_1(VAR_12->nb_flags, VAR_4);
 }

 while (VAR_24 > 0) {
  if (FUNC_2(VAR_12->nb_flags, VAR_3)) {
   VAR_18 = VAR_12->nb_error;
   break;
  }
  VAR_25 = (VAR_24 > VAR_23) ? VAR_23 : VAR_24;
  VAR_27.rcb_args[0] = VAR_21;
  VAR_27.rcb_args[1] = VAR_25;
  if (VAR_16->nm_vers >= VAR_7)
   VAR_27.rcb_args[2] = VAR_16->nm_stategenid;
  if (VAR_20 && ((VAR_18 = FUNC_11(VAR_16))))
   break;
  VAR_26 = ((void*)0);
  VAR_18 = VAR_16->nm_funcs->nf_write_rpc_async(VAR_17, VAR_28, VAR_25, VAR_14, VAR_15,
    VAR_13, &VAR_27, &VAR_26);
  if (VAR_18) {
   if (VAR_20)
    FUNC_10(VAR_16);
   break;
  }
  VAR_21 += VAR_25;
  VAR_24 -= VAR_25;
  if (VAR_20)
   continue;
  FUNC_14(VAR_26);
 }

 if (VAR_24 > 0) {




  VAR_12->nb_error = VAR_18;
  FUNC_5(VAR_12->nb_flags, VAR_3);
  if (FUNC_2(VAR_12->nb_flags, VAR_4)) {
   VAR_22 = (VAR_24 + VAR_23 - 1) / VAR_23;
   FUNC_7(VAR_11);
   VAR_12->nb_rpcs -= VAR_22;
   if (VAR_12->nb_rpcs == 0) {

    FUNC_8(VAR_11);
    FUNC_13(VAR_12, VAR_14, VAR_15);
   } else {

    while (VAR_12->nb_rpcs > 0)
     FUNC_9(&VAR_12->nb_rpcs, VAR_11, 0,
      "nfs_buf_write_rpc_cancel", ((void*)0));
    FUNC_8(VAR_11);
   }
  } else {
   FUNC_13(VAR_12, VAR_14, VAR_15);
  }

  if (!FUNC_2(VAR_12->nb_flags, VAR_3))
   VAR_18 = 0;
 }

 return (VAR_18);
}
