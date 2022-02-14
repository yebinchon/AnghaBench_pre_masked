
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int GeneralData; int NatOa; int Delete; int Notice; int CertRequest; int Cert; int Id; int Transform; int Proposal; int Sa; } ;
struct TYPE_7__ {int PayloadType; int BitArray; TYPE_1__ Payload; } ;
typedef TYPE_2__ IKE_PACKET_PAYLOAD ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 TYPE_2__* FUNC_12 (int) ;

IKE_PACKET_PAYLOAD *FUNC_13(UINT VAR_0, BUF *VAR_1)
{
 IKE_PACKET_PAYLOAD *VAR_2 = ((void*)0);
 bool VAR_3 = 1;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_12(sizeof(IKE_PACKET_PAYLOAD));
 VAR_2->PayloadType = VAR_0;

 switch (VAR_2->PayloadType)
 {
 case 131:
  VAR_3 = FUNC_10(&VAR_2->Payload.Sa, VAR_1);
  break;

 case 133:
  VAR_3 = FUNC_9(&VAR_2->Payload.Proposal, VAR_1);
  break;

 case 129:
  VAR_3 = FUNC_11(&VAR_2->Payload.Transform, VAR_1);
  break;

 case 141:
  VAR_3 = FUNC_6(&VAR_2->Payload.Id, VAR_1);
  break;

 case 145:
  VAR_3 = FUNC_2(&VAR_2->Payload.Cert, VAR_1);
  break;

 case 144:
  VAR_3 = FUNC_3(&VAR_2->Payload.CertRequest, VAR_1);
  break;

 case 134:
  VAR_3 = FUNC_8(&VAR_2->Payload.Notice, VAR_1);
  break;

 case 143:
  VAR_3 = FUNC_5(&VAR_2->Payload.Delete, VAR_1);
  break;

 case 137:
 case 136:
 case 135:
  VAR_3 = FUNC_7(&VAR_2->Payload.NatOa, VAR_1);
  break;

 case 140:
 case 142:
 case 130:
 case 132:
 case 128:
 case 139:
 case 138:
 default:
  VAR_3 = FUNC_4(&VAR_2->Payload.GeneralData, VAR_1);
  break;
 }

 if (VAR_3 == 0)
 {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }
 else
 {
  VAR_2->BitArray = FUNC_0(VAR_1);
 }

 return VAR_2;
}
