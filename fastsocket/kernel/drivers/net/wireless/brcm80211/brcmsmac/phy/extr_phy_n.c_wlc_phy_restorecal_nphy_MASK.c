
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int phy_rev; } ;
struct TYPE_4__ {int rxcal_coeffs_5G; scalar_t__* txcal_radio_regs_5G; int rxcal_coeffs_2G; scalar_t__* txcal_radio_regs_2G; scalar_t__* txcal_coeffs_5G; scalar_t__* txcal_coeffs_2G; } ;
struct brcms_phy {scalar_t__ nphy_iqcal_chanspec_2G; scalar_t__ nphy_iqcal_chanspec_5G; TYPE_1__ pubpi; TYPE_2__ calibration_cache; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
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
 int FUNC_3 (struct brcms_phy*,int ,int ,int,int ,scalar_t__) ;
 int FUNC_4 (struct brcms_phy*,int,int *) ;
 int FUNC_5 (struct brcms_phy*,int ,int,int,int,scalar_t__*) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct brcms_phy *VAR_17)
{
 u16 *VAR_18;
 u16 VAR_19[4];
 u16 *VAR_20;
 int VAR_21;
 u16 *VAR_22 = ((void*)0);

 if (FUNC_0(VAR_17->radio_chanspec)) {
  if (VAR_17->nphy_iqcal_chanspec_2G == 0)
   return;

  VAR_20 = VAR_17->calibration_cache.txcal_coeffs_2G;
  VAR_18 = &VAR_17->calibration_cache.txcal_coeffs_2G[5];
 } else {
  if (VAR_17->nphy_iqcal_chanspec_5G == 0)
   return;

  VAR_20 = VAR_17->calibration_cache.txcal_coeffs_5G;
  VAR_18 = &VAR_17->calibration_cache.txcal_coeffs_5G[5];
 }

 FUNC_5(VAR_17, VAR_4, 4, 80, 16, VAR_20);

 if (FUNC_1(VAR_17->pubpi.phy_rev, 3)) {
  VAR_19[0] = VAR_20[0];
  VAR_19[1] = VAR_20[1];
  VAR_19[2] = VAR_20[2];
  VAR_19[3] = VAR_20[3];
 } else {
  VAR_19[0] = 0;
  VAR_19[1] = 0;
  VAR_19[2] = 0;
  VAR_19[3] = 0;
 }

 FUNC_5(VAR_17, VAR_4, 4, 88, 16,
     VAR_19);

 FUNC_5(VAR_17, VAR_4, 2, 85, 16, VAR_18);

 FUNC_5(VAR_17, VAR_4, 2, 93, 16, VAR_18);

 if (FUNC_2(VAR_17->pubpi.phy_rev, 2))
  FUNC_6(VAR_17);

 if (FUNC_0(VAR_17->radio_chanspec)) {
  if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
   VAR_22 =
    VAR_17->calibration_cache.txcal_radio_regs_2G;
  } else if (FUNC_1(VAR_17->pubpi.phy_rev, 3)) {

   FUNC_7(VAR_17,
     VAR_13 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[0]);
   FUNC_7(VAR_17,
     VAR_14 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[1]);
   FUNC_7(VAR_17,
     VAR_13 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[2]);
   FUNC_7(VAR_17,
     VAR_14 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[3]);

   FUNC_7(VAR_17,
     VAR_11 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[4]);
   FUNC_7(VAR_17,
     VAR_12 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[5]);
   FUNC_7(VAR_17,
     VAR_11 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[6]);
   FUNC_7(VAR_17,
     VAR_12 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[7]);
  } else {
   FUNC_7(VAR_17, VAR_6,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[0]);
   FUNC_7(VAR_17, VAR_8,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[1]);
   FUNC_7(VAR_17, VAR_5,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[2]);
   FUNC_7(VAR_17, VAR_7,
     VAR_17->calibration_cache.
     txcal_radio_regs_2G[3]);
  }

  FUNC_4(VAR_17, 1,
       &VAR_17->calibration_cache.
       rxcal_coeffs_2G);
 } else {
  if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
   VAR_22 =
    VAR_17->calibration_cache.txcal_radio_regs_5G;
  } else if (FUNC_1(VAR_17->pubpi.phy_rev, 3)) {

   FUNC_7(VAR_17,
     VAR_13 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[0]);
   FUNC_7(VAR_17,
     VAR_14 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[1]);
   FUNC_7(VAR_17,
     VAR_13 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[2]);
   FUNC_7(VAR_17,
     VAR_14 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[3]);

   FUNC_7(VAR_17,
     VAR_11 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[4]);
   FUNC_7(VAR_17,
     VAR_12 |
     VAR_9,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[5]);
   FUNC_7(VAR_17,
     VAR_11 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[6]);
   FUNC_7(VAR_17,
     VAR_12 |
     VAR_10,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[7]);
  } else {
   FUNC_7(VAR_17, VAR_6,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[0]);
   FUNC_7(VAR_17, VAR_8,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[1]);
   FUNC_7(VAR_17, VAR_5,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[2]);
   FUNC_7(VAR_17, VAR_7,
     VAR_17->calibration_cache.
     txcal_radio_regs_5G[3]);
  }

  FUNC_4(VAR_17, 1,
       &VAR_17->calibration_cache.
       rxcal_coeffs_5G);
 }

 if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
  for (VAR_21 = 0; VAR_21 <= 1; VAR_21++) {

   FUNC_3(VAR_17, VAR_15, VAR_16, VAR_21,
      VAR_2,
      VAR_22[2 * VAR_21]);
   FUNC_3(VAR_17, VAR_15, VAR_16, VAR_21,
      VAR_3,
      VAR_22[2 * VAR_21 + 1]);

   FUNC_3(VAR_17, VAR_15, VAR_16, VAR_21,
      VAR_0,
      VAR_22[2 * VAR_21 + 4]);
   FUNC_3(VAR_17, VAR_15, VAR_16, VAR_21,
      VAR_1,
      VAR_22[2 * VAR_21 + 5]);
  }
 }
}
