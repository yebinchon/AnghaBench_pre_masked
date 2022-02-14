
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {void** p; } ;
typedef TYPE_1__ LIST ;


 void* FUNC_0 (TYPE_1__*,size_t) ;
 size_t FUNC_1 (TYPE_1__*) ;

bool FUNC_2(LIST *VAR_0, void *VAR_1, void *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0);VAR_3++)
 {
  void *VAR_4 = FUNC_0(VAR_0, VAR_3);

  if (VAR_4 == VAR_1)
  {
   VAR_0->p[VAR_3] = VAR_2;
   return 1;
  }
 }

 return 0;
}
