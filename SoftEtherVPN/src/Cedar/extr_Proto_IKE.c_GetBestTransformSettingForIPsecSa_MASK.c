
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int set ;
typedef scalar_t__ UINT ;
struct TYPE_21__ {int PayloadList; } ;
struct TYPE_19__ {scalar_t__ ProtocolId; TYPE_2__* Spi; int PayloadList; } ;
struct TYPE_18__ {int PayloadList; } ;
struct TYPE_15__ {int Transform; TYPE_5__ Proposal; TYPE_4__ Sa; } ;
struct TYPE_20__ {TYPE_1__ Payload; } ;
struct TYPE_17__ {scalar_t__ OnlyCapsuleModeIsInvalid; int SpiServerToClient; } ;
struct TYPE_16__ {int Size; int Buf; } ;
typedef TYPE_3__ IPSEC_SA_TRANSFORM_SETTING ;
typedef int IP ;
typedef int IKE_SERVER ;
typedef int IKE_PACKET_TRANSFORM_PAYLOAD ;
typedef TYPE_4__ IKE_PACKET_SA_PAYLOAD ;
typedef TYPE_5__ IKE_PACKET_PROPOSAL_PAYLOAD ;
typedef TYPE_6__ IKE_PACKET_PAYLOAD ;
typedef TYPE_7__ IKE_PACKET ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__* FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int) ;

bool FUNC_6(IKE_SERVER *VAR_4, IKE_PACKET *VAR_5, IPSEC_SA_TRANSFORM_SETTING *VAR_6, IP *VAR_7)
{
 IKE_PACKET_PAYLOAD *VAR_8;
 IKE_PACKET_SA_PAYLOAD *VAR_9;
 UINT VAR_10, VAR_11;
 bool VAR_12 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return 0;
 }

 FUNC_5(VAR_6, sizeof(IPSEC_SA_TRANSFORM_SETTING));


 VAR_8 = FUNC_1(VAR_5->PayloadList, VAR_1, 0);
 if (VAR_8 == ((void*)0))
 {
  return 0;
 }

 VAR_9 = &VAR_8->Payload.Sa;


 VAR_11 = FUNC_2(VAR_9->PayloadList, VAR_0);
 for (VAR_10 = 0;VAR_10 < VAR_11;VAR_10++)
 {
  IKE_PACKET_PAYLOAD *VAR_13 = FUNC_1(VAR_9->PayloadList, VAR_0, VAR_10);

  if (VAR_13 != ((void*)0))
  {
   IKE_PACKET_PROPOSAL_PAYLOAD *VAR_14 = &VAR_13->Payload.Proposal;


   if (VAR_14->ProtocolId == VAR_3 && VAR_14->Spi->Size == 4)
   {

    UINT VAR_15, VAR_16;

    VAR_16 = FUNC_2(VAR_14->PayloadList, VAR_2);
    for (VAR_15 = 0;VAR_15 < VAR_16;VAR_15++)
    {
     IKE_PACKET_PAYLOAD *VAR_17 = FUNC_1(VAR_14->PayloadList, VAR_2, VAR_15);
     if (VAR_17 != ((void*)0))
     {
      IKE_PACKET_TRANSFORM_PAYLOAD *VAR_18 = &VAR_17->Payload.Transform;
      IPSEC_SA_TRANSFORM_SETTING VAR_19;

      FUNC_5(&VAR_19, sizeof(VAR_19));

      if (FUNC_4(VAR_4, VAR_18, &VAR_19, VAR_7))
      {
       FUNC_0(VAR_6, &VAR_19, sizeof(IPSEC_SA_TRANSFORM_SETTING));

       VAR_6->SpiServerToClient = FUNC_3(VAR_14->Spi->Buf);

       return 1;
      }
      else
      {
       if (VAR_19.OnlyCapsuleModeIsInvalid)
       {
        if (VAR_12 == 0)
        {
         FUNC_0(VAR_6, &VAR_19, sizeof(IPSEC_SA_TRANSFORM_SETTING));
         VAR_12 = 1;
        }
       }
      }
     }
    }
   }
  }
 }

 return 0;
}
