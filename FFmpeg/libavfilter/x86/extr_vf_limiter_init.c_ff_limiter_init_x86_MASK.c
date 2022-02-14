
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int limiter; } ;
typedef TYPE_1__ LimiterDSPContext ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(LimiterDSPContext *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_2();

    if (FUNC_0(VAR_4)) {
        if (VAR_3 <= 8) {
            VAR_2->limiter = VAR_1;
        }
    }
    if (FUNC_1(VAR_4)) {
        if (VAR_3 > 8) {
            VAR_2->limiter = VAR_0;
        }
    }
}
