
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int const*,scalar_t__) ;
 int VAR_3 ;

esp_err_t FUNC_3 (uint32_t VAR_4,
                            const uint8_t *VAR_5, ssize_t VAR_6,
                            uint8_t **VAR_7, ssize_t *VAR_8,
                            void *VAR_9)
{
    *VAR_7 = FUNC_1(VAR_6);
    if (*VAR_7) {
        *VAR_8 = VAR_6;
        FUNC_2(*VAR_7, VAR_5, VAR_6);
    } else {
        FUNC_0(VAR_2, "Error allocating response outbuf");
        *VAR_7 = ((void*)0);
        *VAR_8 = 0;
    }

    uint32_t *VAR_10 = (uint32_t *) VAR_9;
    if ((&VAR_3 != VAR_10) || (VAR_3 != *VAR_10)) {
        FUNC_0(VAR_2, "Handler private data doesn't match");
        return VAR_0;
    }
    return VAR_1;
}
