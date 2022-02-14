
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t pwm_freq_t ;


 int** VAR_0 ;

__attribute__((used)) static u8 FUNC_0(int VAR_1, pwm_freq_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 13; VAR_3++)
  if (VAR_1 <= VAR_0[VAR_2][VAR_3])
   break;


 return (u8)VAR_3;
}
