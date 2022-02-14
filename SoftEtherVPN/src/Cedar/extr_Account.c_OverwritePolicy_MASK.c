
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {scalar_t__ Ver3; } ;
typedef TYPE_1__ POLICY ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_3(POLICY **VAR_1, POLICY *VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_2 == ((void*)0))
 {

  if (*VAR_1 != ((void*)0))
  {
   FUNC_2(*VAR_1);
   *VAR_1 = ((void*)0);
  }
 }
 else
 {
  if (VAR_2->Ver3)
  {

   if (*VAR_1 != ((void*)0))
   {
    FUNC_2(*VAR_1);
    *VAR_1 = ((void*)0);
   }

   *VAR_1 = FUNC_0(VAR_2);
  }
  else
  {

   if (*VAR_1 == ((void*)0))
   {
    *VAR_1 = FUNC_0(VAR_2);
   }
   else
   {
    FUNC_1(*VAR_1, VAR_2, VAR_0 * sizeof(UINT));
   }
  }
 }
}
