
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int SendStateChanged; int Lock; TYPE_1__* HaltTube; int RecvQueue; } ;
struct TYPE_9__ {int Ref; } ;
typedef TYPE_1__ TUBE ;
typedef int PKT ;
typedef TYPE_2__ NATIVE_NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(NATIVE_NAT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->RecvQueue);
 {
  while (1)
  {
   PKT *VAR_1 = FUNC_2(VAR_0->RecvQueue);

   if (VAR_1 == ((void*)0))
   {
    break;
   }

   FUNC_6(VAR_0, VAR_1);

   FUNC_1(VAR_1);
  }
 }
 FUNC_11(VAR_0->RecvQueue);

 if (VAR_0->SendStateChanged)
 {
  TUBE *VAR_2 = ((void*)0);

  FUNC_3(VAR_0->Lock);
  {
   if (VAR_0->HaltTube != ((void*)0))
   {
    VAR_2 = VAR_0->HaltTube;

    FUNC_0(VAR_2->Ref);
   }
  }
  FUNC_10(VAR_0->Lock);

  if (VAR_2 != ((void*)0))
  {
   FUNC_9(VAR_2, 1);

   VAR_0->SendStateChanged = 0;

   FUNC_8(VAR_2);
  }
 }

 FUNC_7(VAR_0);

 FUNC_5(VAR_0);
}
