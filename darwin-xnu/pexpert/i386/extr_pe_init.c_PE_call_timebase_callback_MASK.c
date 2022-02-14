
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timebase_freq_t {unsigned long timebase_num; unsigned long timebase_den; } ;
struct TYPE_2__ {unsigned long bus_clock_rate_num; unsigned long bus_to_dec_rate_num; unsigned long bus_clock_rate_den; unsigned long bus_to_dec_rate_den; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct timebase_freq_t*) ;

void FUNC_1(void)
{
  struct timebase_freq_t VAR_1;
  unsigned long VAR_2, VAR_3, VAR_4;

  VAR_2 = VAR_0.bus_clock_rate_num * VAR_0.bus_to_dec_rate_num;
  VAR_3 = VAR_0.bus_clock_rate_den * VAR_0.bus_to_dec_rate_den;

  VAR_4 = 2;
  while (VAR_4 <= VAR_3) {
    if ((VAR_2 % VAR_4) || (VAR_3 % VAR_4)) {
      VAR_4++;
      continue;
    }

    VAR_2 /= VAR_4;
    VAR_3 /= VAR_4;
  }

  VAR_1.timebase_num = VAR_2;
  VAR_1.timebase_den = VAR_3;

  if (&FUNC_0) FUNC_0(&VAR_1);
}
