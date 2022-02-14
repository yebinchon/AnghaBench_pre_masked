
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int btc_config_section_iter_t ;
struct TYPE_3__ {int address; } ;
typedef TYPE_1__ bt_bdaddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,int ,int*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int * FUNC_6 () ;
 int const* FUNC_7 () ;
 char* FUNC_8 (int const*) ;
 int * FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char const*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(void)
{
    uint16_t VAR_11 = 0;
    bt_bdaddr_t VAR_12;
    uint32_t VAR_13 = 0;
    const btc_config_section_iter_t *VAR_14 = ((void*)0);
    const btc_config_section_iter_t *VAR_15 = FUNC_6();

    while (VAR_15 != FUNC_7()) {


        const char *VAR_16 = FUNC_8(VAR_15);

        if (FUNC_10(VAR_16) &&
                !FUNC_2(VAR_16, VAR_2) &&
                !FUNC_2(VAR_16, VAR_1) &&
                !FUNC_2(VAR_16, VAR_8) &&
                !FUNC_2(VAR_16, VAR_6) &&
                !FUNC_2(VAR_16, VAR_7) &&
                !FUNC_2(VAR_16, VAR_5) &&
                !FUNC_2(VAR_16, VAR_4) &&
                !FUNC_2(VAR_16, VAR_3)) {
            VAR_15 = FUNC_9(VAR_15);
            FUNC_5(VAR_16);
            continue;
        }

        if (!FUNC_10(VAR_16) ||
            !FUNC_4(VAR_16, VAR_2, (int *)&VAR_13) ||
            ((VAR_13 & VAR_9) != VAR_9)) {
            VAR_15 = FUNC_9(VAR_15);
            continue;
        }

        if(VAR_11 == VAR_0) {
            VAR_14 = VAR_15;
        }
        VAR_11 ++;
        VAR_15 = FUNC_9(VAR_15);
    }

    if (VAR_14) {
        while(VAR_14 != FUNC_7()) {
            const char *VAR_17 = FUNC_8(VAR_14);
            if (!FUNC_10(VAR_17) ||
                !FUNC_4(VAR_17, VAR_2, (int *)&VAR_13) ||
                ((VAR_13 & VAR_9) != VAR_9)) {
                VAR_14 = FUNC_9(VAR_14);
                continue;
            }
            VAR_14 = FUNC_9(VAR_14);

            FUNC_11(VAR_17, &VAR_12);
            FUNC_1(VAR_12.address, VAR_10);

            if(FUNC_5(VAR_17)) {
                FUNC_0("exceeded the maximum nubmer of bonded devices, delete the last device info : %s", VAR_17);
            }
        }
    }
    FUNC_3();
}
