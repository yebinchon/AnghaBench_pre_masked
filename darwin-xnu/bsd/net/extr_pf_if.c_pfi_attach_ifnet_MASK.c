
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {struct ifnet* pfik_ifp; } ;
struct ifnet {struct pfi_kif* if_pf_kif; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 struct pfi_kif* FUNC_5 (int ) ;
 int FUNC_6 (struct pfi_kif*) ;
 int VAR_2 ;

void
FUNC_7(struct ifnet *VAR_3)
{
 struct pfi_kif *VAR_4;

 FUNC_0(VAR_1, VAR_0);

 VAR_2++;
 if ((VAR_4 = FUNC_5(FUNC_1(VAR_3))) == ((void*)0))
  FUNC_4("pfi_kif_get failed");

 FUNC_3(VAR_3);
 VAR_4->pfik_ifp = VAR_3;
 VAR_3->if_pf_kif = VAR_4;
 FUNC_2(VAR_3);

 FUNC_6(VAR_4);
}
