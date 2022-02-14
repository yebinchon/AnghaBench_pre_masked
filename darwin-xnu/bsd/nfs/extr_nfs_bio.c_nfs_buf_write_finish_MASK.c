
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int thread_t ;
struct TYPE_7__ {scalar_t__ le_next; } ;
struct nfsbuf {int nb_flags; int nb_error; int nb_dirty; scalar_t__ nb_commitlevel; scalar_t__ nb_dirtyend; scalar_t__ nb_dirtyoff; TYPE_1__ nb_vnbufs; scalar_t__ nb_endio; scalar_t__ nb_offio; TYPE_2__* nb_np; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_8__ {int n_error; int n_flag; int n_dirtyblkhd; int n_needcommitcnt; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int *,struct nfsbuf*,int ) ;
 int FUNC_4 (struct nfsbuf*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_14 ;
 int FUNC_10 (struct nfsbuf*) ;
 int VAR_15 ;
 int FUNC_11 (struct nfsbuf*,int ,int ) ;
 int VAR_16 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;

void
FUNC_16(struct nfsbuf *VAR_17, thread_t VAR_18, kauth_cred_t VAR_19)
{
 nfsnode_t VAR_20 = VAR_17->nb_np;
 int VAR_21 = (VAR_17->nb_flags & VAR_5) ? VAR_17->nb_error : 0;
 int VAR_22, VAR_23;
 uint32_t VAR_24;

 if ((VAR_21 == VAR_0) || (VAR_21 == VAR_1)) {
  FUNC_1(VAR_17->nb_flags, VAR_5);
  FUNC_7(VAR_17->nb_flags, VAR_4);
 }

 if (!VAR_21) {

  VAR_22 = FUNC_14(VAR_17->nb_offio) / VAR_13;
  VAR_23 = (FUNC_15(VAR_17->nb_endio) - 1) / VAR_13;

  VAR_24 = ((1 << (VAR_23 + 1)) - 1) & ~((1 << VAR_22) - 1);

  VAR_17->nb_dirty &= ~VAR_24;
 }


 if (!VAR_21 && (VAR_17->nb_commitlevel == VAR_10)) {
  if (!FUNC_2(VAR_17->nb_flags, VAR_7)) {
   FUNC_12(VAR_20);
   VAR_20->n_needcommitcnt++;
   FUNC_13(VAR_20);
   FUNC_7(VAR_17->nb_flags, VAR_7);
  }

  VAR_17->nb_dirtyoff = VAR_17->nb_offio;
  VAR_17->nb_dirtyend = VAR_17->nb_endio;
 } else if (FUNC_2(VAR_17->nb_flags, VAR_7)) {
  FUNC_12(VAR_20);
  VAR_20->n_needcommitcnt--;
  FUNC_0(VAR_20);
  FUNC_13(VAR_20);
  FUNC_1(VAR_17->nb_flags, VAR_7);
 }

 FUNC_1(VAR_17->nb_flags, VAR_8);
 if ((VAR_21 == VAR_0) || (VAR_21 == VAR_1) || (!VAR_21 && (VAR_17->nb_flags & VAR_7))) {
  FUNC_1(VAR_17->nb_flags, VAR_6);
  if (!FUNC_2(VAR_17->nb_flags, VAR_3)) {
   FUNC_7(VAR_17->nb_flags, VAR_3);
   FUNC_8(VAR_15);
   VAR_16++;
   FUNC_6();
   FUNC_9(VAR_15);
  }




  if (FUNC_2(VAR_17->nb_flags, VAR_2)) {

   FUNC_8(VAR_15);
   if (VAR_17->nb_vnbufs.le_next != VAR_9)
    FUNC_4(VAR_17, VAR_14);
   FUNC_3(&VAR_20->n_dirtyblkhd, VAR_17, VAR_14);
   FUNC_9(VAR_15);
  }
 } else {

  if (VAR_21) {
   FUNC_12(VAR_20);
   VAR_20->n_error = VAR_21;
   VAR_20->n_flag |= (VAR_12 | VAR_11);
   FUNC_5(VAR_20);
   FUNC_13(VAR_20);
  }

  VAR_17->nb_dirtyoff = VAR_17->nb_dirtyend = 0;
 }

 if (!VAR_21 && VAR_17->nb_dirty)
  FUNC_11(VAR_17, VAR_18, VAR_19);
 FUNC_10(VAR_17);
}
