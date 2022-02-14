
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {char* pfrkt_name; int pfrkt_t; } ;
struct pfi_kif {int * pfik_ifp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,int,int*,int *,int *,int *,int ,int ) ;
 int FUNC_3 (char*,int,char*,int) ;

void
FUNC_4(struct pfr_ktable *VAR_3, struct pfi_kif *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0;

 VAR_2 = 0;

 if (VAR_4->pfik_ifp != ((void*)0))
  FUNC_1(VAR_4->pfik_ifp, VAR_5, VAR_6);

 if ((VAR_7 = FUNC_2(&VAR_3->pfrkt_t, FUNC_0(VAR_1),
     VAR_2, &VAR_8, ((void*)0), ((void*)0), ((void*)0), 0, VAR_0)))
  FUNC_3("pfi_table_update: cannot set %d new addresses "
      "into table %s: %d\n", VAR_2, VAR_3->pfrkt_name, VAR_7);
}
