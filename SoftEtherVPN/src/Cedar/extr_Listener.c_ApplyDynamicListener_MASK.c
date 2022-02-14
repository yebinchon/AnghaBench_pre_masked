
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Lock; int * Listener; int Port; int Protocol; int Cedar; scalar_t__* EnablePtr; } ;
typedef TYPE_1__ DYNAMIC_LISTENER ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

void FUNC_5(DYNAMIC_LISTENER *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->Lock);
 {

  if (*VAR_1->EnablePtr)
  {
   if (VAR_1->Listener == ((void*)0))
   {

    VAR_0;
    VAR_1->Listener = FUNC_1(VAR_1->Cedar, VAR_1->Protocol, VAR_1->Port);
   }
  }
  else
  {

   if (VAR_1->Listener != ((void*)0))
   {
    VAR_0;
    FUNC_3(VAR_1->Listener);
    FUNC_2(VAR_1->Listener);
    VAR_1->Listener = ((void*)0);
   }
  }
 }
 FUNC_4(VAR_1->Lock);
}
