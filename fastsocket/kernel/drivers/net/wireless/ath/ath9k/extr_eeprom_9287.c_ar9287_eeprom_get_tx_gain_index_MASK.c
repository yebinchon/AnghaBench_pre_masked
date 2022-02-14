
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct chan_centers {int synth_center; } ;
struct cal_data_op_loop_ar9287 {scalar_t__** pwrPdg; } ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_3 (scalar_t__,scalar_t__*,size_t,size_t*,size_t*) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_1,
       struct ath9k_channel *VAR_2,
       struct cal_data_op_loop_ar9287 *VAR_3,
       u8 *VAR_4, u16 VAR_5, int8_t *VAR_6)
{
 u16 VAR_7 = 0, VAR_8 = 0, VAR_9;
 bool VAR_10;
 struct chan_centers VAR_11;

 FUNC_2(VAR_1, VAR_2, &VAR_11);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_4[VAR_9] == VAR_0)
   break;
 }

 VAR_10 = FUNC_3(
  (u8)FUNC_0(VAR_11.synth_center, FUNC_1(VAR_2)),
  VAR_4, VAR_9, &VAR_7, &VAR_8);

 if (VAR_10) {
  *VAR_6 = (int8_t) VAR_3[VAR_7].pwrPdg[0][0];
 } else {
  *VAR_6 = ((int8_t) VAR_3[VAR_7].pwrPdg[0][0] +
    (int8_t) VAR_3[VAR_8].pwrPdg[0][0])/2;
 }

}
