
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Key; } ;
typedef int LIST ;
typedef TYPE_1__ INI_ENTRY ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;

INI_ENTRY *FUNC_3(LIST *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  INI_ENTRY *VAR_3 = FUNC_0(VAR_0, VAR_2);

  if (FUNC_2(VAR_3->Key, VAR_1) == 0)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
