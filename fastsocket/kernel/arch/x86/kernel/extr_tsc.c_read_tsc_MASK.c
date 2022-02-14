
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clocksource {int dummy; } ;
typedef scalar_t__ cycle_t ;
struct TYPE_2__ {scalar_t__ cycle_last; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static cycle_t FUNC_1(struct clocksource *VAR_1)
{
 cycle_t VAR_2 = (cycle_t)FUNC_0();

 return VAR_2 >= VAR_0.cycle_last ?
  VAR_2 : VAR_0.cycle_last;
}
