
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int Value; int Name; } ;
typedef TYPE_1__ DYN_VALUE ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int) ;
 int * VAR_0 ;

void FUNC_8(char *VAR_1, UINT64 VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0);
 {
  UINT VAR_3;
  DYN_VALUE *VAR_4 = ((void*)0);

  for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0);VAR_3++)
  {
   DYN_VALUE *VAR_5 = FUNC_1(VAR_0, VAR_3);

   if (FUNC_4(VAR_5->Name, VAR_1) == 0)
   {
    VAR_4 = VAR_5;
    break;
   }
  }

  if (VAR_4 == ((void*)0))
  {
   VAR_4 = FUNC_7(sizeof(DYN_VALUE));
   FUNC_5(VAR_4->Name, sizeof(VAR_4->Name), VAR_1);

   FUNC_0(VAR_0, VAR_4);
  }

  VAR_4->Value = VAR_2;
 }
 FUNC_6(VAR_0);
}
