
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retro_time_t ;



void FUNC_0(unsigned VAR_0,
      unsigned VAR_1, unsigned VAR_2, retro_time_t *VAR_3)
{
   *VAR_3 = ((retro_time_t)VAR_0 * 60 * 60 * 1000000) +
           ((retro_time_t)VAR_1 * 60 * 1000000) +
           ((retro_time_t)VAR_2 * 1000000);
}
