
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct nfsmount {scalar_t__ nm_verf; } ;
struct nfsbuf {scalar_t__ nb_verf; int nb_flags; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_7__ {int n_needcommitcnt; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfsmount* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(nfsnode_t VAR_2, struct nfsbuf *VAR_3)
{
 struct nfsmount *VAR_4;

 if (!FUNC_2(VAR_3->nb_flags, VAR_0))
  return;

 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_4(VAR_4))
  return;
 if (!FUNC_2(VAR_3->nb_flags, VAR_1) && (VAR_3->nb_verf == VAR_4->nm_verf))
  return;


 FUNC_1(VAR_3->nb_flags, (VAR_0 | VAR_1));
 VAR_3->nb_verf = 0;
 FUNC_5(VAR_2);
 VAR_2->n_needcommitcnt--;
 FUNC_0(VAR_2);
 FUNC_6(VAR_2);
}
