
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int des_key_sizes ;
typedef int des3_key_sizes ;
typedef int aes_key_sizes ;
typedef int UINT ;
struct TYPE_7__ {int ** EspDhs; int ** IkeDhs; int ** EspHashes; int ** EspCryptos; int ** IkeHashes; int ** IkeCryptos; void* DhsList; void* HashesList; void* CryptosList; } ;
typedef int IKE_HASH ;
typedef TYPE_1__ IKE_ENGINE ;
typedef int IKE_DH ;
typedef int IKE_CRYPTO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 int * FUNC_0 (TYPE_1__*,int ,int ,int*,int,int) ;
 int * FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int * FUNC_2 (TYPE_1__*,int ,int ,int) ;
 void* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;

IKE_ENGINE *FUNC_5()
{
 IKE_ENGINE *VAR_53 = FUNC_4(sizeof(IKE_ENGINE));
 IKE_CRYPTO *VAR_54, *VAR_55, *VAR_56;
 IKE_HASH *VAR_57, *VAR_58, *VAR_59, *VAR_60, *VAR_61;
 IKE_DH *VAR_62, *VAR_63, *VAR_64, *VAR_65, *VAR_66, *VAR_67;
 UINT VAR_68[] =
 {
  8,
 };
 UINT VAR_69[] =
 {
  24,
 };
 UINT VAR_70[] =
 {
  16, 24, 32,
 };

 VAR_53->CryptosList = FUNC_3(((void*)0));
 VAR_53->HashesList = FUNC_3(((void*)0));
 VAR_53->DhsList = FUNC_3(((void*)0));



 VAR_54 = FUNC_0(VAR_53, VAR_4, VAR_5,
  VAR_68, sizeof(VAR_68) / sizeof(UINT), 8);


 VAR_55 = FUNC_0(VAR_53, VAR_0, VAR_1,
  VAR_69, sizeof(VAR_69) / sizeof(UINT), 8);


 VAR_56 = FUNC_0(VAR_53, VAR_2, VAR_3,
  VAR_70, sizeof(VAR_70) / sizeof(UINT), 16);



 VAR_57 = FUNC_2(VAR_53, VAR_20, VAR_21, 20);



 VAR_59 = FUNC_2(VAR_53, VAR_22, VAR_23, 32);

 VAR_60 = FUNC_2(VAR_53, VAR_24, VAR_25, 48);

 VAR_61 = FUNC_2(VAR_53, VAR_26, VAR_27, 64);


 VAR_58 = FUNC_2(VAR_53, VAR_18, VAR_19, 16);


 VAR_62 = FUNC_1(VAR_53, VAR_6, VAR_7, 96);
 VAR_63 = FUNC_1(VAR_53, VAR_10, VAR_11, 128);
 VAR_64 = FUNC_1(VAR_53, VAR_16, VAR_17, 192);
 VAR_65 = FUNC_1(VAR_53, VAR_8, VAR_9, 256);
 VAR_66 = FUNC_1(VAR_53, VAR_12, VAR_13, 384);
 VAR_67 = FUNC_1(VAR_53, VAR_14, VAR_15, 512);


 VAR_53->IkeCryptos[VAR_30] = VAR_54;
 VAR_53->IkeCryptos[VAR_28] = VAR_55;
 VAR_53->IkeCryptos[VAR_29] = VAR_56;
 VAR_53->IkeHashes[VAR_37] = VAR_58;
 VAR_53->IkeHashes[VAR_38] = VAR_57;
 VAR_53->IkeHashes[VAR_39] = VAR_59;
 VAR_53->IkeHashes[VAR_40] = VAR_60;
 VAR_53->IkeHashes[VAR_41] = VAR_61;



 VAR_53->EspCryptos[VAR_52] = VAR_54;
 VAR_53->EspCryptos[VAR_50] = VAR_55;
 VAR_53->EspCryptos[VAR_51] = VAR_56;
 VAR_53->EspHashes[VAR_48] = VAR_58;
 VAR_53->EspHashes[VAR_49] = VAR_57;


 VAR_53->IkeDhs[VAR_36] = VAR_53->EspDhs[VAR_47] = VAR_62;
 VAR_53->IkeDhs[VAR_31] = VAR_53->EspDhs[VAR_42] = VAR_63;
 VAR_53->IkeDhs[VAR_32] = VAR_53->EspDhs[VAR_43] = VAR_64;
 VAR_53->IkeDhs[VAR_33] = VAR_53->EspDhs[VAR_44] = VAR_65;
 VAR_53->IkeDhs[VAR_34] = VAR_53->EspDhs[VAR_45] = VAR_66;
 VAR_53->IkeDhs[VAR_35] = VAR_53->EspDhs[VAR_46] = VAR_67;

 return VAR_53;
}
