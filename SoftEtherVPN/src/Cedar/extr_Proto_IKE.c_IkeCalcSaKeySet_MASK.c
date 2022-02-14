
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int tmp ;
typedef int UCHAR ;
struct TYPE_24__ {int Size; int Buf; } ;
struct TYPE_23__ {int Size; int Buf; } ;
struct TYPE_20__ {int CryptoKeySize; int Crypto; int * Hash; } ;
struct TYPE_22__ {TYPE_1__ TransformSetting; int HashSize; int SKEYID_e; int * CryptoKey; int SKEYID; int ResponderCookie; int InitiatorCookie; TYPE_7__* DhSharedKey; int SKEYID_a; int SKEYID_d; TYPE_7__* InitiatorRand; TYPE_7__* ResponderRand; int Secret; } ;
struct TYPE_21__ {char* Secret; } ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_3__ IKE_SA ;
typedef int IKE_HASH ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (char*,int,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ,TYPE_4__*,TYPE_4__*) ;
 int * FUNC_7 (TYPE_2__*,int ,int ,int *,int ,int ) ;
 TYPE_4__* FUNC_8 (int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,int,char*) ;
 int FUNC_12 (TYPE_4__*,int*,int) ;
 int FUNC_13 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_14 (TYPE_4__*,int ) ;

void FUNC_15(IKE_SERVER *VAR_1, IKE_SA *VAR_2, char *VAR_3)
{
 BUF *VAR_4;
 BUF *VAR_5;
 BUF *VAR_6, *VAR_7, *VAR_8;
 UCHAR VAR_9;
 IKE_HASH *VAR_10;
 char VAR_11[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_10 = VAR_2->TransformSetting.Hash;


 FUNC_11(VAR_2->Secret, sizeof(VAR_2->Secret), VAR_3 == ((void*)0) ? VAR_1->Secret : VAR_3);
 VAR_4 = FUNC_8(VAR_2->Secret);
 VAR_5 = FUNC_1(VAR_2->ResponderRand);
 FUNC_10(VAR_5);
 FUNC_0(VAR_11, sizeof(VAR_11), VAR_5->Buf, VAR_5->Size);
 FUNC_2("ResponderRand: %s\n", VAR_11);
 FUNC_0(VAR_11, sizeof(VAR_11), VAR_2->InitiatorRand->Buf, VAR_2->InitiatorRand->Size);
 FUNC_2("InitiatorRand: %s\n", VAR_11);

 FUNC_13(VAR_5, VAR_2->InitiatorRand);

 FUNC_6(VAR_10, VAR_2->SKEYID, VAR_4, VAR_5);

 FUNC_0(VAR_11, sizeof(VAR_11), VAR_2->SKEYID, VAR_2->HashSize);
 FUNC_2("SKEYID: %s\n", VAR_11);


 VAR_6 = FUNC_1(VAR_2->DhSharedKey);
 FUNC_10(VAR_6);
 FUNC_14(VAR_6, VAR_2->InitiatorCookie);
 FUNC_14(VAR_6, VAR_2->ResponderCookie);
 VAR_9 = 0;
 FUNC_12(VAR_6, &VAR_9, 1);
 FUNC_5(VAR_10, VAR_2->SKEYID_d, VAR_2->SKEYID, VAR_2->HashSize, VAR_6->Buf, VAR_6->Size);

 FUNC_0(VAR_11, sizeof(VAR_11), VAR_2->SKEYID_d, VAR_2->HashSize);
 FUNC_2("SKEYID_d: %s\n", VAR_11);


 VAR_7 = FUNC_9(VAR_2->SKEYID_d, VAR_2->HashSize);
 FUNC_10(VAR_7);
 FUNC_13(VAR_7, VAR_2->DhSharedKey);
 FUNC_14(VAR_7, VAR_2->InitiatorCookie);
 FUNC_14(VAR_7, VAR_2->ResponderCookie);
 VAR_9 = 1;
 FUNC_12(VAR_7, &VAR_9, 1);
 FUNC_5(VAR_10, VAR_2->SKEYID_a, VAR_2->SKEYID, VAR_2->HashSize, VAR_7->Buf, VAR_7->Size);

 FUNC_0(VAR_11, sizeof(VAR_11), VAR_2->SKEYID_a, VAR_2->HashSize);
 FUNC_2("SKEYID_a: %s\n", VAR_11);


 VAR_8 = FUNC_9(VAR_2->SKEYID_a, VAR_2->HashSize);
 FUNC_10(VAR_8);
 FUNC_13(VAR_8, VAR_2->DhSharedKey);
 FUNC_14(VAR_8, VAR_2->InitiatorCookie);
 FUNC_14(VAR_8, VAR_2->ResponderCookie);
 VAR_9 = 2;
 FUNC_12(VAR_8, &VAR_9, 1);
 FUNC_5(VAR_10, VAR_2->SKEYID_e, VAR_2->SKEYID, VAR_2->HashSize, VAR_8->Buf, VAR_8->Size);

 FUNC_0(VAR_11, sizeof(VAR_11), VAR_2->SKEYID_e, VAR_2->HashSize);
 FUNC_2("SKEYID_e: %s\n", VAR_11);

 if (VAR_2->CryptoKey != ((void*)0))
 {
  FUNC_4(VAR_2->CryptoKey);
 }

 VAR_2->CryptoKey = FUNC_7(VAR_1, VAR_2->SKEYID_e, VAR_2->HashSize, VAR_2->TransformSetting.Hash,
  VAR_2->TransformSetting.Crypto, VAR_2->TransformSetting.CryptoKeySize);


 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
}
