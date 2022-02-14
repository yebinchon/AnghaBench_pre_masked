
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shutdown_handler_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

esp_err_t FUNC_3(void)
{
    if (VAR_19) {
        return VAR_1;
    }
    esp_err_t VAR_20;
    VAR_20 = FUNC_1(VAR_4, VAR_9, VAR_17, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_1(VAR_4, VAR_10, VAR_18, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_1(VAR_4, VAR_7, VAR_14, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_1(VAR_4, VAR_8, VAR_15, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_1(VAR_4, VAR_5, VAR_12, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_1(VAR_4, VAR_6, VAR_13, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_1(VAR_2, VAR_3, VAR_16, ((void*)0));
    if (VAR_20 != VAR_1) {
        goto fail;
    }

    VAR_20 = FUNC_2((shutdown_handler_t)VAR_11);
    if (VAR_20 != VAR_1 && VAR_20 != VAR_0) {
        goto fail;
    }
    VAR_19 = 1;
    return VAR_1;

fail:
    FUNC_0();
    return VAR_20;
}
