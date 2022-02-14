
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ Id; } ;
typedef int LIST ;
typedef TYPE_1__ AC ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(LIST *VAR_0, UINT VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0);VAR_2++)
 {
  AC *VAR_3 = FUNC_2(VAR_0, VAR_2);

  if (VAR_3->Id == VAR_1)
  {
   if (FUNC_0(VAR_0, VAR_3))
   {
    FUNC_1(VAR_3);

    FUNC_4(VAR_0);

    return 1;
   }
  }
 }

 return 0;
}
