
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int PayloadList; } ;
struct TYPE_11__ {scalar_t__ TransformId; } ;
struct TYPE_13__ {scalar_t__ ProtocolId; int PayloadList; } ;
struct TYPE_12__ {int PayloadList; } ;
struct TYPE_10__ {TYPE_2__ Transform; TYPE_4__ Proposal; TYPE_3__ Sa; } ;
struct TYPE_14__ {TYPE_1__ Payload; } ;
typedef int IKE_SERVER ;
typedef int IKE_SA_TRANSFORM_SETTING ;
typedef TYPE_2__ IKE_PACKET_TRANSFORM_PAYLOAD ;
typedef TYPE_3__ IKE_PACKET_SA_PAYLOAD ;
typedef TYPE_4__ IKE_PACKET_PROPOSAL_PAYLOAD ;
typedef TYPE_5__ IKE_PACKET_PAYLOAD ;
typedef TYPE_6__ IKE_PACKET ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int *) ;

bool FUNC_4(IKE_SERVER *VAR_5, IKE_PACKET *VAR_6, IKE_SA_TRANSFORM_SETTING *VAR_7)
{
 IKE_PACKET_PAYLOAD *VAR_8;
 IKE_PACKET_SA_PAYLOAD *VAR_9;
 UINT VAR_10, VAR_11;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return 0;
 }


 VAR_8 = FUNC_1(VAR_6->PayloadList, VAR_1, 0);
 if (VAR_8 == ((void*)0))
 {
  return 0;
 }

 VAR_9 = &VAR_8->Payload.Sa;


 VAR_11 = FUNC_2(VAR_9->PayloadList, VAR_0);
 for (VAR_10 = 0;VAR_10 < VAR_11;VAR_10++)
 {
  IKE_PACKET_PAYLOAD *VAR_12 = FUNC_1(VAR_9->PayloadList, VAR_0, VAR_10);

  if (VAR_12 != ((void*)0))
  {
   IKE_PACKET_PROPOSAL_PAYLOAD *VAR_13 = &VAR_12->Payload.Proposal;


   if (VAR_13->ProtocolId == VAR_3)
   {

    UINT VAR_14, VAR_15;

    VAR_15 = FUNC_2(VAR_13->PayloadList, VAR_2);
    for (VAR_14 = 0;VAR_14 < VAR_15;VAR_14++)
    {
     IKE_PACKET_PAYLOAD *VAR_16 = FUNC_1(VAR_13->PayloadList, VAR_2, VAR_14);
     if (VAR_16 != ((void*)0))
     {
      IKE_PACKET_TRANSFORM_PAYLOAD *VAR_17 = &VAR_16->Payload.Transform;

      if (VAR_17->TransformId == VAR_4)
      {
       IKE_SA_TRANSFORM_SETTING VAR_18;

       if (FUNC_3(VAR_5, VAR_17, &VAR_18))
       {
        FUNC_0(VAR_7, &VAR_18, sizeof(IKE_SA_TRANSFORM_SETTING));
        return 1;
       }
      }
     }
    }
   }
  }
 }

 return 0;
}
