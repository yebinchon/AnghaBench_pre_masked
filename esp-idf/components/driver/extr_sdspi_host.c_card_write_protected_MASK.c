
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gpio_wp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool FUNC_1(int VAR_2)
{
    if (VAR_1[VAR_2].gpio_wp == VAR_0) {
        return 0;
    }
    return FUNC_0(VAR_1[VAR_2].gpio_wp) == 0;
}
