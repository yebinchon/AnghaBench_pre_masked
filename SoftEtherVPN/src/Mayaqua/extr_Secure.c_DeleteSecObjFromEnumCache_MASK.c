
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int * EnumCache; } ;
struct TYPE_7__ {scalar_t__ Type; int Name; } ;
typedef TYPE_1__ SEC_OBJ ;
typedef TYPE_2__ SECURE ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*) ;

void FUNC_5(SECURE *VAR_0, char *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0->EnumCache == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_0->EnumCache);VAR_3++)
 {
  SEC_OBJ *VAR_4 = FUNC_2(VAR_0->EnumCache, VAR_3);

  if (FUNC_4(VAR_4->Name, VAR_1) == 0)
  {
   if (VAR_4->Type == VAR_2)
   {
    FUNC_0(VAR_0->EnumCache, VAR_4);
    FUNC_1(VAR_4);
    break;
   }
  }
 }
}
