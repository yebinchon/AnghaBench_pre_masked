
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int thread_t ;
struct nfsmount {scalar_t__ nm_readahead; scalar_t__ nm_biosize; } ;
struct nfsbuf {int nb_validoff; int nb_validend; scalar_t__ nb_dirtyend; int nb_rcred; int nb_flags; int nb_dirty; scalar_t__ nb_valid; } ;
typedef scalar_t__ off_t ;
typedef TYPE_1__* nfsnode_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ daddr64_t ;
struct TYPE_7__ {scalar_t__ n_lastrahead; scalar_t__ n_size; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nfsmount* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,int ,int,struct nfsbuf**) ;
 int FUNC_7 (struct nfsbuf*) ;
 int FUNC_8 (struct nfsbuf*,int) ;
 scalar_t__ FUNC_9 (struct nfsmount*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(nfsnode_t VAR_9, int VAR_10, daddr64_t *VAR_11, daddr64_t VAR_12, thread_t VAR_13, kauth_cred_t VAR_14)
{
 struct nfsmount *VAR_15 = FUNC_3(VAR_9);
 struct nfsbuf *VAR_16;
 int VAR_17 = 0;
 uint32_t VAR_18;

 if (FUNC_9(VAR_15))
  return (VAR_0);
 if (VAR_15->nm_readahead <= 0)
  return (0);
 if (*VAR_11 > VAR_12)
  return (0);

 for (VAR_18 = 0; (VAR_18 < VAR_15->nm_readahead) && (*VAR_11 <= VAR_12); VAR_18++, *VAR_11 = *VAR_11 + 1) {

  if ((*VAR_11 * VAR_15->nm_biosize) >= (off_t)VAR_9->n_size) {

   *VAR_11 = VAR_12;
   break;
  }
  VAR_17 = FUNC_6(VAR_9, *VAR_11, VAR_15->nm_biosize, VAR_13, VAR_3|VAR_2, &VAR_16);
  if (VAR_17)
   break;
  FUNC_10(VAR_9);
  VAR_9->n_lastrahead = *VAR_11;
  FUNC_11(VAR_9);
  if (!VAR_16)
   continue;
  if ((VAR_10 & VAR_1) && FUNC_1(VAR_16->nb_flags, VAR_5) &&
      !VAR_16->nb_dirty && !FUNC_1(VAR_16->nb_flags, (VAR_6|VAR_7))) {
   FUNC_0(VAR_16->nb_flags, VAR_5);
   VAR_16->nb_valid = 0;
   VAR_16->nb_validoff = VAR_16->nb_validend = -1;
  }
  if ((VAR_16->nb_dirtyend <= 0) && !VAR_16->nb_dirty &&
      !FUNC_1(VAR_16->nb_flags, (VAR_5|VAR_6))) {
   FUNC_4(VAR_16->nb_flags, (VAR_8|VAR_4));
   if (VAR_10 & VAR_1)
    FUNC_4(VAR_16->nb_flags, VAR_7);
   if (!FUNC_2(VAR_16->nb_rcred) && FUNC_2(VAR_14)) {
    FUNC_5(VAR_14);
    VAR_16->nb_rcred = VAR_14;
   }
   if ((VAR_17 = FUNC_7(VAR_16)))
    break;
   continue;
  }
  FUNC_8(VAR_16, 1);
 }
 return (VAR_17);
}
