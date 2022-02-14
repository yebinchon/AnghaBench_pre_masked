
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_74__ TYPE_9__ ;
typedef struct TYPE_73__ TYPE_8__ ;
typedef struct TYPE_72__ TYPE_7__ ;
typedef struct TYPE_71__ TYPE_6__ ;
typedef struct TYPE_70__ TYPE_5__ ;
typedef struct TYPE_69__ TYPE_4__ ;
typedef struct TYPE_68__ TYPE_3__ ;
typedef struct TYPE_67__ TYPE_2__ ;
typedef struct TYPE_66__ TYPE_1__ ;
typedef struct TYPE_65__ TYPE_17__ ;
typedef struct TYPE_64__ TYPE_16__ ;
typedef struct TYPE_63__ TYPE_15__ ;
typedef struct TYPE_62__ TYPE_14__ ;
typedef struct TYPE_61__ TYPE_13__ ;
typedef struct TYPE_60__ TYPE_12__ ;
typedef struct TYPE_59__ TYPE_11__ ;
typedef struct TYPE_58__ TYPE_10__ ;


typedef int zero ;
typedef int spi_be ;
typedef int dummy_hash_data ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_74__ {scalar_t__ CapsuleMode; int * Dh; int LifeSeconds; } ;
struct TYPE_73__ {int Size; int * Buf; } ;
struct TYPE_72__ {int Size; int * Buf; } ;
struct TYPE_70__ {TYPE_4__* Data; } ;
struct TYPE_71__ {TYPE_5__ Hash; } ;
struct TYPE_69__ {TYPE_9__* Buf; } ;
struct TYPE_68__ {int Hash; } ;
struct TYPE_67__ {scalar_t__ Size; } ;
struct TYPE_66__ {int Size; int * Buf; } ;
struct TYPE_65__ {int Size; int * Buf; } ;
struct TYPE_64__ {TYPE_7__* MyPublicKey; } ;
struct TYPE_63__ {int ServerIP; int ClientIP; scalar_t__ SendNatOaRfc; scalar_t__ SendNatOaDraft2; scalar_t__ SendNatOaDraft1; TYPE_1__* SendID2_Buf; int SendID2_Port; int SendID2_Protocol; int SendID2_Type; TYPE_8__* SendID1_Buf; int SendID1_Port; int SendID1_Protocol; int SendID1_Type; scalar_t__ SendID1andID2; int CachedTransformSetting; TYPE_12__* CurrentIkeSa; } ;
struct TYPE_62__ {int FlagEncrypted; } ;
struct TYPE_61__ {TYPE_6__ Payload; TYPE_2__* BitArray; } ;
struct TYPE_60__ {int HashSize; int SKEYID_a; TYPE_3__ TransformSetting; int ResponderCookie; int InitiatorCookie; } ;
struct TYPE_59__ {int IPsecSaList; } ;
struct TYPE_58__ {int NumResends; TYPE_16__* Dh; struct TYPE_58__* PairIPsecSa; } ;
typedef int LIST ;
typedef TYPE_9__ IPSEC_SA_TRANSFORM_SETTING ;
typedef TYPE_10__ IPSECSA ;
typedef TYPE_11__ IKE_SERVER ;
typedef TYPE_12__ IKE_SA ;
typedef TYPE_13__ IKE_PACKET_PAYLOAD ;
typedef TYPE_14__ IKE_PACKET ;
typedef int IKE_HEADER ;
typedef int IKE_COMMON_HEADER ;
typedef TYPE_15__ IKE_CLIENT ;
typedef TYPE_16__ DH_CTX ;
typedef TYPE_17__ BUF ;


 int FUNC_0 (int *,TYPE_13__*) ;
 int FUNC_1 (TYPE_9__*,int *,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_17__*) ;
 scalar_t__ FUNC_6 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_11__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (TYPE_11__*,int *,TYPE_12__*,int *,char*) ;
 int FUNC_9 (TYPE_11__*,TYPE_10__*,TYPE_14__*) ;
 TYPE_17__* FUNC_10 (TYPE_14__*,int *) ;
 int FUNC_11 (int *,TYPE_12__*,scalar_t__) ;
 int FUNC_12 (TYPE_14__*) ;
 TYPE_16__* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_14__*) ;
 int FUNC_15 (int ,int *,int ,int,int *,scalar_t__) ;
 TYPE_14__* FUNC_16 (int ,int ,int ,int,int,int,scalar_t__,int *) ;
 TYPE_13__* FUNC_17 (int ,int *,int) ;
 TYPE_13__* FUNC_18 (int ,int ,int ,int *,int) ;
 TYPE_13__* FUNC_19 (int ,int *) ;
 TYPE_13__* FUNC_20 (int,int ,scalar_t__*,int,int ) ;
 TYPE_13__* FUNC_21 (int ) ;
 int FUNC_22 (int ,TYPE_10__*) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *,int) ;
 TYPE_17__* FUNC_25 (int *,scalar_t__) ;
 TYPE_17__* FUNC_26 () ;
 TYPE_10__* FUNC_27 (TYPE_11__*,TYPE_15__*,TYPE_12__*,int,scalar_t__,int,int *,scalar_t__,int *,scalar_t__,int *,int ,TYPE_9__*,int *,scalar_t__) ;
 int * FUNC_28 (int *) ;
 int FUNC_29 (TYPE_13__*) ;
 TYPE_17__* FUNC_30 (int ) ;
 TYPE_13__* FUNC_31 (TYPE_11__*,TYPE_9__*) ;
 int FUNC_32 (TYPE_17__*,TYPE_17__*) ;
 int FUNC_33 (TYPE_17__*,scalar_t__) ;
 int FUNC_34 (int *,int) ;

