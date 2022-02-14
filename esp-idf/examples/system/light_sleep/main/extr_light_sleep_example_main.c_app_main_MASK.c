
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int mode; int pin_bit_mask; } ;
typedef TYPE_1__ gpio_config_t ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int const,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int const FUNC_11 (int const) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void FUNC_14(void)
{

    const int VAR_6 = VAR_0;
    const int VAR_7 = VAR_1;
    gpio_config_t VAR_8 = {
            .pin_bit_mask = FUNC_0(VAR_6),
            .mode = VAR_5
    };
    FUNC_1(FUNC_7(&VAR_8));
    FUNC_8(VAR_6,
            VAR_7 == 0 ? VAR_4 : VAR_3);

    while (1) {

        FUNC_4(2000000);
        FUNC_3();


        if (FUNC_11(VAR_6) == VAR_7) {
            FUNC_10("Waiting for GPIO%d to go high...\n", VAR_6);
            do {
                FUNC_13(FUNC_9(10));
            } while (FUNC_11(VAR_6) == VAR_7);
        }

        FUNC_10("Entering light sleep\n");



        FUNC_12(VAR_2);


        int64_t VAR_9 = FUNC_6();


        FUNC_2();



        int64_t VAR_10 = FUNC_6();


        const char* VAR_11;
        switch (FUNC_5()) {
            case 128:
                VAR_11 = "timer";
                break;
            case 129:
                VAR_11 = "pin";
                break;
            default:
                VAR_11 = "other";
                break;
        }

        FUNC_10("Returned from light sleep, reason: %s, t=%lld ms, slept for %lld ms\n",
                VAR_11, VAR_10 / 1000, (VAR_10 - VAR_9) / 1000);
    }

}
