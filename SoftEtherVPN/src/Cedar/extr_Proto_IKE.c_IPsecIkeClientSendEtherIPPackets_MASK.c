
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int Size; int Buf; } ;
struct TYPE_6__ {int SendPacketList; } ;
typedef int IKE_SERVER ;
typedef int IKE_CLIENT ;
typedef TYPE_1__ ETHERIP_SERVER ;
typedef TYPE_2__ BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2, ETHERIP_SERVER *VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_3->SendPacketList);VAR_4++)
 {
  BLOCK *VAR_5 = FUNC_3(VAR_3->SendPacketList, VAR_4);


  FUNC_2(VAR_1, VAR_2, VAR_5->Buf, VAR_5->Size, VAR_0);

  FUNC_1(VAR_5);
 }

 FUNC_0(VAR_3->SendPacketList);
}
