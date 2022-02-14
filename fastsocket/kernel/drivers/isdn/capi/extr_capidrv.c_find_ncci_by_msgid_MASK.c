
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {TYPE_2__* ncci_list; } ;
typedef TYPE_1__ capidrv_plci ;
struct TYPE_6__ {scalar_t__ msgid; struct TYPE_6__* next; } ;
typedef TYPE_2__ capidrv_ncci ;
typedef int capidrv_contr ;


 TYPE_1__* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline capidrv_ncci *FUNC_1(capidrv_contr * VAR_0,
            u32 VAR_1, u16 VAR_2)
{
 capidrv_plci *VAR_3;
 capidrv_ncci *VAR_4;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return ((void*)0);

 for (VAR_4 = VAR_3->ncci_list; VAR_4; VAR_4 = VAR_4->next)
  if (VAR_4->msgid == VAR_2)
   return VAR_4;
 return ((void*)0);
}
