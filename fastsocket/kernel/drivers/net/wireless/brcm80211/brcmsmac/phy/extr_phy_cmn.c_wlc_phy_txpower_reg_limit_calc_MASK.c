
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct txpwr_limits {void** cck; void** ofdm; void** mcs_20_siso; void** mcs_20_cdd; void** ofdm_cdd; void** mcs_40_siso; void** ofdm_40_siso; void** mcs_40_cdd; void** ofdm_40_cdd; void** mcs_20_stbc; void** mcs_40_stbc; void** mcs_20_mimo; void** mcs_40_mimo; void* mcs32; } ;
struct brcms_phy {void** txpwr_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_1 (void*,void*) ;
 int FUNC_2 (void**,int ,int,int) ;
 int FUNC_3 (void**,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct brcms_phy *VAR_19, struct txpwr_limits *VAR_20,
          u16 VAR_21)
{
 u8 VAR_22[2 * VAR_2];
 u8 *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 int VAR_25 = 0, VAR_26, VAR_27, VAR_28;

 for (VAR_26 = VAR_3, VAR_27 = 0;
      VAR_27 < VAR_4; VAR_26++, VAR_27++)
  VAR_19->txpwr_limit[VAR_26] = VAR_20->cck[VAR_27];

 for (VAR_26 = VAR_17, VAR_27 = 0;
      VAR_27 < VAR_18; VAR_26++, VAR_27++)
  VAR_19->txpwr_limit[VAR_26] = VAR_20->ofdm[VAR_27];

 if (FUNC_0(VAR_19)) {

  for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
   switch (VAR_28) {
   case 0:

    VAR_23 = VAR_20->mcs_20_siso;
    VAR_24 = VAR_20->ofdm;
    VAR_25 = VAR_17;
    break;
   case 1:

    VAR_23 = VAR_20->mcs_20_cdd;
    VAR_24 = VAR_20->ofdm_cdd;
    VAR_25 = VAR_14;
    break;
   case 2:

    VAR_23 = VAR_20->mcs_40_siso;
    VAR_24 = VAR_20->ofdm_40_siso;
    VAR_25 =
     VAR_16;
    break;
   case 3:

    VAR_23 = VAR_20->mcs_40_cdd;
    VAR_24 = VAR_20->ofdm_40_cdd;
    VAR_25 = VAR_15;
    break;
   }

   for (VAR_27 = 0; VAR_27 < VAR_2;
        VAR_27++) {
    VAR_22[VAR_27] = 0;
    VAR_22[VAR_2 + VAR_27] =
     VAR_23[VAR_27];
   }
   FUNC_2(
    VAR_22, 0,
    VAR_2 -
    1, VAR_2);
   for (VAR_26 = VAR_25, VAR_27 = 0;
        VAR_27 < VAR_2; VAR_26++, VAR_27++)
    VAR_19->txpwr_limit[VAR_26] =
     FUNC_1(VAR_24[VAR_27],
         VAR_22[VAR_27]);
  }

  for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
   switch (VAR_28) {
   case 0:

    VAR_23 = VAR_20->ofdm;
    VAR_24 = VAR_20->mcs_20_siso;
    VAR_25 = VAR_7;
    break;
   case 1:

    VAR_23 = VAR_20->ofdm_cdd;
    VAR_24 = VAR_20->mcs_20_cdd;
    VAR_25 = VAR_5;
    break;
   case 2:

    VAR_23 = VAR_20->ofdm_40_siso;
    VAR_24 = VAR_20->mcs_40_siso;
    VAR_25 = VAR_11;
    break;
   case 3:

    VAR_23 = VAR_20->ofdm_40_cdd;
    VAR_24 = VAR_20->mcs_40_cdd;
    VAR_25 = VAR_9;
    break;
   }
   for (VAR_27 = 0; VAR_27 < VAR_2;
        VAR_27++) {
    VAR_22[VAR_27] = 0;
    VAR_22[VAR_2 + VAR_27] =
     VAR_23[VAR_27];
   }
   FUNC_3(
    VAR_22, 0,
    VAR_2 -
    1, VAR_2);
   for (VAR_26 = VAR_25, VAR_27 = 0;
        VAR_27 < VAR_0;
        VAR_26++, VAR_27++)
    VAR_19->txpwr_limit[VAR_26] =
     FUNC_1(VAR_24[VAR_27],
         VAR_22[VAR_27]);
  }

  for (VAR_28 = 0; VAR_28 < 2; VAR_28++) {
   switch (VAR_28) {
   case 0:

    VAR_25 = VAR_8;
    VAR_23 = VAR_20->mcs_20_stbc;
    break;
   case 1:

    VAR_25 = VAR_12;
    VAR_23 = VAR_20->mcs_40_stbc;
    break;
   }
   for (VAR_26 = VAR_25, VAR_27 = 0;
        VAR_27 < VAR_0;
        VAR_26++, VAR_27++)
    VAR_19->txpwr_limit[VAR_26] = VAR_23[VAR_27];
  }

  for (VAR_28 = 0; VAR_28 < 2; VAR_28++) {
   switch (VAR_28) {
   case 0:

    VAR_25 = VAR_6;
    VAR_23 = VAR_20->mcs_20_mimo;
    break;
   case 1:

    VAR_25 = VAR_10;
    VAR_23 = VAR_20->mcs_40_mimo;
    break;
   }
   for (VAR_26 = VAR_25, VAR_27 = 0;
        VAR_27 < VAR_1;
        VAR_26++, VAR_27++)
    VAR_19->txpwr_limit[VAR_26] = VAR_23[VAR_27];
  }

  VAR_19->txpwr_limit[VAR_13] = VAR_20->mcs32;

  VAR_19->txpwr_limit[VAR_9] =
   FUNC_1(VAR_19->txpwr_limit[VAR_9],
       VAR_19->txpwr_limit[VAR_13]);
  VAR_19->txpwr_limit[VAR_13] =
   VAR_19->txpwr_limit[VAR_9];
 }
}
