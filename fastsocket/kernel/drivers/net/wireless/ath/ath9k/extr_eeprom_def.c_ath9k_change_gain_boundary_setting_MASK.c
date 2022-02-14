
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ath_hw {int dummy; } ;
typedef scalar_t__ int8_t ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (size_t,size_t) ;

__attribute__((used)) static int16_t FUNC_2(struct ath_hw *VAR_2,
    u16 *VAR_3,
    u16 VAR_4,
    u16 VAR_5,
    int8_t VAR_6,
    int16_t *VAR_7)

{
 u16 VAR_8;






 if (FUNC_0(VAR_2)) {
  u16 VAR_9;

  if (VAR_0 != VAR_6) {

   *VAR_7 = (u16)(VAR_6 - VAR_0);

   *VAR_7 *= 2;



   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    VAR_3[VAR_8] = (u16)(VAR_3[VAR_8] - *VAR_7);
  }



  VAR_9 = (u16)(VAR_1 - VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   VAR_3[VAR_8] = (u16)FUNC_1(VAR_9, VAR_3[VAR_8]);
 }

 return *VAR_7;
}
