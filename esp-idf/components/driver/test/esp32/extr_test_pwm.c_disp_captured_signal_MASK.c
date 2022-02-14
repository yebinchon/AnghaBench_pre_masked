
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ sel_cap_signal; int capture_signal; } ;
typedef TYPE_1__ capture ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_9)
{

    uint32_t *VAR_10 = (uint32_t *)FUNC_1(sizeof(uint32_t) * VAR_0);
    uint32_t *VAR_11 = (uint32_t *)FUNC_1(sizeof(uint32_t) * VAR_0);
    capture VAR_12;
    for (int VAR_13=0; VAR_13<1000; VAR_13++) {
        FUNC_5(VAR_7, &VAR_12, VAR_8);
        if (VAR_12.sel_cap_signal == VAR_1) {
            VAR_10[0] = VAR_12.capture_signal - VAR_11[0];
            VAR_11[0] = VAR_12.capture_signal;
            VAR_10[0] = (VAR_10[0] / 10000) * (10000000000 / FUNC_3());
            FUNC_2("CAP0 : %d us\n", VAR_10[0]);
            VAR_4++;
        }
        if (VAR_12.sel_cap_signal == VAR_2) {
            VAR_10[1] = VAR_12.capture_signal - VAR_11[1];
            VAR_11[1] = VAR_12.capture_signal;
            VAR_10[1] = (VAR_10[1] / 10000) * (10000000000 / FUNC_3());
            FUNC_2("CAP1 : %d us\n", VAR_10[1]);
            VAR_5++;
        }
        if (VAR_12.sel_cap_signal == VAR_3) {
            VAR_10[2] = VAR_12.capture_signal - VAR_11[2];
            VAR_11[2] = VAR_12.capture_signal;
            VAR_10[2] = (VAR_10[2] / 10000) * (10000000000 / FUNC_3());
            FUNC_2("CAP2 : %d us\n", VAR_10[2]);
            VAR_6++;
        }
    }
    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    FUNC_4(((void*)0));
}
