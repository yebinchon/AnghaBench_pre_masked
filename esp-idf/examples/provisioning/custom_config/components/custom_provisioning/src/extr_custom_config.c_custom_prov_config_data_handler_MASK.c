
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
typedef scalar_t__ esp_err_t ;
typedef scalar_t__ (* custom_prov_config_handler_t ) (TYPE_1__*) ;
struct TYPE_10__ {int version; int info; } ;
typedef TYPE_1__ custom_config_t ;
struct TYPE_12__ {int version; int info; } ;
struct TYPE_11__ {int dummy; void* status; } ;
typedef TYPE_3__ CustomConfigResponse ;
typedef TYPE_4__ CustomConfigRequest ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_2 (int *,int ,int const*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;

int FUNC_8(uint32_t VAR_7, const uint8_t *VAR_8, ssize_t VAR_9, uint8_t **VAR_10, ssize_t *VAR_11, void *VAR_12)
{
    CustomConfigRequest *VAR_13;
    CustomConfigResponse VAR_14;
    custom_prov_config_handler_t VAR_15 = (custom_prov_config_handler_t) VAR_12;

    VAR_13 = FUNC_2(((void*)0), VAR_9, VAR_8);
    if (!VAR_13) {
        FUNC_0(VAR_6, "Unable to unpack config data");
        return VAR_2;
    }

    FUNC_4(&VAR_14);
    VAR_14.status = VAR_0;

    if (VAR_15) {
        custom_config_t VAR_16;
        FUNC_7(VAR_16.info, VAR_13->info, sizeof(VAR_16.info));
        VAR_16.version = VAR_13->version;

        esp_err_t VAR_17 = VAR_15(&VAR_16);
        VAR_14.status = (VAR_17 == VAR_5) ? VAR_1 :
                                        VAR_0;
    }
    FUNC_1(VAR_13, ((void*)0));

    VAR_14.dummy = 47;

    *VAR_11 = FUNC_3(&VAR_14);
    if (*VAR_11 <= 0) {
        FUNC_0(VAR_6, "Invalid encoding for response");
        return VAR_4;
    }

    *VAR_10 = (uint8_t *) FUNC_6(*VAR_11);
    if (*VAR_10 == ((void*)0)) {
        FUNC_0(VAR_6, "System out of memory");
        return VAR_3;
    }

    FUNC_5(&VAR_14, *VAR_10);
    return VAR_5;
}
