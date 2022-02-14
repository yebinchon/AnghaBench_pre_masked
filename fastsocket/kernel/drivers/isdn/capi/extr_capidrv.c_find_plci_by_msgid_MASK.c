
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {scalar_t__ msgid; struct TYPE_5__* next; } ;
typedef TYPE_1__ capidrv_plci ;
struct TYPE_6__ {TYPE_1__* plci_list; } ;
typedef TYPE_2__ capidrv_contr ;



__attribute__((used)) static capidrv_plci *FUNC_0(capidrv_contr * VAR_0, u16 VAR_1)
{
 capidrv_plci *VAR_2;
 for (VAR_2 = VAR_0->plci_list; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->msgid == VAR_1)
   return VAR_2;
 return ((void*)0);
}
