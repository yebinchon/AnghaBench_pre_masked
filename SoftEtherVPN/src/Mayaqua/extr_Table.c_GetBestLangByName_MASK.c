
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {char* Name; } ;
typedef int LIST ;
typedef TYPE_1__ LANGLIST ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

LANGLIST *FUNC_4(LIST *VAR_0, char *VAR_1)
{
 UINT VAR_2;
 LANGLIST *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  LANGLIST *VAR_4 = FUNC_0(VAR_0, VAR_2);

  if (FUNC_3(VAR_4->Name, VAR_1) == 0)
  {
   VAR_3 = VAR_4;
   break;
  }
 }

 if (VAR_3 != ((void*)0))
 {
  return VAR_3;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  LANGLIST *VAR_5 = FUNC_0(VAR_0, VAR_2);

  if (FUNC_2(VAR_5->Name, VAR_1) || FUNC_2(VAR_1, VAR_5->Name))
  {
   VAR_3 = VAR_5;
   break;
  }
 }

 if (VAR_3 != ((void*)0))
 {
  return VAR_3;
 }

 return VAR_3;
}
