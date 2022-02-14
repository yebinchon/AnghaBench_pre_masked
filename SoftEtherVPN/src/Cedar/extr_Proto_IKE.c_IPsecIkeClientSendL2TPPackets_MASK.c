
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {scalar_t__ SrcPort; scalar_t__ Size; scalar_t__ Data; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_12__ {int L2TPClientPort; } ;
struct TYPE_11__ {int SendPacketList; } ;
typedef TYPE_2__ L2TP_SERVER ;
typedef int IKE_SERVER ;
typedef TYPE_3__ IKE_CLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int,int *,scalar_t__) ;
 int FUNC_3 (int *,TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *,TYPE_3__*,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(IKE_SERVER *VAR_3, IKE_CLIENT *VAR_4, L2TP_SERVER *VAR_5)
{
 UINT VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 for (VAR_6 = 0;VAR_6 < FUNC_6(VAR_5->SendPacketList);VAR_6++)
 {
  UDPPACKET *VAR_7 = FUNC_5(VAR_5->SendPacketList, VAR_6);

  if (VAR_7->SrcPort != VAR_2)
  {

   FUNC_4(VAR_3, VAR_4, VAR_1, VAR_4->L2TPClientPort,
    VAR_7->Data, VAR_7->Size);
  }
  else
  {

   FUNC_3(VAR_3, VAR_4, VAR_7->Data, VAR_7->Size, VAR_0);




  }

  FUNC_1(VAR_7);
 }

 FUNC_0(VAR_5->SendPacketList);
}
