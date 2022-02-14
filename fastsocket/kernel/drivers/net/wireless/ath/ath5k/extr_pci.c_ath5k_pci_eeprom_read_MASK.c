
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ath_common {scalar_t__ ah; } ;
struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_2 (struct ath5k_hw*,int,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool
FUNC_4(struct ath_common *VAR_11, u32 VAR_12, u16 *VAR_13)
{
 struct ath5k_hw *VAR_14 = (struct ath5k_hw *) VAR_11->ah;
 u32 VAR_15, VAR_16;




 if (VAR_14->ah_version == VAR_0) {
  FUNC_0(VAR_14, VAR_8, VAR_9);
  (void)FUNC_1(VAR_14, VAR_1 + (4 * VAR_12));
 } else {
  FUNC_2(VAR_14, VAR_12, VAR_1);
  FUNC_0(VAR_14, VAR_2,
    VAR_3);
 }

 for (VAR_16 = VAR_10; VAR_16 > 0; VAR_16--) {
  VAR_15 = FUNC_1(VAR_14, VAR_5);
  if (VAR_15 & VAR_6) {
   if (VAR_15 & VAR_7)
    return 0;
   *VAR_13 = (u16)(FUNC_1(VAR_14, VAR_4) &
     0xffff);
   return 1;
  }
  FUNC_3(15, 20);
 }

 return 0;
}
