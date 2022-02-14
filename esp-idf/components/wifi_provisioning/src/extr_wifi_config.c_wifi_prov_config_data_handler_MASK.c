
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_10__ {scalar_t__ msg; } ;
typedef TYPE_1__ WiFiConfigPayload ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_6 (int *,int ,int const*) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_1__*,void*) ;

esp_err_t FUNC_9(uint32_t VAR_5, const uint8_t *VAR_6, ssize_t VAR_7,
                                        uint8_t **VAR_8, ssize_t *VAR_9, void *VAR_10)
{
    WiFiConfigPayload *VAR_11;
    WiFiConfigPayload VAR_12;
    esp_err_t VAR_13;

    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6);
    if (!VAR_11) {
        FUNC_0(VAR_4, "Unable to unpack config data");
        return VAR_0;
    }

    FUNC_4(&VAR_12);
    VAR_13 = FUNC_8(VAR_11, &VAR_12, VAR_10);
    if (VAR_13 != VAR_3) {
        FUNC_0(VAR_4, "Proto command dispatcher error %d", VAR_13);
        return VAR_2;
    }

    VAR_12.msg = VAR_11->msg + 1;
    FUNC_2(VAR_11, ((void*)0));

    *VAR_9 = FUNC_3(&VAR_12);
    if (*VAR_9 <= 0) {
        FUNC_0(VAR_4, "Invalid encoding for response");
        return VAR_2;
    }

    *VAR_8 = (uint8_t *) FUNC_1(*VAR_9);
    if (!*VAR_8) {
        FUNC_0(VAR_4, "System out of memory");
        return VAR_1;
    }
    FUNC_5(&VAR_12, *VAR_8);
    FUNC_7(&VAR_12, VAR_10);

    return VAR_3;
}
