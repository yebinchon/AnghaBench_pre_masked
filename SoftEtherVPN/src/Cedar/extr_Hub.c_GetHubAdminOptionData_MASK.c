
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t Value; int Name; } ;
struct TYPE_4__ {size_t NumItem; TYPE_2__* Items; } ;
typedef TYPE_1__ RPC_ADMIN_OPTION ;
typedef TYPE_2__ ADMIN_OPTION ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

UINT FUNC_1(RPC_ADMIN_OPTION *VAR_1, char *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 for (VAR_3 = 0;VAR_3 < VAR_1->NumItem;VAR_3++)
 {
  ADMIN_OPTION *VAR_4 = &VAR_1->Items[VAR_3];

  if (FUNC_0(VAR_4->Name, VAR_2) == 0)
  {
   return VAR_4->Value;
  }
 }

 return VAR_0;
}
