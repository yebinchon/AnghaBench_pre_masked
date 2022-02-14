
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int esp_err_t ;
typedef int UBaseType_t ;
typedef int TickType_t ;
struct TYPE_5__ {scalar_t__ ulRunTimeCounter; char* pcTaskName; int * xHandle; } ;
typedef TYPE_1__ TaskStatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static esp_err_t FUNC_6(TickType_t VAR_6)
{
    TaskStatus_t *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    UBaseType_t VAR_9, VAR_10;
    uint32_t VAR_11, VAR_12;
    esp_err_t VAR_13;


    VAR_9 = FUNC_3() + VAR_0;
    VAR_7 = FUNC_1(sizeof(TaskStatus_t) * VAR_9);
    if (VAR_7 == ((void*)0)) {
        VAR_13 = VAR_3;
        goto exit;
    }

    VAR_9 = FUNC_4(VAR_7, VAR_9, &VAR_11);
    if (VAR_9 == 0) {
        VAR_13 = VAR_1;
        goto exit;
    }

    FUNC_5(VAR_6);


    VAR_10 = FUNC_3() + VAR_0;
    VAR_8 = FUNC_1(sizeof(TaskStatus_t) * VAR_10);
    if (VAR_8 == ((void*)0)) {
        VAR_13 = VAR_3;
        goto exit;
    }

    VAR_10 = FUNC_4(VAR_8, VAR_10, &VAR_12);
    if (VAR_10 == 0) {
        VAR_13 = VAR_1;
        goto exit;
    }


    uint32_t VAR_14 = (VAR_12 - VAR_11);
    if (VAR_14 == 0) {
        VAR_13 = VAR_2;
        goto exit;
    }

    FUNC_2("| Task | Run Time | Percentage\n");

    for (int VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
        int VAR_16 = -1;
        for (int VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
            if (VAR_7[VAR_15].xHandle == VAR_8[VAR_17].xHandle) {
                VAR_16 = VAR_17;

                VAR_7[VAR_15].xHandle = ((void*)0);
                VAR_8[VAR_17].xHandle = ((void*)0);
                break;
            }
        }

        if (VAR_16 >= 0) {
            uint32_t VAR_18 = VAR_8[VAR_16].ulRunTimeCounter - VAR_7[VAR_15].ulRunTimeCounter;
            uint32_t VAR_19 = (VAR_18 * 100UL) / (VAR_14 * VAR_5);
            FUNC_2("| %s | %d | %d%%\n", VAR_7[VAR_15].pcTaskName, VAR_18, VAR_19);
        }
    }


    for (int VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
        if (VAR_7[VAR_20].xHandle != ((void*)0)) {
            FUNC_2("| %s | Deleted\n", VAR_7[VAR_20].pcTaskName);
        }
    }
    for (int VAR_21 = 0; VAR_21 < VAR_10; VAR_21++) {
        if (VAR_8[VAR_21].xHandle != ((void*)0)) {
            FUNC_2("| %s | Created\n", VAR_8[VAR_21].pcTaskName);
        }
    }
    VAR_13 = VAR_4;

exit:
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    return VAR_13;
}
