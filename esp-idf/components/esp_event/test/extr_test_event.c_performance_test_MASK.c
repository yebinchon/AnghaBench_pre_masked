
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double performed; int expected; int done; } ;
typedef TYPE_1__ performance_data_t ;
typedef double int64_t ;
struct TYPE_8__ {int * task; } ;
typedef TYPE_2__ esp_event_loop_instance_t ;
typedef scalar_t__ esp_event_loop_handle_t ;
struct TYPE_9__ {int task_priority; int task_stack_size; int * task_name; } ;
typedef TYPE_3__ esp_event_loop_args_t ;
typedef int * TaskHandle_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,double) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 double FUNC_5 (scalar_t__,char const*,int,int ,TYPE_1__*) ;
 double FUNC_6 (TYPE_3__*,scalar_t__*) ;
 double FUNC_7 (scalar_t__) ;
 double FUNC_8 (scalar_t__,char const*,int,int *,int ,int ) ;
 double FUNC_9 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 () ;
 TYPE_3__ FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*,int ,void*,int ,int **) ;

__attribute__((used)) static void FUNC_16(bool VAR_9)
{


    unsigned int VAR_10 __attribute__((unused)) = FUNC_10();

    FUNC_3();

    const char VAR_11[] = "qwertyuiopasdfghjklzxvbnmmnbvcxzqwertyuiopasdfghjklzxvbnmmnbvcxz";





    esp_event_loop_args_t VAR_12 = FUNC_11();
    esp_event_loop_handle_t VAR_13;

    if (!VAR_9) {
        VAR_12.task_name = ((void*)0);
    }

    FUNC_1(VAR_0, FUNC_6(&VAR_12, &VAR_13));

    performance_data_t VAR_14;


    for (int VAR_15 = 0; VAR_15 < (sizeof(VAR_11) - 1); VAR_15++) {
        for (int VAR_16 = 0; VAR_16 < ((sizeof(VAR_11) - 1) / 2); VAR_16++) {
            FUNC_1(VAR_0, FUNC_5(VAR_13, VAR_11 + VAR_15, VAR_16, VAR_8, &VAR_14));
        }
    }

    TaskHandle_t VAR_17 = ((void*)0);

    if (!VAR_9) {
        FUNC_15(VAR_6, "loop_run", VAR_12.task_stack_size, (void*) VAR_13, VAR_12.task_priority, &VAR_17);
    }


    float VAR_18 = 0;
    float VAR_19 = 0;

    for (int VAR_20 = 1; VAR_20 <= (sizeof(VAR_11) - 1); VAR_20 *= 2) {
        for (int VAR_21 = 1; VAR_21 <= ((sizeof(VAR_11) - 1) / 2); VAR_21 *= 2) {

            VAR_14.performed = 0;
            VAR_14.expected = VAR_20 * VAR_21;
            VAR_14.done = FUNC_13();


            int VAR_22[(sizeof(VAR_11) - 1)];
            int VAR_23[((sizeof(VAR_11) - 1) / 2)];

            for (int VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
                VAR_22[VAR_24] = VAR_24;
            }

            for (int VAR_25 = 0; VAR_25 < VAR_21; VAR_25++) {
                VAR_23[VAR_25] = VAR_25;
            }

            for (int VAR_26 = 0; VAR_26 < VAR_20; VAR_26++) {
                int VAR_27 = FUNC_10() % VAR_20;
                int VAR_28 = FUNC_10() % VAR_20;

                int VAR_29 = VAR_22[VAR_27];
                VAR_22[VAR_27]= VAR_22[VAR_28];
                VAR_22[VAR_28] = VAR_29;
            }

            for (int VAR_30 = 0; VAR_30 < VAR_21; VAR_30++) {
                int VAR_31 = FUNC_10() % VAR_21;
                int VAR_32 = FUNC_10() % VAR_21;

                int VAR_33 = VAR_23[VAR_31];
                VAR_23[VAR_31]= VAR_23[VAR_32];
                VAR_23[VAR_32] = VAR_33;
            }


            int64_t VAR_34 = FUNC_9();
            for (int VAR_35 = 0; VAR_35 < VAR_20; VAR_35++) {
                for (int VAR_36 = 0; VAR_36 < VAR_21; VAR_36++) {
                    FUNC_1(VAR_0, FUNC_8(VAR_13, VAR_11 + VAR_22[VAR_35], VAR_23[VAR_36], ((void*)0), 0, VAR_7));
                }
            }

            FUNC_14(VAR_14.done, VAR_7);
            int64_t VAR_37 = FUNC_9() - VAR_34;


            FUNC_1(VAR_14.expected, VAR_14.performed);

            VAR_19++;
            VAR_18 += VAR_14.performed / (VAR_37 / (1000000.0));

            FUNC_12(VAR_14.done);
        }
    }

    int VAR_38 = (int) (VAR_18 / (VAR_19));

    if (!VAR_9) {
        ((esp_event_loop_instance_t*) VAR_13)->task = VAR_17;
    }

    FUNC_1(VAR_0, FUNC_7(VAR_13));

    FUNC_4();







    FUNC_2(VAR_1, "%d", VAR_38);




}
