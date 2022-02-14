
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clocksource {int dummy; } ;
typedef int cycle_t ;
struct TYPE_4__ {int cycle_last; } ;
struct TYPE_3__ {int (* get_cycle_counter ) (int ) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static cycle_t FUNC_2(struct clocksource *VAR_3)
{
 cycle_t VAR_4 = (cycle_t)VAR_2.get_cycle_counter(VAR_0);
 return FUNC_0(VAR_4, VAR_1.cycle_last);
}
