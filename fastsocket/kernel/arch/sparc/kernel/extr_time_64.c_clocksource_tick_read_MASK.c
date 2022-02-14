
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clocksource {int dummy; } ;
typedef int cycle_t ;
struct TYPE_2__ {int (* get_tick ) () ;} ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static cycle_t FUNC_1(struct clocksource *VAR_1)
{
 return VAR_0->get_tick();
}
