
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ root_cert; } ;
typedef TYPE_1__ X ;
typedef scalar_t__ UINT ;
typedef int LIST ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

X *FUNC_4(LIST *VAR_0, X *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1->root_cert)
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0);VAR_2++)
 {
  X *VAR_3 = FUNC_2(VAR_0, VAR_2);

  if (FUNC_0(VAR_1, VAR_3, 1, 1))
  {
   if (FUNC_1(VAR_1, VAR_3) == 0)
   {
    return VAR_3;
   }
  }
 }

 return ((void*)0);
}
