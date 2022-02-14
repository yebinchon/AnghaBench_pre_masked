
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,void*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (char*) ;

LIST *FUNC_9(char *VAR_1)
{
 LIST *VAR_2;
 TOKEN_LIST *VAR_3;
 UINT VAR_4;
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_6(VAR_1, ", ");
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_3->NumTokens == 0)
 {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 VAR_2 = FUNC_5(((void*)0));

 for (VAR_4 = 0;VAR_4 < VAR_3->NumTokens;VAR_4++)
 {
  char *VAR_5 = VAR_3->Token[VAR_4];
  UINT VAR_6;
  if (FUNC_3(VAR_5) == 0)
  {
   FUNC_7(VAR_2);
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6 == 0 || VAR_6 >= 65536)
  {
   FUNC_7(VAR_2);
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  if (FUNC_2(VAR_2, (void *)VAR_6))
  {
   FUNC_7(VAR_2);
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  FUNC_0(VAR_2, (void *)VAR_6);
 }

 FUNC_1(VAR_3);

 if (FUNC_4(VAR_2) > VAR_0)
 {
  FUNC_7(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
