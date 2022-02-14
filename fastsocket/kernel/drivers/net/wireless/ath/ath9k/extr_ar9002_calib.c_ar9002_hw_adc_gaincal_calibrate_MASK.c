
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct ath_hw {size_t* totalAdcIOddPhase; size_t* totalAdcIEvenPhase; size_t* totalAdcQOddPhase; size_t* totalAdcQEvenPhase; } ;
struct ath_common {int dummy; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,size_t) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,size_t,...) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_2, u8 VAR_3)
{
 struct ath_common *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_5 = VAR_2->totalAdcIOddPhase[VAR_12];
  VAR_6 = VAR_2->totalAdcIEvenPhase[VAR_12];
  VAR_7 = VAR_2->totalAdcQOddPhase[VAR_12];
  VAR_8 = VAR_2->totalAdcQEvenPhase[VAR_12];

  FUNC_4(VAR_4, VAR_1,
   "Starting ADC Gain Cal for Chain %d\n", VAR_12);

  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_odd_i = 0x%08x\n",
   VAR_12, VAR_5);
  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_even_i = 0x%08x\n",
   VAR_12, VAR_6);
  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_odd_q = 0x%08x\n",
   VAR_12, VAR_7);
  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_even_q = 0x%08x\n",
   VAR_12, VAR_8);

  if (VAR_5 != 0 && VAR_8 != 0) {
   VAR_10 =
    ((VAR_6 * 32) /
     VAR_5) & 0x3f;
   VAR_9 =
    ((VAR_7 * 32) /
     VAR_8) & 0x3f;

   FUNC_4(VAR_4, VAR_1,
    "Chn %d gain_mismatch_i = 0x%08x\n",
    VAR_12, VAR_10);
   FUNC_4(VAR_4, VAR_1,
    "Chn %d gain_mismatch_q = 0x%08x\n",
    VAR_12, VAR_9);

   VAR_11 = FUNC_1(VAR_2, FUNC_0(VAR_12));
   VAR_11 &= 0xfffff000;
   VAR_11 |= (VAR_9) | (VAR_10 << 6);
   FUNC_2(VAR_2, FUNC_0(VAR_12), VAR_11);

   FUNC_4(VAR_4, VAR_1,
    "ADC Gain Cal done for Chain %d\n", VAR_12);
  }
 }

 FUNC_2(VAR_2, FUNC_0(0),
    FUNC_1(VAR_2, FUNC_0(0)) |
    VAR_0);
}
