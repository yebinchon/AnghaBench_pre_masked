
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct il_priv {TYPE_4__* calib_info; } ;
struct il_eeprom_calib_measure {void* temperature; void* pa_det; void* gain_idx; void* actual_pow; } ;
struct il_eeprom_calib_ch_info {struct il_eeprom_calib_measure** measurements; void* ch_num; } ;
typedef void* s8 ;
typedef size_t s32 ;
struct TYPE_8__ {TYPE_3__* band_info; } ;
struct TYPE_6__ {size_t ch_num; struct il_eeprom_calib_measure** measurements; } ;
struct TYPE_5__ {size_t ch_num; struct il_eeprom_calib_measure** measurements; } ;
struct TYPE_7__ {TYPE_2__ ch2; TYPE_1__ ch1; } ;


 int FUNC_0 (char*,size_t,size_t,size_t,size_t,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (struct il_priv*,size_t) ;
 scalar_t__ FUNC_3 (size_t,size_t,void*,size_t,void*) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_3, u32 VAR_4,
   struct il_eeprom_calib_ch_info *VAR_5)
{
 s32 VAR_6 = -1;
 u32 VAR_7;
 u32 VAR_8;
 const struct il_eeprom_calib_measure *VAR_9;
 const struct il_eeprom_calib_measure *VAR_10;
 struct il_eeprom_calib_measure *VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 >= VAR_0) {
  FUNC_1("Tx Power can not find channel %d\n", VAR_4);
  return -1;
 }

 VAR_12 = VAR_3->calib_info->band_info[VAR_6].ch1.ch_num;
 VAR_13 = VAR_3->calib_info->band_info[VAR_6].ch2.ch_num;
 VAR_5->ch_num = (u8) VAR_4;

 FUNC_0("channel %d subband %d factory cal ch %d & %d\n", VAR_4, VAR_6,
    VAR_12, VAR_13);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_9 = &(VAR_3->calib_info->band_info[VAR_6].ch1.
          measurements[VAR_7][VAR_8]);
   VAR_10 = &(VAR_3->calib_info->band_info[VAR_6].ch2.
          measurements[VAR_7][VAR_8]);
   VAR_11 = &(VAR_5->measurements[VAR_7][VAR_8]);

   VAR_11->actual_pow =
       (u8) FUNC_3(VAR_4, VAR_12,
         VAR_9->actual_pow, VAR_13,
         VAR_10->actual_pow);
   VAR_11->gain_idx =
       (u8) FUNC_3(VAR_4, VAR_12,
         VAR_9->gain_idx, VAR_13,
         VAR_10->gain_idx);
   VAR_11->temperature =
       (u8) FUNC_3(VAR_4, VAR_12,
         VAR_9->temperature,
         VAR_13,
         VAR_10->temperature);
   VAR_11->pa_det =
       (s8) FUNC_3(VAR_4, VAR_12,
         VAR_9->pa_det, VAR_13,
         VAR_10->pa_det);

   FUNC_0("chain %d meas %d AP1=%d AP2=%d AP=%d\n", VAR_7,
      VAR_8, VAR_9->actual_pow, VAR_10->actual_pow,
      VAR_11->actual_pow);
   FUNC_0("chain %d meas %d NI1=%d NI2=%d NI=%d\n", VAR_7,
      VAR_8, VAR_9->gain_idx, VAR_10->gain_idx,
      VAR_11->gain_idx);
   FUNC_0("chain %d meas %d PA1=%d PA2=%d PA=%d\n", VAR_7,
      VAR_8, VAR_9->pa_det, VAR_10->pa_det, VAR_11->pa_det);
   FUNC_0("chain %d meas %d  T1=%d  T2=%d  T=%d\n", VAR_7,
      VAR_8, VAR_9->temperature, VAR_10->temperature,
      VAR_11->temperature);
  }
 }

 return 0;
}
