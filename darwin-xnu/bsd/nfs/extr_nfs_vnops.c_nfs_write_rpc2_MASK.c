
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int * uio_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int thread_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; size_t nm_wsize; scalar_t__ nm_stategenid; int nm_state; int nm_lock; TYPE_1__* nm_funcs; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_12__ {int n_flag; } ;
struct TYPE_11__ {int (* nf_write_rpc_async ) (TYPE_2__*,int *,size_t,int ,int ,int,int *,struct nfsreq**) ;int (* nf_write_rpc_async_finish ) (TYPE_2__*,struct nfsreq*,int*,size_t*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_2__*,int,size_t,int ) ;
 int FUNC_1 (int,TYPE_2__*,int,size_t,int) ;
 int FUNC_2 (int,TYPE_2__*,int,size_t,int) ;
 int VAR_3 ;
 struct nfsmount* FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct nfsmount*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct nfsmount*) ;
 int FUNC_10 (struct nfsmount*) ;
 int FUNC_11 (struct nfsmount*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*,int *,size_t,int ,int ,int,int *,struct nfsreq**) ;
 int FUNC_14 (TYPE_2__*,struct nfsreq*,int*,size_t*,int*) ;
 int FUNC_15 (int *,scalar_t__,char*,int) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 size_t FUNC_20 (int *) ;
 int FUNC_21 (int *,size_t) ;
 int FUNC_22 (int *,size_t) ;

int
FUNC_23(
 nfsnode_t VAR_10,
 uio_t VAR_11,
 thread_t VAR_12,
 kauth_cred_t VAR_13,
 int *VAR_14,
 uint64_t *VAR_15)
{
 struct nfsmount *VAR_16;
 int VAR_17 = 0, VAR_18;
 int VAR_19, VAR_20, VAR_21;
 uint64_t VAR_22 = 0, VAR_23;
 size_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 struct nfsreq VAR_29, *VAR_30 = &VAR_29;
 uint32_t VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
 uio_t VAR_34 = ((void*)0);






 FUNC_2(537, VAR_10, FUNC_19(VAR_11), FUNC_20(VAR_11), *VAR_14);
 VAR_16 = FUNC_3(VAR_10);
 if (FUNC_7(VAR_16))
  return (VAR_2);
 VAR_18 = VAR_16->nm_vers;
 VAR_24 = VAR_16->nm_wsize;

 VAR_19 = 0;
 VAR_21 = VAR_6;

 VAR_25 = VAR_26 = FUNC_20(VAR_11);
 if ((VAR_18 == VAR_4) && ((uint64_t)(FUNC_19(VAR_11) + VAR_26) > 0xffffffffULL)) {
  FUNC_1(537, VAR_10, FUNC_19(VAR_11), FUNC_20(VAR_11), VAR_0);
  return (VAR_0);
 }

 VAR_34 = FUNC_16(VAR_11);
 if (VAR_34 == ((void*)0)) {
  return (VAR_1);
 }

 while (VAR_26 > 0) {
  VAR_27 = (VAR_26 > VAR_24) ? VAR_24 : VAR_26;
  FUNC_0(537, VAR_10, FUNC_19(VAR_11), VAR_27, 0);
  if (VAR_10->n_flag & VAR_7) {
   VAR_17 = VAR_1;
   break;
  }
  if (VAR_16->nm_vers >= VAR_5)
   VAR_31 = VAR_16->nm_stategenid;
  VAR_17 = VAR_16->nm_funcs->nf_write_rpc_async(VAR_10, VAR_11, VAR_27, VAR_12, VAR_13, *VAR_14, ((void*)0), &VAR_30);
  if (!VAR_17)
   VAR_17 = VAR_16->nm_funcs->nf_write_rpc_async_finish(VAR_10, VAR_30, &VAR_20, &VAR_28, &VAR_23);
  VAR_16 = FUNC_3(VAR_10);
  if (FUNC_7(VAR_16))
   VAR_17 = VAR_2;
  if ((VAR_16->nm_vers >= VAR_5) && FUNC_8(VAR_17) &&
      (++VAR_33 <= FUNC_9(VAR_16))) {
   FUNC_5(&VAR_16->nm_lock);
   if ((VAR_17 != VAR_3) && (VAR_31 == VAR_16->nm_stategenid)) {
    FUNC_4(VAR_10, "nfs_write_rpc: error %d, initiating recovery", VAR_17);
    FUNC_11(VAR_16, VAR_17);
   }
   FUNC_6(&VAR_16->nm_lock);
   if (VAR_10->n_flag & VAR_7) {
    VAR_17 = VAR_1;
   } else {
    if (VAR_17 == VAR_3)
     FUNC_15(&VAR_16->nm_state, (VAR_8-1), "nfsgrace", 2*VAR_9);
    if (!(VAR_17 = FUNC_10(VAR_16)))
     continue;
   }
  }
  if (VAR_17)
   break;
  if (VAR_18 == VAR_4) {
   VAR_26 -= VAR_27;
   continue;
  }


  if (VAR_28 < VAR_27) {

   *VAR_11 = *VAR_34;
   FUNC_22(VAR_11, VAR_25 - (VAR_26 - VAR_28));
   VAR_27 = VAR_28;
  }


  if (VAR_20 < VAR_21)
   VAR_21 = VAR_20;

  VAR_26 -= VAR_27;


  if (!VAR_19) {
   VAR_22 = VAR_23;
   VAR_19 = 1;
  } else if (VAR_22 != VAR_23) {

   if (++VAR_32 > 100) {

    VAR_17 = VAR_1;
    break;
   }
   *VAR_11 = *VAR_34;
   VAR_21 = VAR_6;
   VAR_19 = 0;
   VAR_26 = VAR_25;
  }
 }
 if (VAR_34)
  FUNC_17(VAR_34);
 if (VAR_19 && VAR_15)
  *VAR_15 = VAR_22;
 *VAR_14 = VAR_21;
 if (VAR_17)
  FUNC_21(VAR_11, VAR_26);
 FUNC_1(537, VAR_10, VAR_21, FUNC_20(VAR_11), VAR_17);
 return (VAR_17);
}
