
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ esp_timer_handle_t ;
struct TYPE_3__ {char* name; void* arg; int * callback; } ;
typedef TYPE_1__ esp_timer_create_args_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__ const*,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int) ;

void FUNC_12(void)
{






    const esp_timer_create_args_t VAR_4 = {
            .callback = &VAR_2,

            .name = "periodic"
    };

    esp_timer_handle_t VAR_5;
    FUNC_0(FUNC_4(&VAR_4, &VAR_5));


    const esp_timer_create_args_t VAR_6 = {
            .callback = &VAR_1,

            .arg = (void*) VAR_5,
            .name = "one-shot"
    };
    esp_timer_handle_t VAR_7;
    FUNC_0(FUNC_4(&VAR_6, &VAR_7));


    FUNC_0(FUNC_9(VAR_5, 500000));
    FUNC_0(FUNC_8(VAR_7, 5000000));
    FUNC_1(VAR_0, "Started timers, time since boot: %lld us", FUNC_7());


    for (int VAR_8 = 0; VAR_8 < 5; ++VAR_8) {
        FUNC_0(FUNC_6(VAR_3));
        FUNC_11(2000000);
    }




    FUNC_1(VAR_0, "Entering light sleep for 0.5s, time since boot: %lld us",
            FUNC_7());

    FUNC_0(FUNC_3(500000));
    FUNC_2();

    FUNC_1(VAR_0, "Woke up from light sleep, time since boot: %lld us",
                FUNC_7());


    FUNC_11(2000000);


    FUNC_0(FUNC_10(VAR_5));
    FUNC_0(FUNC_5(VAR_5));
    FUNC_0(FUNC_5(VAR_7));
    FUNC_1(VAR_0, "Stopped and deleted timers");
}
