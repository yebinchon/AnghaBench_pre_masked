
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsreq {int r_flags; struct nfsmount* r_nmp; } ;
struct nfsmount {int nm_lock; int nm_resendq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nfsreq*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfsreq*) ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (struct nfsreq*,int) ;
 int VAR_1 ;

void
FUNC_7(struct nfsreq *VAR_2)
{
 struct nfsmount *VAR_3 = VAR_2->r_nmp;

 if (FUNC_4(VAR_3))
  return;

 FUNC_3(VAR_2);
 FUNC_1(&VAR_3->nm_lock);
 if (!(VAR_2->r_flags & VAR_0)) {
  FUNC_0(&VAR_3->nm_resendq, VAR_2, VAR_1);
  VAR_2->r_flags |= VAR_0;




  FUNC_6(VAR_2, 1);
 }
 FUNC_5(VAR_3);
 FUNC_2(&VAR_3->nm_lock);
}
