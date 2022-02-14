
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif_cmp {int pfik_name; } ;
struct pfi_kif {int pfik_dynaddrs; int pfik_tzero; int pfik_name; } ;
typedef int s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pfi_kif* FUNC_0 (int ,int *,struct pfi_kif*) ;
 int FUNC_1 (int ,int *,struct pfi_kif*) ;
 int FUNC_2 (int *) ;
 struct pfi_kif* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct pfi_kif_cmp*,int) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char const*,int) ;

struct pfi_kif *
FUNC_7(const char *VAR_5)
{
 struct pfi_kif *VAR_6;
 struct pfi_kif_cmp VAR_7;

 FUNC_4(&VAR_7, sizeof (VAR_7));
 FUNC_6(VAR_7.pfik_name, VAR_5, sizeof (VAR_7.pfik_name));
 if ((VAR_6 = FUNC_0(VAR_3, &VAR_4,
     (struct pfi_kif *)(void *)&VAR_7)) != ((void*)0))
  return (VAR_6);


 if ((VAR_6 = FUNC_3(sizeof (*VAR_6), VAR_2, VAR_0|VAR_1)) == ((void*)0))
  return (((void*)0));

 FUNC_6(VAR_6->pfik_name, VAR_5, sizeof (VAR_6->pfik_name));
 VAR_6->pfik_tzero = FUNC_5();
 FUNC_2(&VAR_6->pfik_dynaddrs);

 FUNC_1(VAR_3, &VAR_4, VAR_6);
 return (VAR_6);
}
