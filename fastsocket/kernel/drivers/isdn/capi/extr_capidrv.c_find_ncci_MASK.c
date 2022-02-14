
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {TYPE_2__* ncci_list; } ;
typedef TYPE_1__ capidrv_plci ;
struct TYPE_6__ {scalar_t__ ncci; struct TYPE_6__* next; } ;
typedef TYPE_2__ capidrv_ncci ;
typedef int capidrv_contr ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline capidrv_ncci *FUNC_1(capidrv_contr * VAR_0, u32 VAR_1)
{
 capidrv_plci *VAR_2;
 capidrv_ncci *VAR_3;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return ((void*)0);

 for (VAR_3 = VAR_2->ncci_list; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->ncci == VAR_1)
   return VAR_3;
 return ((void*)0);
}
