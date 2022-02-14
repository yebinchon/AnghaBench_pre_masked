
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Lock; int Cedar; int * Listener; } ;
typedef TYPE_1__ DYNAMIC_LISTENER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(DYNAMIC_LISTENER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->Lock);
 {
  if (VAR_0->Listener != ((void*)0))
  {
   FUNC_5(VAR_0->Listener);
   FUNC_4(VAR_0->Listener);
   VAR_0->Listener = ((void*)0);
  }
 }
 FUNC_6(VAR_0->Lock);

 FUNC_3(VAR_0->Cedar);

 FUNC_0(VAR_0->Lock);

 FUNC_1(VAR_0);
}
