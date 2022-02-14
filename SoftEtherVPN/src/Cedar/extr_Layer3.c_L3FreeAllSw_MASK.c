
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int * L3SwList; } ;
struct TYPE_5__ {int Name; } ;
typedef int LIST ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 void* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(CEDAR *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_7(((void*)0));

 FUNC_6(VAR_0->L3SwList);
 {
  for (VAR_2 = 0;VAR_2 < FUNC_5(VAR_0->L3SwList);VAR_2++)
  {
   L3SW *VAR_3 = FUNC_4(VAR_0->L3SwList, VAR_2);
   FUNC_2(VAR_1, FUNC_0(VAR_3->Name));
  }

  for (VAR_2 = 0;VAR_2 < FUNC_5(VAR_1);VAR_2++)
  {
   char *VAR_4 = FUNC_4(VAR_1, VAR_2);

   FUNC_3(VAR_0, VAR_4);

   FUNC_1(VAR_4);
  }

  FUNC_8(VAR_1);
 }
 FUNC_9(VAR_0->L3SwList);
}
