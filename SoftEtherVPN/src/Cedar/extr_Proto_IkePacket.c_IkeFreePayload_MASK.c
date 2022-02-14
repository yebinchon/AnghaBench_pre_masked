
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int GeneralData; int Delete; int Notice; int CertRequest; int Cert; int Id; int Transform; int Proposal; int Sa; } ;
struct TYPE_6__ {int PayloadType; int * BitArray; TYPE_1__ Payload; } ;
typedef TYPE_2__ IKE_PACKET_PAYLOAD ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(IKE_PACKET_PAYLOAD *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 switch (VAR_0->PayloadType)
 {
 case 131:
  FUNC_9(&VAR_0->Payload.Sa);
  break;

 case 133:
  FUNC_8(&VAR_0->Payload.Proposal);
  break;

 case 129:
  FUNC_10(&VAR_0->Payload.Transform);
  break;

 case 141:
  FUNC_6(&VAR_0->Payload.Id);
  break;

 case 145:
  FUNC_2(&VAR_0->Payload.Cert);
  break;

 case 144:
  FUNC_3(&VAR_0->Payload.CertRequest);
  break;

 case 134:
  FUNC_7(&VAR_0->Payload.Notice);
  break;

 case 143:
  FUNC_5(&VAR_0->Payload.Delete);
  break;

 case 137:
 case 136:
 case 135:

  break;

 case 140:
 case 142:
 case 130:
 case 132:
 case 128:
 case 139:
 case 138:
 default:
  FUNC_4(&VAR_0->Payload.GeneralData);
  break;
 }

 if (VAR_0->BitArray != ((void*)0))
 {
  FUNC_1(VAR_0->BitArray);
 }

 FUNC_0(VAR_0);
}
