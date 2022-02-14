
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {int * pfik_ifp; } ;
struct ifnet {int * if_pf_kif; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int VAR_2 ;
 int FUNC_3 (struct pfi_kif*,int ) ;
 int FUNC_4 (struct pfi_kif*) ;
 int VAR_3 ;

void
FUNC_5(struct ifnet *VAR_4)
{
 struct pfi_kif *VAR_5;

 FUNC_0(VAR_2, VAR_0);

 if ((VAR_5 = (struct pfi_kif *)VAR_4->if_pf_kif) == ((void*)0))
  return;

 VAR_3++;
 FUNC_4(VAR_5);

 FUNC_2(VAR_4);
 VAR_5->pfik_ifp = ((void*)0);
 VAR_4->if_pf_kif = ((void*)0);
 FUNC_1(VAR_4);

 FUNC_3(VAR_5, VAR_1);
}
