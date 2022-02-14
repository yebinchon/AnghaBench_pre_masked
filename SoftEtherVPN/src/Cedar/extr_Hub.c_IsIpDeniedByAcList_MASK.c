
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Deny; } ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_1__ AC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

bool FUNC_4(IP *VAR_1, LIST *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_0) != 0)
 {
  return 0;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_2);VAR_3++)
 {
  AC *VAR_4 = FUNC_2(VAR_2, VAR_3);

  if (FUNC_1(VAR_1, VAR_4))
  {
   if (VAR_4->Deny == 0)
   {
    return 0;
   }
   else
   {
    return 1;
   }
  }
 }

 return 0;
}
