
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int div_factor_p; int div_factor_h; int div_factor_m; int phase_dout; int phase_din; scalar_t__ phase_core; } ;
struct TYPE_4__ {TYPE_1__ clock; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_1)
{



    FUNC_0 (VAR_1 > 1 && VAR_1 <= 16);
    int VAR_2 = VAR_1 - 1;
    int VAR_3 = VAR_1 / 2 - 1;

    VAR_0.clock.div_factor_p = VAR_2;
    VAR_0.clock.div_factor_h = VAR_3;
    VAR_0.clock.div_factor_m = VAR_2;

    VAR_0.clock.phase_dout = 4;
    VAR_0.clock.phase_din = 4;
    VAR_0.clock.phase_core = 0;

    FUNC_1(10);
}
