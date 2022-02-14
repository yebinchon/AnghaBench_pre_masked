
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int Size; scalar_t__ Buf; } ;
struct TYPE_9__ {scalar_t__ ProtocolId; int SpiList; } ;
struct TYPE_8__ {int * IkeClient; } ;
typedef int IKE_SERVER ;
typedef TYPE_1__ IKE_SA ;
typedef TYPE_2__ IKE_PACKET_DELETE_PAYLOAD ;
typedef int IKE_CLIENT ;
typedef TYPE_3__ BUF ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,scalar_t__) ;

void FUNC_8(IKE_SERVER *VAR_2, IKE_CLIENT *VAR_3, IKE_PACKET_DELETE_PAYLOAD *VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 if (VAR_4->ProtocolId == VAR_1)
 {
  UINT VAR_5;

  for (VAR_5 = 0;VAR_5 < FUNC_2(VAR_4->SpiList);VAR_5++)
  {
   BUF *VAR_6 = FUNC_1(VAR_4->SpiList, VAR_5);

   if (VAR_6->Size == 4)
   {
    UINT VAR_7 = FUNC_5(VAR_6->Buf);
    FUNC_3(VAR_2, FUNC_7(VAR_2, VAR_3, VAR_7));
   }
  }
 }
 else if (VAR_4->ProtocolId == VAR_0)
 {
  UINT VAR_8;

  for (VAR_8 = 0;VAR_8 < FUNC_2(VAR_4->SpiList);VAR_8++)
  {
   BUF *VAR_9 = FUNC_1(VAR_4->SpiList, VAR_8);

   if (VAR_9->Size == 16)
   {
    UINT64 VAR_10 = FUNC_6(((UCHAR *)VAR_9->Buf) + 0);
    UINT64 VAR_11 = FUNC_6(((UCHAR *)VAR_9->Buf) + 8);

    IKE_SA *VAR_12 = FUNC_0(VAR_2, VAR_11);

    if (VAR_12 != ((void*)0) && VAR_12->IkeClient == VAR_3)
    {
     FUNC_4(VAR_2, VAR_12);
    }
   }
  }
 }
}
