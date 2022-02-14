
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route {int * ro_srcia; int * ro_lle; int * ro_rt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct route const*,struct route*,size_t) ;

void
FUNC_4(struct route *VAR_0, const struct route *VAR_1, size_t VAR_2)
{

 FUNC_3(VAR_1, VAR_0, VAR_2);


 if (VAR_0->ro_rt != ((void*)0))
  FUNC_2(VAR_0->ro_rt);


 if (VAR_0->ro_lle != ((void*)0))
  FUNC_1(VAR_0->ro_lle);


 if (VAR_0->ro_srcia != ((void*)0))
  FUNC_0(VAR_0->ro_srcia);
}
