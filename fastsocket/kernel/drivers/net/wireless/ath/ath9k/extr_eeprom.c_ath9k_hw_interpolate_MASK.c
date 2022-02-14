
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef scalar_t__ int16_t ;



int16_t FUNC_0(u16 VAR_0, u16 VAR_1, u16 VAR_2,
        int16_t VAR_3, int16_t VAR_4)
{
 int16_t VAR_5;

 if (VAR_2 == VAR_1) {
  VAR_5 = VAR_3;
 } else {
  VAR_5 = (int16_t) (((VAR_0 - VAR_1) * VAR_4 +
     (VAR_2 - VAR_0) * VAR_3) /
    (VAR_2 - VAR_1));
 }
 return VAR_5;
}
