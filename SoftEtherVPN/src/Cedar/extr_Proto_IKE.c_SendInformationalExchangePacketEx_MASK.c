
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_12__ ;
typedef struct TYPE_37__ TYPE_11__ ;


typedef int dummy_hash_data ;
typedef int cp ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_44__ {int Iv; int Key; } ;
typedef TYPE_6__ UCHAR ;
struct TYPE_47__ {int FlagEncrypted; int MessageId; } ;
struct TYPE_42__ {TYPE_3__* Data; } ;
struct TYPE_43__ {TYPE_4__ Hash; } ;
struct TYPE_46__ {TYPE_5__ Payload; TYPE_1__* BitArray; } ;
struct TYPE_40__ {int Hash; } ;
struct TYPE_45__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; int CryptoKey; int HashSize; int SKEYID_a; TYPE_2__ TransformSetting; } ;
struct TYPE_41__ {int Buf; } ;
struct TYPE_39__ {scalar_t__ Size; } ;
struct TYPE_38__ {scalar_t__ Size; scalar_t__ Buf; } ;
struct TYPE_37__ {int ClientPort; int ClientIP; int ServerPort; int ServerIP; TYPE_7__* CurrentIkeSa; } ;
typedef int LIST ;
typedef int IKE_SERVER ;
typedef TYPE_7__ IKE_SA ;
typedef TYPE_8__ IKE_PACKET_PAYLOAD ;
typedef TYPE_9__ IKE_PACKET ;
typedef int IKE_HEADER ;
typedef TYPE_6__ IKE_CRYPTO_PARAM ;
typedef int IKE_COMMON_HEADER ;
typedef TYPE_11__ IKE_CLIENT ;
typedef TYPE_12__ BUF ;


 int FUNC_0 (int *,TYPE_8__*) ;
 int FUNC_1 (int ,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_12__* FUNC_5 (TYPE_9__*,TYPE_6__*) ;
 int FUNC_6 (int ,TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (int ,TYPE_6__*,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_9__* FUNC_11 (scalar_t__,scalar_t__,int ,int,int,int,int ,int *) ;
 TYPE_8__* FUNC_12 (int ,TYPE_6__*,int ) ;
 int FUNC_13 (int *,int ,int *,int ,int *,int ,scalar_t__,scalar_t__) ;
 TYPE_12__* FUNC_14 (TYPE_6__*,scalar_t__) ;
 TYPE_12__* FUNC_15 () ;
 int * FUNC_16 (int *) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (TYPE_12__*,TYPE_12__*) ;
 int FUNC_19 (TYPE_12__*,int ) ;
 int FUNC_20 (TYPE_6__*,int) ;

void FUNC_21(IKE_SERVER *VAR_4, IKE_CLIENT *VAR_5, IKE_PACKET_PAYLOAD *VAR_6, bool VAR_7, UINT64 VAR_8, UINT64 VAR_9)
{
 IKE_SA *VAR_10;
 IKE_PACKET *VAR_11;
 LIST *VAR_12;
 UCHAR VAR_13[VAR_1];
 IKE_PACKET_PAYLOAD *VAR_14;
 BUF *VAR_15;
 UINT VAR_16, VAR_17;
 BUF *VAR_18;
 BUF *VAR_19;
 UCHAR VAR_20[VAR_1];
 IKE_CRYPTO_PARAM VAR_21;
 bool VAR_22 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  FUNC_9(VAR_6);
  return;
 }

 VAR_10 = VAR_5->CurrentIkeSa;
 if (VAR_10 == ((void*)0))
 {
  VAR_22 = 1;
 }

 if (VAR_7)
 {
  VAR_22 = 1;
 }

 if (VAR_22 && (VAR_8 == 0 && VAR_9 == 0))
 {
  VAR_8 = FUNC_17();
  VAR_9 = 0;
 }

 VAR_12 = FUNC_16(((void*)0));

 FUNC_20(VAR_13, sizeof(VAR_13));


 if (VAR_22 == 0)
 {
  VAR_14 = FUNC_12(VAR_2, VAR_13, VAR_10->HashSize);
  FUNC_0(VAR_12, VAR_14);
 }


 FUNC_0(VAR_12, VAR_6);


 VAR_11 = FUNC_11((VAR_22 ? VAR_8 : VAR_10->InitiatorCookie), (VAR_22 ? VAR_9 : VAR_10->ResponderCookie),
  VAR_0, 0, 0, 0,
  FUNC_4(VAR_4), VAR_12);

 if (VAR_22 == 0)
 {

  VAR_15 = FUNC_5(VAR_11, ((void*)0));


  VAR_16 = sizeof(IKE_HEADER) + VAR_14->BitArray->Size + sizeof(IKE_COMMON_HEADER);
  VAR_17 = ((VAR_15->Size > VAR_16) ? (VAR_15->Size - VAR_16) : 0);

  VAR_18 = FUNC_14(((UCHAR *)VAR_15->Buf) + VAR_16, VAR_17);
  FUNC_3(VAR_15);


  VAR_19 = FUNC_15();
  FUNC_19(VAR_19, VAR_11->MessageId);
  FUNC_18(VAR_19, VAR_18);
  FUNC_10(VAR_10->TransformSetting.Hash, VAR_20, VAR_10->SKEYID_a, VAR_10->HashSize, VAR_19->Buf, VAR_19->Size);
  FUNC_3(VAR_19);


  FUNC_1(VAR_14->Payload.Hash.Data->Buf, VAR_20, VAR_10->HashSize);

  VAR_11->FlagEncrypted = 1;
  FUNC_3(VAR_18);
 }


 FUNC_20(&VAR_21, sizeof(VAR_21));

 if (VAR_22 == 0)
 {
  VAR_21.Key = VAR_10->CryptoKey;
  FUNC_6(VAR_21.Iv, VAR_10, VAR_11->MessageId);
 }

 VAR_15 = FUNC_5(VAR_11, &VAR_21);

 FUNC_13(VAR_4, VAR_3, &VAR_5->ServerIP, VAR_5->ServerPort,
  &VAR_5->ClientIP, VAR_5->ClientPort,
  VAR_15->Buf, VAR_15->Size);





 FUNC_2(VAR_15);

 FUNC_8(VAR_11);
}
