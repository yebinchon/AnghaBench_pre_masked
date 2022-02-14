
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int32_t ;
typedef int u8 ;
typedef int u32 ;
struct ath_hw {int* totalPowerMeasI; int* totalPowerMeasQ; int* totalIqCorrMeas; } ;
struct ath_common {int dummy; } ;
typedef int int32_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hw*,unsigned int const) ;
 int FUNC_2 (struct ath_hw*,unsigned int const,int,int) ;
 int FUNC_3 (struct ath_hw*,unsigned int const,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,unsigned int const,...) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_4, u8 VAR_5)
{
 struct ath_common *VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;
 static const u_int32_t VAR_16[3] = {
  130,
  129,
  128,
 };

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_8 = VAR_4->totalPowerMeasI[VAR_15];
  VAR_7 = VAR_4->totalPowerMeasQ[VAR_15];
  VAR_9 = VAR_4->totalIqCorrMeas[VAR_15];

  FUNC_5(VAR_6, VAR_3,
   "Starting IQ Cal and Correction for Chain %d\n", VAR_15);

  FUNC_5(VAR_6, VAR_3,
   "Original: Chn %d iq_corr_meas = 0x%08x\n",
   VAR_15, VAR_4->totalIqCorrMeas[VAR_15]);

  VAR_14 = 0;

  if (VAR_9 > 0x80000000) {
   VAR_9 = (0xffffffff - VAR_9) + 1;
   VAR_14 = 1;
  }

  FUNC_5(VAR_6, VAR_3, "Chn %d pwr_meas_i = 0x%08x\n",
   VAR_15, VAR_8);
  FUNC_5(VAR_6, VAR_3, "Chn %d pwr_meas_q = 0x%08x\n",
   VAR_15, VAR_7);
  FUNC_5(VAR_6, VAR_3, "iqCorrNeg is 0x%08x\n", VAR_14);

  VAR_11 = (VAR_8 / 2 + VAR_7 / 2) / 256;
  VAR_10 = VAR_7 / 64;

  if ((VAR_11 != 0) && (VAR_10 != 0)) {
   VAR_13 = VAR_9 / VAR_11;
   VAR_12 = VAR_8 / VAR_10 - 64;
   FUNC_5(VAR_6, VAR_3, "Chn %d iCoff = 0x%08x\n",
    VAR_15, VAR_13);
   FUNC_5(VAR_6, VAR_3, "Chn %d qCoff = 0x%08x\n",
    VAR_15, VAR_12);


   if (VAR_13 >= 63)
    VAR_13 = 63;
   else if (VAR_13 <= -63)
    VAR_13 = -63;


   if (VAR_14 == 0x0)
    VAR_13 = -VAR_13;


   if (VAR_12 >= 63)
    VAR_12 = 63;
   else if (VAR_12 <= -63)
    VAR_12 = -63;

   VAR_13 = VAR_13 & 0x7f;
   VAR_12 = VAR_12 & 0x7f;

   FUNC_5(VAR_6, VAR_3,
    "Chn %d : iCoff = 0x%x  qCoff = 0x%x\n",
    VAR_15, VAR_13, VAR_12);
   FUNC_5(VAR_6, VAR_3,
    "Register offset (0x%04x) before update = 0x%x\n",
    VAR_16[VAR_15],
    FUNC_1(VAR_4, VAR_16[VAR_15]));

   if (FUNC_0(VAR_4) &&
       (VAR_13 == 63 || VAR_12 == 63 ||
        VAR_13 == -63 || VAR_12 == -63))
    return;

   FUNC_2(VAR_4, VAR_16[VAR_15],
          VAR_1,
          VAR_13);
   FUNC_2(VAR_4, VAR_16[VAR_15],
          VAR_2,
          VAR_12);
   FUNC_5(VAR_6, VAR_3,
    "Register offset (0x%04x) QI COFF (bitfields 0x%08x) after update = 0x%x\n",
    VAR_16[VAR_15],
    VAR_1,
    FUNC_1(VAR_4, VAR_16[VAR_15]));
   FUNC_5(VAR_6, VAR_3,
    "Register offset (0x%04x) QQ COFF (bitfields 0x%08x) after update = 0x%x\n",
    VAR_16[VAR_15],
    VAR_2,
    FUNC_1(VAR_4, VAR_16[VAR_15]));

   FUNC_5(VAR_6, VAR_3,
    "IQ Cal and Correction done for Chain %d\n", VAR_15);
  }
 }

 FUNC_3(VAR_4, 130,
      VAR_0);
 FUNC_5(VAR_6, VAR_3,
  "IQ Cal and Correction (offset 0x%04x) enabled (bit position 0x%08x). New Value 0x%08x\n",
  (unsigned) (130),
  VAR_0,
  FUNC_1(VAR_4, 130));
}
