
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retro_time_t ;



void FUNC_0(retro_time_t VAR_0,
      unsigned *VAR_1, unsigned *VAR_2, unsigned *VAR_3)
{
   *VAR_3 = (unsigned)(VAR_0 / 1000000);
   *VAR_2 = *VAR_3 / 60;
   *VAR_1 = *VAR_2 / 60;

   *VAR_3 -= *VAR_2 * 60;
   *VAR_2 -= *VAR_1 * 60;
}
