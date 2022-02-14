
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int thread_t ;
struct nfsreq_cbinfo {int* rcb_args; struct nfsbuf* rcb_bp; int (* rcb_func ) (struct nfsreq*) ;} ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; int nm_rsize; int nm_stategenid; TYPE_1__* nm_funcs; } ;
struct nfsbuf {int nb_error; int nb_flags; int nb_bufsize; int nb_rpcs; scalar_t__ nb_endio; scalar_t__ nb_offio; int nb_np; } ;
typedef int off_t ;
typedef int nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_2__ {int (* nf_read_rpc_async ) (int ,int,int,int ,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;} ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct nfsbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfsmount* FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int ,int ,char*,int *) ;
 int FUNC_8 (struct nfsbuf*) ;
 int VAR_7 ;
 int FUNC_9 (struct nfsreq*) ;
 scalar_t__ FUNC_10 (struct nfsmount*) ;
 int FUNC_11 (int ,int,int,int ,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;

int
FUNC_12(struct nfsbuf *VAR_8, thread_t VAR_9, kauth_cred_t VAR_10)
{
 struct nfsmount *VAR_11;
 nfsnode_t VAR_12 = VAR_8->nb_np;
 int VAR_13 = 0, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;
 off_t VAR_21;
 struct nfsreq *VAR_22;
 struct nfsreq_cbinfo VAR_23;

 VAR_11 = FUNC_3(VAR_12);
 if (FUNC_10(VAR_11)) {
  VAR_8->nb_error = VAR_13 = VAR_1;
  FUNC_4(VAR_8->nb_flags, VAR_3);
  FUNC_8(VAR_8);
  return (VAR_13);
 }
 VAR_14 = VAR_11->nm_vers;
 VAR_18 = VAR_11->nm_rsize;

 VAR_21 = FUNC_2(VAR_8);
 VAR_16 = 0;
 VAR_19 = VAR_8->nb_bufsize;

 if (VAR_14 == VAR_5) {
  if (VAR_21 > 0xffffffffLL) {
   VAR_8->nb_error = VAR_13 = VAR_0;
   FUNC_4(VAR_8->nb_flags, VAR_3);
   FUNC_8(VAR_8);
   return (VAR_13);
  }
  if ((VAR_21 + VAR_19 - 1) > 0xffffffffLL)
   VAR_19 = 0x100000000LL - VAR_21;
 }


 VAR_15 = (VAR_8->nb_flags & VAR_2);
 VAR_23.rcb_func = VAR_15 ? FUNC_9 : ((void*)0);
 VAR_23.rcb_bp = VAR_8;

 VAR_8->nb_offio = VAR_8->nb_endio = 0;
 VAR_8->nb_rpcs = VAR_17 = (VAR_19 + VAR_18 - 1) / VAR_18;
 if (VAR_15 && (VAR_17 > 1)) {
  FUNC_4(VAR_8->nb_flags, VAR_4);
 } else {
  FUNC_0(VAR_8->nb_flags, VAR_4);
 }

 while (VAR_19 > 0) {
  if (FUNC_1(VAR_8->nb_flags, VAR_3)) {
   VAR_13 = VAR_8->nb_error;
   break;
  }
  VAR_20 = (VAR_19 > VAR_18) ? VAR_18 : VAR_19;
  VAR_23.rcb_args[0] = VAR_16;
  VAR_23.rcb_args[1] = VAR_20;
  if (VAR_11->nm_vers >= VAR_6)
   VAR_23.rcb_args[2] = VAR_11->nm_stategenid;
  VAR_22 = ((void*)0);
  VAR_13 = VAR_11->nm_funcs->nf_read_rpc_async(VAR_12, VAR_21 + VAR_16, VAR_20, VAR_9, VAR_10, &VAR_23, &VAR_22);
  if (VAR_13)
   break;
  VAR_16 += VAR_20;
  VAR_19 -= VAR_20;
  if (VAR_15)
   continue;
  FUNC_9(VAR_22);
  if (FUNC_1(VAR_8->nb_flags, VAR_3)) {
   VAR_13 = VAR_8->nb_error;
   break;
  }
 }

 if (VAR_19 > 0) {




  VAR_8->nb_error = VAR_13;
  FUNC_4(VAR_8->nb_flags, VAR_3);
  if (FUNC_1(VAR_8->nb_flags, VAR_4)) {
   VAR_17 = (VAR_19 + VAR_18 - 1) / VAR_18;
   FUNC_5(VAR_7);
   VAR_8->nb_rpcs -= VAR_17;
   if (VAR_8->nb_rpcs == 0) {

    FUNC_6(VAR_7);
    FUNC_8(VAR_8);
   } else {

    while (VAR_8->nb_rpcs > 0)
     FUNC_7(&VAR_8->nb_rpcs, VAR_7, 0,
      "nfs_buf_read_rpc_cancel", ((void*)0));
    FUNC_6(VAR_7);
   }
  } else {
   FUNC_8(VAR_8);
  }
 }

 return (VAR_13);
}
