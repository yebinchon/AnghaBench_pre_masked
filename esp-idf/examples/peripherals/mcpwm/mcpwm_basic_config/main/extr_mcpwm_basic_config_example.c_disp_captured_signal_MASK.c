
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_6)
{
    uint32_t *VAR_7 = (uint32_t *)FUNC_0(VAR_0*sizeof(uint32_t));
    uint32_t *VAR_8 = (uint32_t *)FUNC_0(VAR_0*sizeof(uint32_t));
    capture VAR_9;
    while (1) {
        FUNC_3(VAR_4, &VAR_9, VAR_5);
        if (VAR_9.sel_cap_signal == VAR_1) {
            VAR_7[0] = VAR_9.capture_signal - VAR_8[0];
            VAR_8[0] = VAR_9.capture_signal;
            VAR_7[0] = (VAR_7[0] / 10000) * (10000000000 / FUNC_2());
            FUNC_1("CAP0 : %d us\n", VAR_7[0]);
        }
        if (VAR_9.sel_cap_signal == VAR_2) {
            VAR_7[1] = VAR_9.capture_signal - VAR_8[1];
            VAR_8[1] = VAR_9.capture_signal;
            VAR_7[1] = (VAR_7[1] / 10000) * (10000000000 / FUNC_2());
            FUNC_1("CAP1 : %d us\n", VAR_7[1]);
        }
        if (VAR_9.sel_cap_signal == VAR_3) {
            VAR_7[2] = VAR_9.capture_signal - VAR_8[2];
            VAR_8[2] = VAR_9.capture_signal;
            VAR_7[2] = (VAR_7[2] / 10000) * (10000000000 / FUNC_2());
            FUNC_1("CAP2 : %d us\n", VAR_7[2]);
        }
    }
}
