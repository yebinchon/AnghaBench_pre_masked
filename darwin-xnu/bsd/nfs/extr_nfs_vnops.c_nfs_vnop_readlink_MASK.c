
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uio_t ;
typedef int uint32_t ;
struct vnop_readlink_args {int a_vp; int a_uio; int a_context; } ;
struct timespec {scalar_t__ tv_sec; } ;
struct nfsmount {int nm_vers; TYPE_1__* nm_funcs; } ;
struct nfsbuf {int nb_bufsize; int nb_error; int nb_validend; scalar_t__ nb_data; scalar_t__ nb_validoff; int nb_flags; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_13__ {int readlink_bios; int biocache_readlinks; } ;
struct TYPE_12__ {struct timespec n_rltim; } ;
struct TYPE_11__ {int (* nf_readlink_rpc ) (TYPE_2__*,scalar_t__,int*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,TYPE_2__*,int,int ,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_11 ;
 TYPE_2__* FUNC_5 (int ) ;
 struct nfsmount* FUNC_6 (int ) ;
 int FUNC_7 (struct timespec*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ,struct nfsbuf**) ;
 int FUNC_10 (struct nfsbuf*,int) ;
 int FUNC_11 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_12 (struct nfsmount*) ;
 int VAR_12 ;
 int FUNC_13 (TYPE_2__*,int ) ;
 TYPE_4__ VAR_13 ;
 int FUNC_14 (TYPE_2__*,scalar_t__,int*,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__,int,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;

int
FUNC_20(
 struct vnop_readlink_args *VAR_14)





{
 vfs_context_t VAR_15 = VAR_14->a_context;
 nfsnode_t VAR_16 = FUNC_5(VAR_14->a_vp);
 struct nfsmount *VAR_17;
 int VAR_18 = 0, VAR_19;
 uint32_t VAR_20;
 uio_t VAR_21 = VAR_14->a_uio;
 struct nfsbuf *VAR_22 = ((void*)0);
 struct timespec VAR_23;
 int VAR_24;

 if (FUNC_19(VAR_14->a_vp) != VAR_11)
  return (VAR_2);

 if (FUNC_16(VAR_21) == 0)
  return (0);
 if (FUNC_15(VAR_21) < 0)
  return (VAR_0);

 VAR_17 = FUNC_6(VAR_14->a_vp);
 if (FUNC_12(VAR_17))
  return (VAR_1);
 VAR_19 = VAR_17->nm_vers;



 if ((VAR_18 = FUNC_11(VAR_16, ((void*)0), VAR_15, VAR_12 ? VAR_10 : VAR_9))) {
  FUNC_0(531, VAR_16, 0xd1e0001, 0, VAR_18);
  return (VAR_18);
 }

 if (VAR_12) {
  VAR_24 = FUNC_8(VAR_16);
  FUNC_7(&VAR_23);
 }

retry:
 FUNC_3(1, &VAR_13.biocache_readlinks);
 VAR_18 = FUNC_9(VAR_16, 0, VAR_8, FUNC_18(VAR_15), VAR_4, &VAR_22);
 if (VAR_18) {
  FUNC_0(531, VAR_16, 0xd1e0002, 0, VAR_18);
  return (VAR_18);
 }

 if (VAR_12) {
  FUNC_2("timeo = %d ts.tv_sec = %ld need refresh = %d cached = %d\n", VAR_24, VAR_23.tv_sec,
        (VAR_16->n_rltim.tv_sec + VAR_24) < VAR_23.tv_sec || VAR_12 > 1,
        FUNC_1(VAR_22->nb_flags, VAR_5) == VAR_5);

  if (FUNC_1(VAR_22->nb_flags, VAR_5) && ((VAR_12 > 1) || ((VAR_16->n_rltim.tv_sec + VAR_24) < VAR_23.tv_sec))) {
   FUNC_4(VAR_22->nb_flags, VAR_7);
   FUNC_10(VAR_22, 0);
   goto retry;
  }
 }
 if (!FUNC_1(VAR_22->nb_flags, VAR_5)) {
readagain:
  FUNC_3(1, &VAR_13.readlink_bios);
  VAR_20 = VAR_22->nb_bufsize;
  VAR_18 = VAR_17->nm_funcs->nf_readlink_rpc(VAR_16, VAR_22->nb_data, &VAR_20, VAR_15);
  if (VAR_18) {
   if (VAR_18 == VAR_3) {
    FUNC_2("Stale FH from readlink rpc\n");
    VAR_18 = FUNC_13(VAR_16, VAR_15);
    if (VAR_18 == 0)
     goto readagain;
   }
   FUNC_4(VAR_22->nb_flags, VAR_6);
   VAR_22->nb_error = VAR_18;
   FUNC_2("readlink failed %d\n", VAR_18);
  } else {
   VAR_22->nb_validoff = 0;
   VAR_22->nb_validend = VAR_20;
   VAR_16->n_rltim = VAR_23;
   FUNC_2("readlink of %.*s\n", VAR_22->nb_validend, (char *)VAR_22->nb_data);
  }
 } else {
  FUNC_2("got cached link of %.*s\n", VAR_22->nb_validend, (char *)VAR_22->nb_data);
 }

 if (!VAR_18 && (VAR_22->nb_validend > 0))
  VAR_18 = FUNC_17(VAR_22->nb_data, VAR_22->nb_validend, VAR_21);
 FUNC_0(531, VAR_16, VAR_22->nb_validend, 0, VAR_18);
 FUNC_10(VAR_22, 1);
 return (VAR_18);
}
