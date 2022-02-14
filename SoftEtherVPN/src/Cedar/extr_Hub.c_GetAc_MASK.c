
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Id; } ;
typedef int LIST ;
typedef TYPE_1__ AC ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

AC *FUNC_3(LIST *VAR_0, UINT VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0);VAR_2++)
 {
  AC *VAR_3 = FUNC_1(VAR_0, VAR_2);

  if (VAR_3->Id == VAR_1)
  {
   return FUNC_0(VAR_3, sizeof(AC));
  }
 }

 return ((void*)0);
}
