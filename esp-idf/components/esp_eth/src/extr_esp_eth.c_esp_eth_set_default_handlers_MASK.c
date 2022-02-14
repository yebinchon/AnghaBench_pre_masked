
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,char*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

esp_err_t FUNC_3(void* VAR_15)
{
    esp_err_t VAR_16;
    FUNC_0(VAR_15, "esp-netif handle can't be null", VAR_14, VAR_0);

    VAR_16 = FUNC_2(VAR_6, VAR_4, VAR_12, VAR_15);
    if (VAR_16 != VAR_1) {
        goto fail;
    }

    VAR_16 = FUNC_2(VAR_6, VAR_5, VAR_13, VAR_15);
    if (VAR_16 != VAR_1) {
        goto fail;
    }

    VAR_16 = FUNC_2(VAR_6, VAR_2, VAR_9, VAR_15);
    if (VAR_16 != VAR_1) {
        goto fail;
    }

    VAR_16 = FUNC_2(VAR_6, VAR_3, VAR_10, VAR_15);
    if (VAR_16 != VAR_1) {
        goto fail;
    }

    VAR_16 = FUNC_2(VAR_7, VAR_8, VAR_11, VAR_15);
    if (VAR_16 != VAR_1) {
        goto fail;
    }

    return VAR_1;

fail:
    FUNC_1(VAR_15);
    return VAR_16;
}
