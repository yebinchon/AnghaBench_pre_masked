
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hw*,scalar_t__) ;
 int FUNC_3 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_4 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static bool FUNC_5(struct ath_hw *VAR_15, struct ath9k_channel *VAR_16)
{
 int VAR_17;
 u_int32_t VAR_18;
 u_int32_t VAR_19, VAR_20 = 0, VAR_21 = 0;
 u_int32_t VAR_22, VAR_23;
 u_int32_t VAR_24 = 0;
 u_int32_t VAR_25 = 0;
 u_int32_t VAR_26 = 0;
 u_int32_t VAR_27;
 bool VAR_28 = 1;

 if (!(FUNC_4(VAR_15, VAR_16)))
  return 0;

 VAR_18 = FUNC_1(FUNC_2(VAR_15, VAR_13),
   VAR_14);

 for (VAR_17 = 0; VAR_17 < (VAR_18+1); VAR_17++) {
  VAR_19 = (FUNC_2(VAR_15, (VAR_12+(VAR_17<<2))) &
      VAR_10) >> VAR_11;
  if (!(VAR_20 & (1 << VAR_19))) {
   VAR_20 |= (1 << VAR_19);
   VAR_21++;
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_21; VAR_17++) {
  VAR_22 = (FUNC_2(VAR_15, (VAR_9 + (VAR_17 << 2)))
         & VAR_5) >> VAR_6;
  VAR_23 = (FUNC_2(VAR_15, (VAR_9 + (VAR_17 << 2)))
         & VAR_7) >> VAR_8;
  if (VAR_22 == 0)
   VAR_24++;

  if (VAR_23 == 0)
   VAR_25++;
 }
 VAR_26 = VAR_24 + VAR_25;
 if (VAR_26 > VAR_0) {
  VAR_27 = FUNC_2(VAR_15, VAR_1);
  if (FUNC_0(VAR_15)) {
   FUNC_3(VAR_15, VAR_1,
      (VAR_27 & VAR_2) |
      VAR_4);
  } else {
   FUNC_3(VAR_15, VAR_1,
      (VAR_27 & VAR_2) |
      VAR_3);
  }
  VAR_28 = FUNC_4(VAR_15, VAR_16);
  FUNC_3(VAR_15, VAR_1, VAR_27);
 }
 return VAR_28;
}
