
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int Value; int Name; } ;
typedef TYPE_1__ DYN_VALUE ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;

UINT64 FUNC_5(char *VAR_1)
{
 UINT64 VAR_2 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_0);
 {
  UINT VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0);VAR_3++)
  {
   DYN_VALUE *VAR_4 = FUNC_0(VAR_0, VAR_3);

   if (FUNC_3(VAR_4->Name, VAR_1) == 0)
   {
    VAR_2 = VAR_4->Value;
    break;
   }
  }
 }
 FUNC_4(VAR_0);

 return VAR_2;
}
