
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int EntryName; } ;
typedef TYPE_1__ WPC_ENTRY ;
typedef scalar_t__ UINT ;
typedef int LIST ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*) ;

WPC_ENTRY *FUNC_4(LIST *VAR_1, char *VAR_2)
{
 UINT VAR_3;
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_4, VAR_2);

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_1);VAR_3++)
 {
  WPC_ENTRY *VAR_5 = FUNC_1(VAR_1, VAR_3);

  if (FUNC_0(VAR_5->EntryName, VAR_4, VAR_0) == 0)
  {
   return VAR_5;
  }
 }

 return ((void*)0);
}
