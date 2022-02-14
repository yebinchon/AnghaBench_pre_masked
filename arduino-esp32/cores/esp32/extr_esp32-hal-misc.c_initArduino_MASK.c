
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef scalar_t__ esp_ota_img_states_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,scalar_t__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__ const*,int ,int ) ;
 TYPE_1__* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 () ;

void FUNC_16()
{
    FUNC_2("*", VAR_0);
    esp_err_t VAR_8 = FUNC_12();
    if(VAR_8 == VAR_2){
        const esp_partition_t* VAR_9 = FUNC_8(VAR_6, VAR_5, ((void*)0));
        if (VAR_9 != ((void*)0)) {
            VAR_8 = FUNC_7(VAR_9, 0, VAR_9->size);
            if(!VAR_8){
                VAR_8 = FUNC_12();
            } else {
                FUNC_11("Failed to format the broken NVS partition!");
            }
        }
    }
    if(VAR_8) {
        FUNC_11("Failed to initialize NVS! Error: %u", VAR_8);
    }





    FUNC_9();
    FUNC_10();
}
