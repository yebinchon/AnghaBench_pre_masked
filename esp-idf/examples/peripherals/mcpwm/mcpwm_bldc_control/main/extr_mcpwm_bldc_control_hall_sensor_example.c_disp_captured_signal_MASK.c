
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ sel_cap_signal; int capture_signal; } ;
typedef TYPE_1__ capture ;
typedef int CAP_SIG_NUM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_5)
{
    uint32_t *VAR_6 = (uint32_t *)FUNC_0(sizeof(CAP_SIG_NUM));
    uint32_t *VAR_7 = (uint32_t *)FUNC_0(sizeof(CAP_SIG_NUM));
    capture VAR_8;
    while (1) {
        FUNC_2(VAR_3, &VAR_8, VAR_4);
        if (VAR_8.sel_cap_signal == VAR_0) {
            VAR_6[0] = VAR_8.capture_signal - VAR_7[0];
            VAR_7[0] = VAR_8.capture_signal;
            VAR_6[0] = (VAR_6[0] / 10000) * (10000000000 / FUNC_1());

        }
        if (VAR_8.sel_cap_signal == VAR_1) {
            VAR_6[1] = VAR_8.capture_signal - VAR_7[1];
            VAR_7[1] = VAR_8.capture_signal;
            VAR_6[1] = (VAR_6[1] / 10000) * (10000000000 / FUNC_1());

        }
        if (VAR_8.sel_cap_signal == VAR_2) {
            VAR_6[2] = VAR_8.capture_signal - VAR_7[2];
            VAR_7[2] = VAR_8.capture_signal;
            VAR_6[2] = (VAR_6[2] / 10000) * (10000000000 / FUNC_1());

        }
    }
}