void FUNC_35(IKE_SERVER *VAR_16, IKE_CLIENT *VAR_17)
{
 IPSEC_SA_TRANSFORM_SETTING VAR_18;
 IKE_SA *VAR_19;
 UINT VAR_20;
 UCHAR VAR_21[VAR_4];

 if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
 {
  return;
 }

 if (FUNC_24(&VAR_17->CachedTransformSetting, sizeof(IPSEC_SA_TRANSFORM_SETTING)))
 {

  FUNC_2("Error: c->CachedTransformSetting is not existing.\n");
  return;
 }

 VAR_19 = VAR_17->CurrentIkeSa;
 if (VAR_19 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_16, ((void*)0), VAR_19, ((void*)0), "LI_START_QM_FROM_SERVER");

 FUNC_1(&VAR_18, &VAR_17->CachedTransformSetting, sizeof(IPSEC_SA_TRANSFORM_SETTING));

 VAR_20 = FUNC_7(VAR_16);

 FUNC_11(VAR_21, VAR_19, VAR_20);





 if (1)
 {
  IKE_PACKET *VAR_22;
  LIST *VAR_23;
  IKE_PACKET_PAYLOAD *VAR_24;
  IKE_PACKET_PAYLOAD *VAR_25;
  IKE_PACKET_PAYLOAD *VAR_26;
  IKE_PACKET_PAYLOAD *VAR_27;
  IKE_PACKET_PAYLOAD *VAR_28;
  IKE_PACKET_PAYLOAD *VAR_29 = ((void*)0);
  IKE_PACKET_PAYLOAD *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);
  UINT VAR_32 = 0;
  UCHAR *VAR_33 = ((void*)0);
  BUF *VAR_34;
  IPSECSA *VAR_35, *VAR_36;
  BUF *VAR_37;
  UINT VAR_38, VAR_39;
  BUF *VAR_40;
  BUF *VAR_41;
  UINT VAR_42;
  UINT VAR_43;
  UCHAR VAR_44[VAR_5];
  DH_CTX *VAR_45 = ((void*)0);
  UCHAR VAR_46[VAR_5];

  VAR_34 = FUNC_30(VAR_15);

  if (VAR_18.Dh != ((void*)0))
  {

   VAR_45 = FUNC_13(VAR_18.Dh);

   if (VAR_45 != ((void*)0))
   {
    VAR_29 = FUNC_17(VAR_9,
     VAR_45->MyPublicKey->Buf, VAR_45->MyPublicKey->Size);
   }
  }

  FUNC_34(VAR_46, sizeof(VAR_46));


  VAR_23 = FUNC_28(((void*)0));
  VAR_24 = FUNC_17(VAR_8, VAR_46, VAR_19->HashSize);
  FUNC_0(VAR_23, VAR_24);


  VAR_42 = FUNC_6(VAR_16, 0);
  VAR_43 = FUNC_3(VAR_42);


  VAR_27 = FUNC_31(VAR_16, &VAR_18);
  VAR_26 = FUNC_20(1, VAR_14, &VAR_43, sizeof(VAR_43),
   FUNC_29(VAR_27));
  VAR_25 = FUNC_21(FUNC_29(VAR_26));
  FUNC_0(VAR_23, VAR_25);


  VAR_28 = FUNC_17(VAR_13, VAR_34->Buf, VAR_34->Size);
  FUNC_0(VAR_23, VAR_28);


  if (VAR_29 != ((void*)0))
  {
   FUNC_0(VAR_23, VAR_29);
  }

  if (VAR_17->SendID1andID2)
  {

   if (VAR_18.CapsuleMode == VAR_6 || VAR_18.CapsuleMode == VAR_7)
   {
    UCHAR VAR_47[32];

    FUNC_34(VAR_47, sizeof(VAR_47));


    VAR_30 = FUNC_18((FUNC_23(&VAR_17->ServerIP) ? VAR_2 : VAR_3),
     0, 0,
     VAR_47, (FUNC_23(&VAR_17->ServerIP) ? 8 : 32));

    VAR_31 = FUNC_18(VAR_17->SendID1_Type,
     VAR_17->SendID1_Protocol, VAR_17->SendID1_Port,
     VAR_17->SendID1_Buf->Buf, VAR_17->SendID1_Buf->Size);
   }
   else
   {


    VAR_31 = FUNC_18(VAR_17->SendID1_Type,
     VAR_17->SendID1_Protocol, VAR_17->SendID1_Port,
     VAR_17->SendID1_Buf->Buf, VAR_17->SendID1_Buf->Size);

    VAR_30 = FUNC_18(VAR_17->SendID2_Type,
     VAR_17->SendID2_Protocol, VAR_17->SendID2_Port,
     VAR_17->SendID2_Buf->Buf, VAR_17->SendID2_Buf->Size);
   }

   FUNC_0(VAR_23, VAR_30);
   FUNC_0(VAR_23, VAR_31);
  }

  if (1)
  {

   if (VAR_17->SendNatOaDraft1)
   {
    FUNC_0(VAR_23, FUNC_19(VAR_11, &VAR_17->ServerIP));
   }

   if (VAR_17->SendNatOaDraft2)
   {
    FUNC_0(VAR_23, FUNC_19(VAR_12, &VAR_17->ServerIP));
   }

   if (VAR_17->SendNatOaRfc)
   {
    FUNC_0(VAR_23, FUNC_19(VAR_10, &VAR_17->ClientIP));
    FUNC_0(VAR_23, FUNC_19(VAR_10, &VAR_17->ServerIP));
   }
  }


  VAR_22 = FUNC_16(VAR_19->InitiatorCookie, VAR_19->ResponderCookie, VAR_1,
   0, 0, 0, VAR_20, VAR_23);


  VAR_37 = FUNC_10(VAR_22, ((void*)0));


  VAR_38 = sizeof(IKE_HEADER) + VAR_24->BitArray->Size + sizeof(IKE_COMMON_HEADER);
  VAR_39 = ((VAR_37->Size > VAR_38) ? (VAR_37->Size - VAR_38) : 0);

  VAR_40 = FUNC_25(((UCHAR *)VAR_37->Buf) + VAR_38, VAR_39);
  FUNC_5(VAR_37);


  VAR_41 = FUNC_26();
  FUNC_33(VAR_41, VAR_20);
  FUNC_32(VAR_41, VAR_40);
  FUNC_15(VAR_19->TransformSetting.Hash, VAR_44, VAR_19->SKEYID_a, VAR_19->HashSize, VAR_41->Buf, VAR_41->Size);
  FUNC_5(VAR_41);


  FUNC_1(VAR_24->Payload.Hash.Data->Buf, VAR_44, VAR_19->HashSize);


  VAR_36 = FUNC_27(VAR_16, VAR_17, VAR_19, 1, VAR_20, 0, VAR_21, VAR_42,
   VAR_34->Buf, VAR_34->Size, ((void*)0), 0,
   &VAR_18, VAR_33, VAR_32);

  VAR_35 = FUNC_27(VAR_16, VAR_17, VAR_19, 1, VAR_20, 1, VAR_21, 0,
   VAR_34->Buf, VAR_34->Size, ((void*)0), 0,
   &VAR_18, VAR_33, VAR_32);

  VAR_36->PairIPsecSa = VAR_35;
  VAR_35->PairIPsecSa = VAR_36;

  VAR_35->Dh = VAR_45;

  FUNC_22(VAR_16->IPsecSaList, VAR_36);
  FUNC_22(VAR_16->IPsecSaList, VAR_35);


  VAR_22->FlagEncrypted = 1;
  FUNC_9(VAR_16, VAR_35, VAR_22);
  VAR_35->NumResends = 3;




  FUNC_14(VAR_22);
  FUNC_4(VAR_33);
  FUNC_5(VAR_40);
  FUNC_5(VAR_34);
 }
}
