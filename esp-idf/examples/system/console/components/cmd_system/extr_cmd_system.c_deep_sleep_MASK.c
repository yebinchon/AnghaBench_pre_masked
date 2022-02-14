
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_8__ {TYPE_3__* wakeup_gpio_level; TYPE_2__* wakeup_gpio_num; TYPE_1__* wakeup_time; int end; } ;
struct TYPE_7__ {int* ival; scalar_t__ count; } ;
struct TYPE_6__ {int* ival; scalar_t__ count; } ;
struct TYPE_5__ {unsigned long long* ival; scalar_t__ count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char**,void**) ;
 int FUNC_4 (int ,int ,char*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long long,int) ;
 int FUNC_7 (unsigned long long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(int VAR_4, char **VAR_5)
{
    int VAR_6 = FUNC_3(VAR_4, VAR_5, (void **) &VAR_2);
    if (VAR_6 != 0) {
        FUNC_4(VAR_3, VAR_2.end, VAR_5[0]);
        return 1;
    }
    if (VAR_2.wakeup_time->count) {
        uint64_t VAR_7 = 1000ULL * VAR_2.wakeup_time->ival[0];
        FUNC_2(VAR_1, "Enabling timer wakeup, timeout=%lluus", VAR_7);
        FUNC_0( FUNC_7(VAR_7) );
    }
    if (VAR_2.wakeup_gpio_num->count) {
        int VAR_8 = VAR_2.wakeup_gpio_num->ival[0];
        if (!FUNC_8(VAR_8)) {
            FUNC_1(VAR_1, "GPIO %d is not an RTC IO", VAR_8);
            return 1;
        }
        int VAR_9 = 0;
        if (VAR_2.wakeup_gpio_level->count) {
            VAR_9 = VAR_2.wakeup_gpio_level->ival[0];
            if (VAR_9 != 0 && VAR_9 != 1) {
                FUNC_1(VAR_1, "Invalid wakeup level: %d", VAR_9);
                return 1;
            }
        }
        FUNC_2(VAR_1, "Enabling wakeup on GPIO%d, wakeup on %s level",
                 VAR_8, VAR_9 ? "HIGH" : "LOW");

        FUNC_0( FUNC_6(1ULL << VAR_8, VAR_9) );
    }
    FUNC_9(VAR_0);
    FUNC_5();
}
