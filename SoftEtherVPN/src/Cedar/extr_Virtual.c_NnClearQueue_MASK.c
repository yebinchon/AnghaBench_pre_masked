
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RecvQueue; int SendQueue; } ;
typedef int PKT ;
typedef TYPE_1__ NATIVE_NAT ;
typedef int BLOCK ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(NATIVE_NAT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->SendQueue);
 {
  while (1)
  {
   BLOCK *VAR_1 = FUNC_2(VAR_0->SendQueue);

   if (VAR_1 == ((void*)0))
   {
    break;
   }

   FUNC_0(VAR_1);
  }
 }
 FUNC_4(VAR_0->SendQueue);

 FUNC_3(VAR_0->RecvQueue);
 {
  while (1)
  {
   PKT *VAR_2 = FUNC_2(VAR_0->RecvQueue);

   if (VAR_2 == ((void*)0))
   {
    break;
   }

   FUNC_1(VAR_2);
  }
 }
 FUNC_4(VAR_0->RecvQueue);
}
