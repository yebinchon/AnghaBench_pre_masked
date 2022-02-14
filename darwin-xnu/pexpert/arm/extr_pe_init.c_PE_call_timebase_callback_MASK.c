
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timebase_freq_t {int timebase_den; int timebase_num; } ;
struct TYPE_2__ {int timebase_frequency_hz; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct timebase_freq_t*) ;

void
FUNC_1(void)
{
 struct timebase_freq_t VAR_1;

 VAR_1.timebase_num = VAR_0.timebase_frequency_hz;
 VAR_1.timebase_den = 1;

 if (&FUNC_0)
  FUNC_0(&VAR_1);
}
