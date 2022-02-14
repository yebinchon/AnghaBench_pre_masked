
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int esp_ipc_wait_t ;
typedef int esp_ipc_func_t ;
typedef int esp_err_t ;
typedef scalar_t__ UBaseType_t ;
typedef int TaskHandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 void** VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static esp_err_t FUNC_6(uint32_t VAR_13, esp_ipc_func_t VAR_14, void* VAR_15, esp_ipc_wait_t VAR_16)
{
    if (VAR_13 >= VAR_4) {
        return VAR_0;
    }
    if (FUNC_5() != VAR_12) {
        return VAR_1;
    }
    FUNC_3(VAR_8[0], VAR_3);


    VAR_5[VAR_13] = VAR_14;
    VAR_6[VAR_13] = VAR_15;
    VAR_11[VAR_13] = VAR_16;
    FUNC_2(VAR_9[VAR_13]);
    FUNC_3(VAR_7[VAR_13], VAR_3);



    FUNC_2(VAR_8[0]);

    return VAR_2;
}
