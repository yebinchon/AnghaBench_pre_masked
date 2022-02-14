
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {scalar_t__ param_key; } ;
typedef TYPE_2__ characteristic_descriptor_t ;
struct TYPE_5__ {int member_0; } ;


 int FUNC_0 (int ,char*,char*,int,char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_2__** VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_2__**,int*) ;
 scalar_t__ FUNC_6 (int,void*) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int ,int *,int ,int *) ;

void FUNC_8(void)
{
    esp_err_t VAR_7 = VAR_0;


    FUNC_4();


    VAR_7 = FUNC_5(&VAR_5[0], &VAR_4);
    FUNC_2((VAR_7 == VAR_0) && (VAR_4 >= 1));
    FUNC_1(VAR_3, "Found (%u) characteristics in the table.", VAR_4);
    characteristic_descriptor_t* VAR_8 = { 0 };
    float VAR_9 = 0;
    esp_err_t VAR_10 = VAR_0;
    int VAR_11 = 0;

    for (uint16_t VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
        VAR_8 = VAR_5[VAR_12];

        VAR_10 = FUNC_6(VAR_12, (void*)&VAR_9);
        if (VAR_10 == VAR_0) {
            FUNC_1(VAR_3, "Characteristic (%s) data = 0x%.4x read successful.",
                                                (char*)VAR_8->param_key, (unsigned int)VAR_9);
            VAR_11++;
        } else {
            FUNC_0(VAR_3, "Characteristic (%s) read value fail, err = %d (%s).",
                                                (char*)VAR_8->param_key,
                                                (int)VAR_10,
                                                (char*)FUNC_3(VAR_10));
        }
    }


    FUNC_7(VAR_6, "trigger_operation_task",
                                        VAR_2, ((void*)0), VAR_1, ((void*)0));
}
