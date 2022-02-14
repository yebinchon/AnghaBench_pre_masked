
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int* KeySizes; scalar_t__ VariableKeySize; } ;
struct TYPE_9__ {int CryptoKeySize; TYPE_6__* Crypto; int * Dh; int * Hash; void* DhId; void* HashId; void* CryptoId; void* LifeKilobytes; void* LifeSeconds; } ;
struct TYPE_8__ {int Engine; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA_TRANSFORM_SETTING ;
typedef int IKE_PACKET_TRANSFORM_PAYLOAD ;


 TYPE_6__* FUNC_0 (int ,int,void*) ;
 int * FUNC_1 (int ,int,void*) ;
 int * FUNC_2 (int ,int,void*) ;
 void* VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_3 (TYPE_6__*,int) ;
 void* FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

bool FUNC_7(IKE_SERVER *VAR_9, IKE_PACKET_TRANSFORM_PAYLOAD *VAR_10, IKE_SA_TRANSFORM_SETTING *VAR_11)
{
 UINT VAR_12;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return 0;
 }

 FUNC_6(VAR_11, sizeof(IKE_SA_TRANSFORM_SETTING));

 VAR_11->CryptoId = FUNC_4(VAR_10, VAR_2, 0);
 VAR_11->HashId = FUNC_4(VAR_10, VAR_4, 0);

 if (FUNC_4(VAR_10, VAR_1, 0) != VAR_0)
 {

  return 0;
 }

 VAR_11->DhId = FUNC_4(VAR_10, VAR_3, 0);

 VAR_11->LifeKilobytes = VAR_8;
 VAR_11->LifeSeconds = VAR_8;

 for (VAR_12 = 0;VAR_12 < FUNC_5(VAR_10, VAR_6);VAR_12++)
 {
  UINT VAR_13 = FUNC_4(VAR_10, VAR_6, VAR_12);

  switch (VAR_13)
  {
  case 128:
   VAR_11->LifeSeconds = FUNC_4(VAR_10, VAR_7, VAR_12);
   break;

  case 129:
   VAR_11->LifeKilobytes = FUNC_4(VAR_10, VAR_7, VAR_12);
   break;

  default:

   return 0;
  }
 }

 VAR_11->Crypto = FUNC_0(VAR_9->Engine, 0, VAR_11->CryptoId);
 VAR_11->Hash = FUNC_2(VAR_9->Engine, 0, VAR_11->HashId);
 VAR_11->Dh = FUNC_1(VAR_9->Engine, 0, VAR_11->DhId);

 if (VAR_11->Crypto == ((void*)0) || VAR_11->Hash == ((void*)0) || VAR_11->Dh == ((void*)0))
 {

  return 0;
 }

 if (VAR_11->Crypto->VariableKeySize)
 {

  VAR_11->CryptoKeySize = FUNC_4(VAR_10, VAR_5, 0);


  VAR_11->CryptoKeySize = VAR_11->CryptoKeySize / 8;

  if (VAR_11->CryptoKeySize == 0 || FUNC_3(VAR_11->Crypto, VAR_11->CryptoKeySize) == 0)
  {

   return 0;
  }
 }
 else
 {

  VAR_11->CryptoKeySize = VAR_11->Crypto->KeySizes[0];
 }

 return 1;
}
