
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nvs_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int*,size_t*) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int*,size_t) ;
 int VAR_4 ;
 int FUNC_7 () ;

esp_err_t FUNC_8(void)
{
    nvs_handle_t VAR_5;
    esp_err_t VAR_6;


    VAR_6 = FUNC_5(VAR_3, VAR_2, &VAR_5);
    if (VAR_6 != VAR_1) return VAR_6;


    size_t VAR_7 = 0;
    VAR_6 = FUNC_4(VAR_5, "run_time", ((void*)0), &VAR_7);
    if (VAR_6 != VAR_1 && VAR_6 != VAR_0) return VAR_6;


    uint32_t* VAR_8 = FUNC_1(VAR_7 + sizeof(uint32_t));
    if (VAR_7 > 0) {
        VAR_6 = FUNC_4(VAR_5, "run_time", VAR_8, &VAR_7);
        if (VAR_6 != VAR_1) {
            FUNC_0(VAR_8);
            return VAR_6;
        }
    }


    VAR_7 += sizeof(uint32_t);
    VAR_8[VAR_7 / sizeof(uint32_t) - 1] = FUNC_7() * VAR_4;
    VAR_6 = FUNC_6(VAR_5, "run_time", VAR_8, VAR_7);
    FUNC_0(VAR_8);

    if (VAR_6 != VAR_1) return VAR_6;


    VAR_6 = FUNC_3(VAR_5);
    if (VAR_6 != VAR_1) return VAR_6;


    FUNC_2(VAR_5);
    return VAR_1;
}
