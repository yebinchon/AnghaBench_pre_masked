
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ UINT ;
struct TYPE_17__ {int TransformId; } ;
struct TYPE_16__ {int Engine; TYPE_1__* IPsec; } ;
struct TYPE_15__ {int CryptoKeySize; int OnlyCapsuleModeIsInvalid; scalar_t__ CapsuleMode; TYPE_11__* Crypto; int * Hash; void* DhId; int Dh; void* HashId; int CryptoId; void* LifeKilobytes; void* LifeSeconds; } ;
struct TYPE_14__ {int UdpListener; } ;
struct TYPE_13__ {int* KeySizes; scalar_t__ VariableKeySize; } ;
typedef TYPE_2__ IPSEC_SA_TRANSFORM_SETTING ;
typedef int IP ;
typedef TYPE_3__ IKE_SERVER ;
typedef TYPE_4__ IKE_PACKET_TRANSFORM_PAYLOAD ;


 TYPE_11__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,void*) ;
 int * FUNC_2 (int ,int,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_11__*,int) ;
 void* FUNC_4 (TYPE_4__*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;

bool FUNC_8(IKE_SERVER *VAR_14, IKE_PACKET_TRANSFORM_PAYLOAD *VAR_15, IPSEC_SA_TRANSFORM_SETTING *VAR_16, IP *VAR_17)
{
 UINT VAR_18;
 UINT VAR_19;
 bool VAR_20;

 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
 {
  return 0;
 }

 VAR_20 = FUNC_6(VAR_14->IPsec->UdpListener, VAR_17, VAR_13);

 FUNC_7(VAR_16, sizeof(IPSEC_SA_TRANSFORM_SETTING));

 VAR_16->CryptoId = VAR_15->TransformId;
 VAR_16->HashId = FUNC_4(VAR_15, VAR_8, 0);

 VAR_16->DhId = FUNC_4(VAR_15, VAR_7, 0);

 VAR_16->LifeKilobytes = VAR_12;
 VAR_16->LifeSeconds = VAR_12;

 for (VAR_18 = 0;VAR_18 < FUNC_5(VAR_15, VAR_10);VAR_18++)
 {
  UINT VAR_21 = FUNC_4(VAR_15, VAR_10, VAR_18);

  switch (VAR_21)
  {
  case 128:
   VAR_16->LifeSeconds = FUNC_4(VAR_15, VAR_11, VAR_18);
   break;

  case 129:
   VAR_16->LifeKilobytes = FUNC_4(VAR_15, VAR_11, VAR_18);
   break;

  default:

   return 0;
  }
 }

 VAR_16->Crypto = FUNC_0(VAR_14->Engine, 1, VAR_16->CryptoId);
 VAR_16->Hash = FUNC_2(VAR_14->Engine, 1, VAR_16->HashId);
 VAR_16->Dh = FUNC_1(VAR_14->Engine, 1, VAR_16->DhId);

 if (VAR_16->Crypto == ((void*)0) || VAR_16->Hash == ((void*)0))
 {

  return 0;
 }

 if (VAR_16->Crypto->VariableKeySize)
 {

  VAR_16->CryptoKeySize = FUNC_4(VAR_15, VAR_9, 0);


  VAR_16->CryptoKeySize = VAR_16->CryptoKeySize / 8;

  if (VAR_16->CryptoKeySize == 0 || FUNC_3(VAR_16->Crypto, VAR_16->CryptoKeySize) == 0)
  {

   return 0;
  }
 }
 else
 {

  VAR_16->CryptoKeySize = VAR_16->Crypto->KeySizes[0];
 }

 VAR_19 = FUNC_4(VAR_15, VAR_6, 0);
 if (VAR_19 != VAR_2 && VAR_19 != VAR_3 &&
  VAR_19 != VAR_0 && VAR_19 != VAR_1)
 {

  if (VAR_19 == VAR_4 || VAR_19 == VAR_5)
  {
   if (VAR_20 == 0)
   {
    VAR_16->OnlyCapsuleModeIsInvalid = 1;
    return 0;
   }
   else
   {

   }
  }
  else
  {
   return 0;
  }
 }

 VAR_16->CapsuleMode = VAR_19;

 return 1;
}
