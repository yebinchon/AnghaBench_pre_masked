
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int esp_slave_context_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int) ;

esp_err_t FUNC_2(esp_slave_context_t *VAR_5, uint32_t *VAR_6, uint32_t *VAR_7)
{
    esp_err_t VAR_8;
    FUNC_0(VAR_4, "get_intr");
    if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0)) return VAR_0;

    if (VAR_6 != ((void*)0)) {
        VAR_8= FUNC_1(VAR_5, VAR_2, (uint8_t*)VAR_6, 4);
        if (VAR_8 != VAR_1) return VAR_8;
    }
    if (VAR_7 != ((void*)0)) {
        VAR_8 = FUNC_1(VAR_5, VAR_3, (uint8_t*)VAR_7, 4);
        if (VAR_8 != VAR_1) return VAR_8;
    }
    return VAR_1;
}
