
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {int dummy; } ;
struct ifnet {struct pfi_kif* if_pf_kif; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct pfi_kif*) ;

int
FUNC_5(struct ifnet *VAR_2)
{
 struct pfi_kif *VAR_3 = VAR_2->if_pf_kif;

 if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_1);
  FUNC_0(VAR_0);

  FUNC_4(VAR_3);

  FUNC_1(VAR_0);
  FUNC_2(VAR_1);
 }
 return (0);
}
