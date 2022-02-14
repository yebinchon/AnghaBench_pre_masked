
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; size_t nm_rsize; scalar_t__ nm_stategenid; int nm_state; int nm_lock; TYPE_1__* nm_funcs; } ;
typedef scalar_t__ off_t ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_12__ {int n_flag; } ;
struct TYPE_11__ {int (* nf_read_rpc_async ) (TYPE_2__*,scalar_t__,size_t,int ,int ,int *,struct nfsreq**) ;int (* nf_read_rpc_async_finish ) (TYPE_2__*,struct nfsreq*,int ,size_t*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_2__*,scalar_t__,size_t,int ) ;
 int FUNC_1 (int,TYPE_2__*,int,scalar_t__,int) ;
 int FUNC_2 (int,TYPE_2__*,int,scalar_t__,int ) ;
 int VAR_3 ;
 struct nfsmount* FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct nfsmount*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct nfsmount*) ;
 int FUNC_10 (struct nfsmount*) ;
 int FUNC_11 (struct nfsmount*,int) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,size_t,int ,int ,int *,struct nfsreq**) ;
 int FUNC_13 (TYPE_2__*,struct nfsreq*,int ,size_t*,int*) ;
 int FUNC_14 (int *,scalar_t__,char*,int) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

int
FUNC_19(nfsnode_t VAR_9, uio_t VAR_10, vfs_context_t VAR_11)
{
 struct nfsmount *VAR_12;
 int VAR_13 = 0, VAR_14, VAR_15 = 0;
 size_t VAR_16, VAR_17, VAR_18;
 user_ssize_t VAR_19;
 off_t VAR_20;
 struct nfsreq VAR_21, *VAR_22 = &VAR_21;
 uint32_t VAR_23 = 0, VAR_24 = 0;

 FUNC_2(536, VAR_9, FUNC_15(VAR_10), FUNC_16(VAR_10), 0);
 VAR_12 = FUNC_3(VAR_9);
 if (FUNC_7(VAR_12))
  return (VAR_2);
 VAR_14 = VAR_12->nm_vers;
 VAR_16 = VAR_12->nm_rsize;

 VAR_20 = FUNC_15(VAR_10);
 VAR_19 = FUNC_16(VAR_10);
 if ((VAR_14 == VAR_4) && ((uint64_t)(VAR_20 + VAR_19) > 0xffffffffULL)) {
  FUNC_1(536, VAR_9, FUNC_15(VAR_10), FUNC_16(VAR_10), VAR_0);
  return (VAR_0);
 }

 while (VAR_19 > 0) {
  VAR_17 = VAR_18 = (VAR_19 > (user_ssize_t)VAR_16) ? VAR_16 : (size_t)VAR_19;
  FUNC_0(536, VAR_9, VAR_20, VAR_17, 0);
  if (VAR_9->n_flag & VAR_6) {
   VAR_13 = VAR_1;
   break;
  }
  if (VAR_12->nm_vers >= VAR_5)
   VAR_23 = VAR_12->nm_stategenid;
  VAR_13 = VAR_12->nm_funcs->nf_read_rpc_async(VAR_9, VAR_20, VAR_17,
    FUNC_17(VAR_11), FUNC_18(VAR_11), ((void*)0), &VAR_22);
  if (!VAR_13)
   VAR_13 = VAR_12->nm_funcs->nf_read_rpc_async_finish(VAR_9, VAR_22, VAR_10, &VAR_18, &VAR_15);
  if ((VAR_12->nm_vers >= VAR_5) && FUNC_8(VAR_13) &&
      (++VAR_24 <= FUNC_9(VAR_12))) {
   FUNC_5(&VAR_12->nm_lock);
   if ((VAR_13 != VAR_3) && (VAR_23 == VAR_12->nm_stategenid)) {
    FUNC_4(VAR_9, "nfs_read_rpc: error %d, initiating recovery", VAR_13);
    FUNC_11(VAR_12, VAR_13);
   }
   FUNC_6(&VAR_12->nm_lock);
   if (VAR_9->n_flag & VAR_6) {
    VAR_13 = VAR_1;
   } else {
    if (VAR_13 == VAR_3)
     FUNC_14(&VAR_12->nm_state, (VAR_7-1), "nfsgrace", 2*VAR_8);
    if (!(VAR_13 = FUNC_10(VAR_12)))
     continue;
   }
  }
  if (VAR_13)
   break;
  VAR_20 += VAR_18;
  VAR_19 -= VAR_18;
  if (VAR_14 != VAR_4) {
   if (VAR_15 || (VAR_18 == 0))
    VAR_19 = 0;
  } else if (VAR_18 < VAR_17)
   VAR_19 = 0;
 }

 FUNC_1(536, VAR_9, VAR_15, FUNC_16(VAR_10), VAR_13);
 return (VAR_13);
}
