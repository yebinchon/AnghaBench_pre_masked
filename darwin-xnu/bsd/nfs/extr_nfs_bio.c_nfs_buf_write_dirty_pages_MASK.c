
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uio_t ;
typedef int uio_buf ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int thread_t ;
struct nfsmount {TYPE_1__* nm_funcs; } ;
struct nfsbuf {int nb_dirty; int nb_bufsize; scalar_t__ nb_verf; int nb_error; int nb_flags; scalar_t__ nb_data; TYPE_2__* nb_np; } ;
typedef scalar_t__ off_t ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_9__ {int write_bios; } ;
struct TYPE_8__ {scalar_t__ n_size; } ;
struct TYPE_7__ {int (* nf_commit_rpc ) (TYPE_2__*,scalar_t__,int,int ,scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct nfsbuf*) ;
 scalar_t__ FUNC_3 (struct nfsbuf*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsmount* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct nfsbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,int *) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int*,scalar_t__*) ;
 TYPE_4__ VAR_8 ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int,int ,scalar_t__) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int,int ,int ,int ,char**,int) ;
 int FUNC_13 (int ,scalar_t__,int ,int ) ;

int
FUNC_14(struct nfsbuf *VAR_9, thread_t VAR_10, kauth_cred_t VAR_11)
{
 nfsnode_t VAR_12 = VAR_9->nb_np;
 struct nfsmount *VAR_13 = FUNC_4(VAR_12);
 int VAR_14 = 0, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23 = VAR_9->nb_dirty;
 uint64_t VAR_24;
 uio_t VAR_25;
 char VAR_26 [ FUNC_8(1) ];

 if (!VAR_9->nb_dirty)
  return (0);


 FUNC_6(1, &VAR_8.write_bios);
 FUNC_5(VAR_9);
 FUNC_7(VAR_9->nb_flags, VAR_1);
 VAR_21 = VAR_9->nb_bufsize / VAR_5;
 VAR_16 = VAR_4;

 VAR_25 = FUNC_12(1, 0, VAR_6, VAR_7,
  &VAR_26, sizeof(VAR_26));

again:
 VAR_23 = VAR_9->nb_dirty;
 VAR_24 = VAR_9->nb_verf;
 VAR_15 = VAR_3;
 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  if (!FUNC_3(VAR_9, VAR_19))
   continue;
  VAR_20 = 1;
  while (((VAR_19 + VAR_20) < VAR_21) && FUNC_3(VAR_9, VAR_19 + VAR_20))
   VAR_20++;

  VAR_22 = VAR_19 * VAR_5;
  VAR_18 = VAR_20 * VAR_5;

  if (FUNC_2(VAR_9) + VAR_22 + VAR_18 > (off_t) VAR_12->n_size)
   VAR_18 -= (FUNC_2(VAR_9) + VAR_22 + VAR_18) - VAR_12->n_size;
  if (VAR_18 > 0) {
   VAR_17 = VAR_16;
   FUNC_13(VAR_25, FUNC_2(VAR_9) + VAR_22, VAR_6, VAR_7);
   FUNC_11(VAR_25, FUNC_0(VAR_9->nb_data + VAR_22), VAR_18);
   VAR_14 = FUNC_9(VAR_12, VAR_25, VAR_10, VAR_11, &VAR_17, &VAR_9->nb_verf);
   if (VAR_14)
    break;
   if (VAR_17 < VAR_15)
    VAR_15 = VAR_17;
   if ((VAR_15 != VAR_3) && (VAR_24 != VAR_9->nb_verf)) {

    VAR_16 = VAR_3;
    goto again;
   }
  }

  while (VAR_20--) {
   VAR_23 &= ~(1 << VAR_19);
   if (VAR_20)
    VAR_19++;
  }
 }
 FUNC_1(VAR_9->nb_flags, VAR_1);

 if (!VAR_14 && (VAR_15 != VAR_3)) {
  VAR_14 = VAR_13->nm_funcs->nf_commit_rpc(VAR_12, FUNC_2(VAR_9), VAR_9->nb_bufsize, VAR_11, VAR_24);
  if (VAR_14 == VAR_2) {

   VAR_16 = VAR_3;
   goto again;
  }
 }
 if (!VAR_14) {
  VAR_9->nb_dirty = VAR_23;
 } else {
  FUNC_7(VAR_9->nb_flags, VAR_0);
  VAR_9->nb_error = VAR_14;
 }
 return (VAR_14);
}
