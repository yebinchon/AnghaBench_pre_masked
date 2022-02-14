
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int ref; } ;
typedef int LIST ;
typedef TYPE_1__ CANCEL ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(LIST *VAR_0, CANCEL *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0);VAR_2++)
 {
  CANCEL *VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (VAR_3 == VAR_1)
  {
   return;
  }
 }

 FUNC_1(VAR_1->ref);
 FUNC_0(VAR_0, VAR_1);
}
