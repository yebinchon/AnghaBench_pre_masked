
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxmemory; size_t resident_set_size; } ;


 TYPE_1__ VAR_0 ;
 size_t FUNC_0 () ;

int FUNC_1(void) {
    size_t VAR_1 = FUNC_0();

    if (VAR_1 > VAR_0.maxmemory / 100 * 95 &&
        VAR_1 > VAR_0.resident_set_size) return 3;
    if (VAR_1 > VAR_0.maxmemory / 100 * 95) return 2;
    if (VAR_1 > VAR_0.maxmemory / 100 * 75) return 1;
    return 0;
}
