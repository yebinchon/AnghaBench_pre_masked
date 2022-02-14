
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct nfsmount {int nm_biosize; } ;
struct nfsbuf {scalar_t__ nb_dirtyoff; scalar_t__ nb_dirtyend; int nb_lflags; int nb_flags; } ;
typedef int off_t ;
typedef int daddr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct nfsbuf*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct nfsbuf*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,struct nfsbuf*,int ) ;
 int FUNC_4 (int ) ;
 struct nfsmount* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 struct nfsbuf* FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (struct nfsbuf*) ;
 scalar_t__ FUNC_11 (struct nfsmount*) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_12(vnode_t VAR_8, off_t VAR_9)
{
 struct nfsmount *VAR_10 = FUNC_5(VAR_8);
 struct nfsbuf *VAR_11;
 int VAR_12 = 0;

 if (FUNC_11(VAR_10))
  return (VAR_1);

 FUNC_6(VAR_5);
 VAR_11 = FUNC_9(FUNC_4(VAR_8), (daddr64_t)(VAR_9 / VAR_10->nm_biosize));
 if (!VAR_11)
  goto out;
 FUNC_0(325, VAR_11, VAR_11->nb_flags, VAR_11->nb_dirtyoff, VAR_11->nb_dirtyend);
 if (FUNC_1(VAR_11->nb_lflags, VAR_2)) {
  VAR_12 = VAR_0;
  goto out;
 }





 if (VAR_11->nb_dirtyend > 0) {
  int VAR_13 = VAR_9 - FUNC_2(VAR_11);
  if ((VAR_11->nb_dirtyend > VAR_13) &&
      (VAR_11->nb_dirtyoff < (VAR_13 + VAR_3))) {






   VAR_12 = VAR_0;
   FUNC_10(VAR_11);
   FUNC_3(&VAR_6, VAR_11, VAR_4);
   VAR_7++;
   FUNC_8(1);
  }
 }
out:
 FUNC_7(VAR_5);
 return (VAR_12);
}
