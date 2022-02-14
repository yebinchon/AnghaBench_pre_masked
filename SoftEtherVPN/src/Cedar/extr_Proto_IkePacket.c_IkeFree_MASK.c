
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * DecryptedPayload; int * PayloadList; } ;
typedef TYPE_1__ IKE_PACKET ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(IKE_PACKET *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->PayloadList != ((void*)0))
 {
  FUNC_2(VAR_0->PayloadList);
 }

 if (VAR_0->DecryptedPayload != ((void*)0))
 {
  FUNC_1(VAR_0->DecryptedPayload);
 }

 FUNC_0(VAR_0);
}
