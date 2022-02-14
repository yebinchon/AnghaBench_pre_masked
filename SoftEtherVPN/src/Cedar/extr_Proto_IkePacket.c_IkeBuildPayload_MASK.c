
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int GeneralData; int NatOa; int Delete; int Notice; int CertRequest; int Cert; int Id; int Transform; int Proposal; int Sa; } ;
struct TYPE_5__ {int PayloadType; int * BitArray; TYPE_1__ Payload; } ;
typedef TYPE_2__ IKE_PACKET_PAYLOAD ;
typedef int BUF ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;

BUF *FUNC_12(IKE_PACKET_PAYLOAD *VAR_0)
{
 BUF *VAR_1 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 switch (VAR_0->PayloadType)
 {
 case 131:
  VAR_1 = FUNC_10(&VAR_0->Payload.Sa);
  break;

 case 133:
  VAR_1 = FUNC_9(&VAR_0->Payload.Proposal);
  break;

 case 129:
  VAR_1 = FUNC_11(&VAR_0->Payload.Transform);
  break;

 case 141:
  VAR_1 = FUNC_6(&VAR_0->Payload.Id);
  break;

 case 145:
  VAR_1 = FUNC_2(&VAR_0->Payload.Cert);
  break;

 case 144:
  VAR_1 = FUNC_3(&VAR_0->Payload.CertRequest);
  break;

 case 134:
  VAR_1 = FUNC_8(&VAR_0->Payload.Notice);
  break;

 case 143:
  VAR_1 = FUNC_5(&VAR_0->Payload.Delete);
  break;

 case 137:
 case 136:
 case 135:
  VAR_1 = FUNC_7(&VAR_0->Payload.NatOa);
  break;

 case 140:
 case 142:
 case 130:
 case 132:
 case 128:
 case 139:
 case 138:
 default:
  VAR_1 = FUNC_4(&VAR_0->Payload.GeneralData);
  break;
 }

 if (VAR_1 != ((void*)0))
 {
  if (VAR_0->BitArray != ((void*)0))
  {
   FUNC_1(VAR_0->BitArray);
  }
  VAR_0->BitArray = FUNC_0(VAR_1);
 }

 return VAR_1;
}
