
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nvs_handle_t ;
typedef int int32_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int*,size_t*) ;
 scalar_t__ FUNC_4 (int ,char*,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (char*,...) ;

esp_err_t FUNC_7(void)
{
    nvs_handle_t VAR_4;
    esp_err_t VAR_5;


    VAR_5 = FUNC_5(VAR_3, VAR_2, &VAR_4);
    if (VAR_5 != VAR_1) return VAR_5;


    int32_t VAR_6 = 0;
    VAR_5 = FUNC_4(VAR_4, "restart_conter", &VAR_6);
    if (VAR_5 != VAR_1 && VAR_5 != VAR_0) return VAR_5;
    FUNC_6("Restart counter = %d\n", VAR_6);


    size_t VAR_7 = 0;

    VAR_5 = FUNC_3(VAR_4, "run_time", ((void*)0), &VAR_7);
    if (VAR_5 != VAR_1 && VAR_5 != VAR_0) return VAR_5;
    FUNC_6("Run time:\n");
    if (VAR_7 == 0) {
        FUNC_6("Nothing saved yet!\n");
    } else {
        uint32_t* VAR_8 = FUNC_1(VAR_7);
        VAR_5 = FUNC_3(VAR_4, "run_time", VAR_8, &VAR_7);
        if (VAR_5 != VAR_1) {
            FUNC_0(VAR_8);
            return VAR_5;
        }
        for (int VAR_9 = 0; VAR_9 < VAR_7 / sizeof(uint32_t); VAR_9++) {
            FUNC_6("%d: %d\n", VAR_9 + 1, VAR_8[VAR_9]);
        }
        FUNC_0(VAR_8);
    }


    FUNC_2(VAR_4);
    return VAR_1;
}
