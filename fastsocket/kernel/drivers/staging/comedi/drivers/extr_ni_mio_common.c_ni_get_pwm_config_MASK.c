
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int pwm_up_count; unsigned int clock_ns; unsigned int pwm_down_count; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_1, unsigned int *VAR_2)
{
 VAR_2[1] = VAR_0->pwm_up_count * VAR_0->clock_ns;
 VAR_2[2] = VAR_0->pwm_down_count * VAR_0->clock_ns;
 return 3;
}
