
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Ctx; scalar_t__ IsHMac; } ;
typedef TYPE_1__ MD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(MD *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->Ctx != ((void*)0))
 {
  if (VAR_0->IsHMac)
  {



   FUNC_3(VAR_0->Ctx);
   FUNC_2(VAR_0->Ctx);

  }
  else
  {



   FUNC_0(VAR_0->Ctx);

  }
 }

 FUNC_2(VAR_0);
}
