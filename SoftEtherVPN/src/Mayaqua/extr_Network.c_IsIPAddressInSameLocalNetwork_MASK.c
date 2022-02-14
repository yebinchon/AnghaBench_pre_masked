
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int* addr; } ;
typedef int LIST ;
typedef TYPE_1__ IP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;

bool FUNC_7(IP *VAR_0)
{
 bool VAR_1 = 0;
 LIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_1();

 if (VAR_2 != ((void*)0))
 {
  for (VAR_3 = 0;VAR_3 < FUNC_6(VAR_2);VAR_3++)
  {
   IP *VAR_4 = FUNC_5(VAR_2, VAR_3);

   if (FUNC_2(VAR_4))
   {
    if (FUNC_4(VAR_4) == 0 && VAR_4->addr[0] != 127)
    {
     if (FUNC_3(VAR_4, VAR_0))
     {
      VAR_1 = 1;
      break;
     }
    }
   }
  }

  FUNC_0(VAR_2);
 }

 return VAR_1;
}
