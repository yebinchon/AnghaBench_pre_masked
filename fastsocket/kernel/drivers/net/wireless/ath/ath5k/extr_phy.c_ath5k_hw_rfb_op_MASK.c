
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ pos; scalar_t__ col; } ;
struct ath5k_rf_reg {scalar_t__ index; scalar_t__ bank; TYPE_1__ field; } ;
struct ath5k_hw {int ah_rf_regs_count; scalar_t__* ah_offset; scalar_t__* ah_rf_banks; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_2(struct ath5k_hw *VAR_0, const struct ath5k_rf_reg *VAR_1,
     u32 VAR_2, u8 VAR_3, bool VAR_4)
{
 const struct ath5k_rf_reg *VAR_5 = ((void*)0);
 u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u16 VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u32 *VAR_17;
 s32 VAR_18;
 int VAR_19;

 VAR_13 = 0;
 VAR_17 = VAR_0->ah_rf_banks;

 for (VAR_19 = 0; VAR_19 < VAR_0->ah_rf_regs_count; VAR_19++) {
  if (VAR_1[VAR_19].index == VAR_3) {
   VAR_5 = &VAR_1[VAR_19];
   break;
  }
 }

 if (VAR_17 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0("Rf register not found!\n");

  return 0;
 }

 VAR_7 = VAR_5->bank;
 VAR_8 = VAR_5->field.len;
 VAR_16 = VAR_5->field.pos;
 VAR_9 = VAR_5->field.col;





 VAR_6 = VAR_0->ah_offset[VAR_7];


 if (!(VAR_9 <= 3 && VAR_8 <= 32 && VAR_16 + VAR_8 <= 319)) {
  FUNC_0("invalid values at offset %u\n", VAR_6);
  return 0;
 }

 VAR_11 = ((VAR_16 - 1) / 8) + VAR_6;
 VAR_10 = (VAR_16 - 1) % 8;

 if (VAR_4)
  VAR_13 = FUNC_1(VAR_2, VAR_8);

 for (VAR_15 = 0, VAR_18 = VAR_8; VAR_18 > 0;
      VAR_10 = 0, VAR_11++) {

  VAR_14 = (VAR_10 + VAR_18 > 8) ? 8 :
     VAR_10 + VAR_18;

  VAR_12 = (((1 << VAR_14) - 1) ^ ((1 << VAR_10) - 1)) <<
        (VAR_9 * 8);

  if (VAR_4) {
   VAR_17[VAR_11] &= ~VAR_12;
   VAR_17[VAR_11] |= ((VAR_13 << VAR_10) << (VAR_9 * 8)) & VAR_12;
   VAR_13 >>= (8 - VAR_10);
  } else {
   VAR_13 |= (((VAR_17[VAR_11] & VAR_12) >> (VAR_9 * 8)) >> VAR_10)
    << VAR_15;
   VAR_15 += VAR_14 - VAR_10;
  }

  VAR_18 -= 8 - VAR_10;
 }

 VAR_13 = VAR_4 ? 1 : FUNC_1(VAR_13, VAR_8);

 return VAR_13;
}
