
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int LcidList; } ;
typedef int LIST ;
typedef TYPE_1__ LANGLIST ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

LANGLIST *FUNC_4(LIST *VAR_0, UINT VAR_1)
{
 LANGLIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_0);VAR_3++)
 {
  LANGLIST *VAR_4 = FUNC_2(VAR_0, VAR_3);

  if (FUNC_1(VAR_4->LcidList, VAR_1))
  {
   return VAR_4;
  }
 }

 VAR_2 = FUNC_0(VAR_0, "en");

 return VAR_2;
}
