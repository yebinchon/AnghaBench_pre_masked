
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {scalar_t__ (* set_config_endpoint ) (int ,char const*,scalar_t__) ;} ;
struct TYPE_5__ {TYPE_1__ scheme; } ;
struct TYPE_6__ {scalar_t__ prov_state; scalar_t__ endpoint_uuid_used; int prov_scheme_config; TYPE_2__ mgr_config; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,char const*,scalar_t__) ;

esp_err_t FUNC_4(const char *VAR_7)
{
    if (!VAR_6) {
        FUNC_1(VAR_3, "Provisioning manager not initialized");
        return VAR_0;
    }

    esp_err_t VAR_8 = VAR_1;

    FUNC_0(VAR_6);
    if (VAR_5 &&
        VAR_5->prov_state == VAR_4) {
        VAR_8 = VAR_5->mgr_config.scheme.set_config_endpoint(
                VAR_5->prov_scheme_config, VAR_7,
                VAR_5->endpoint_uuid_used + 1);
    }
    if (VAR_8 != VAR_2) {
        FUNC_1(VAR_3, "Failed to create additional endpoint");
    } else {
        VAR_5->endpoint_uuid_used++;
    }
    FUNC_2(VAR_6);
    return VAR_8;
}
