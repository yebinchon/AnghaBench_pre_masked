
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_18__ {int HashSize; } ;
struct TYPE_17__ {scalar_t__* Buf; } ;
struct TYPE_16__ {int ServerPort; int ClientPort; int StartQuickModeAsSoon; int ClientIP; int ServerIP; } ;
struct TYPE_15__ {scalar_t__* NextIv; int Key; scalar_t__* Iv; } ;
struct TYPE_13__ {scalar_t__ CapsuleMode; scalar_t__ LifeKilobytes; TYPE_1__* Crypto; TYPE_7__* Hash; } ;
struct TYPE_14__ {int Spi; int CurrentSeqNo; int TotalSize; int StartQM_FlagSet; TYPE_2__ TransformSetting; scalar_t__* EspIv; int HashKey; int CryptoKey; TYPE_5__* IkeClient; } ;
struct TYPE_12__ {int BlockSize; } ;
typedef TYPE_3__ IPSECSA ;
typedef int IKE_SERVER ;
typedef TYPE_4__ IKE_CRYPTO_PARAM ;
typedef TYPE_5__ IKE_CLIENT ;
typedef TYPE_6__ BUF ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_3 (scalar_t__*,int,TYPE_4__*) ;
 int FUNC_4 (TYPE_7__*,scalar_t__*,int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int *,int ,int *,int,int *,int,scalar_t__*,int) ;
 scalar_t__* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__*,int) ;

void FUNC_8(IKE_SERVER *VAR_6, IPSECSA *VAR_7, UCHAR *VAR_8, UINT VAR_9, UCHAR VAR_10)
{
 UINT VAR_11;
 UINT VAR_12;
 UCHAR *VAR_13;
 UINT VAR_14;
 UINT VAR_15;
 IKE_CRYPTO_PARAM VAR_16;
 BUF *VAR_17;
 IKE_CLIENT *VAR_18;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == 0)
 {
  return;
 }

 VAR_18 = VAR_7->IkeClient;
 if (VAR_18 == ((void*)0))
 {
  return;
 }


 VAR_12 = VAR_9 + 2;
 if ((VAR_12 % VAR_7->TransformSetting.Crypto->BlockSize) != 0)
 {
  VAR_12 = ((VAR_12 / VAR_7->TransformSetting.Crypto->BlockSize) + 1) * VAR_7->TransformSetting.Crypto->BlockSize;
 }
 VAR_15 = VAR_12 - VAR_9 - 2;


 VAR_11 = sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize + VAR_12 + VAR_0;


 VAR_13 = FUNC_6(VAR_11 + VAR_1);


 FUNC_7(VAR_13, VAR_7->Spi);


 VAR_7->CurrentSeqNo++;
 FUNC_7(VAR_13 + sizeof(UINT), VAR_7->CurrentSeqNo);


 FUNC_0(VAR_13 + sizeof(UINT) * 2, VAR_7->EspIv, VAR_7->TransformSetting.Crypto->BlockSize);


 FUNC_0(VAR_13 + sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize, VAR_8, VAR_9);


 for (VAR_14 = 0;VAR_14 < VAR_15;VAR_14++)
 {
  VAR_13[sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize + VAR_9 + VAR_14] = (UCHAR)(VAR_14 + 1);
 }


 VAR_13[sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize + VAR_9 + VAR_15] = (UCHAR)VAR_15;


 VAR_13[sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize + VAR_9 + VAR_15 + 1] = VAR_10;


 FUNC_0(VAR_16.Iv, VAR_7->EspIv, VAR_7->TransformSetting.Crypto->BlockSize);
 VAR_16.Key = VAR_7->CryptoKey;

 VAR_17 = FUNC_3(VAR_13 + sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize, VAR_12, &VAR_16);
 if (VAR_17 != ((void*)0))
 {
  bool VAR_19 = 0;
  UINT VAR_20 = VAR_18->ServerPort;
  UINT VAR_21 = VAR_18->ClientPort;


  FUNC_0(VAR_13 + sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize, VAR_17->Buf, VAR_12);

  FUNC_2(VAR_17);


  FUNC_4(VAR_7->TransformSetting.Hash,
   VAR_13 + sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize + VAR_12,
   VAR_7->HashKey,
   VAR_7->TransformSetting.Hash->HashSize,
   VAR_13,
   sizeof(UINT) * 2 + VAR_7->TransformSetting.Crypto->BlockSize + VAR_12);



  if (VAR_7->TransformSetting.CapsuleMode == VAR_2 ||
   VAR_7->TransformSetting.CapsuleMode == VAR_3)
  {
   VAR_20 = VAR_21 = VAR_5;
  }


  FUNC_5(VAR_6, VAR_4, &VAR_18->ServerIP, VAR_20, &VAR_18->ClientIP, VAR_21,
   VAR_13, VAR_11);


  FUNC_0(VAR_7->EspIv, VAR_16.NextIv, VAR_7->TransformSetting.Crypto->BlockSize);

  VAR_7->TotalSize += VAR_11;

  if (VAR_7->CurrentSeqNo >= 0xf0000000)
  {
   VAR_19 = 1;
  }

  if (VAR_7->TransformSetting.LifeKilobytes != 0)
  {
   UINT64 VAR_22 = (UINT64)VAR_7->TransformSetting.LifeKilobytes * (UINT64)1000;
   UINT64 VAR_23 = VAR_22 * (UINT64)2 / (UINT64)3;

   if (VAR_7->TotalSize >= VAR_23)
   {
    VAR_19 = 1;
   }
  }

  if (VAR_19)
  {
   if (VAR_7->StartQM_FlagSet == 0)
   {
    VAR_7->StartQM_FlagSet = 1;
    VAR_18->StartQuickModeAsSoon = 1;
   }
  }
 }
 else
 {

  FUNC_1(VAR_13);
 }
}
