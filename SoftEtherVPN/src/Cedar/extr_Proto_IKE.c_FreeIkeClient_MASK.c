
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SendID2_Buf; int SendID1_Buf; int * EtherIP; int * L2TP; } ;
typedef int IKE_SERVER ;
typedef TYPE_1__ IKE_CLIENT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(IKE_SERVER *VAR_0, IKE_CLIENT *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_1->L2TP != ((void*)0))
 {
  FUNC_4(VAR_1->L2TP, 1);
  FUNC_2(VAR_1->L2TP);
 }

 if (VAR_1->EtherIP != ((void*)0))
 {
  FUNC_3(VAR_1->EtherIP);
 }

 FUNC_1(VAR_1->SendID1_Buf);
 FUNC_1(VAR_1->SendID2_Buf);

 FUNC_0(VAR_1);
}
