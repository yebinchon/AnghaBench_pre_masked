
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int no_auto_stop; } ;
struct TYPE_5__ {TYPE_1__ capabilities; } ;
struct TYPE_6__ {scalar_t__ prov_state; int cleanup_delay; TYPE_2__ mgr_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_3(uint32_t VAR_7)
{
    if (!VAR_6) {
        FUNC_1(VAR_3, "Provisioning manager not initialized");
        return VAR_0;
    }

    esp_err_t VAR_8 = VAR_1;
    FUNC_0(VAR_6);

    if (VAR_5 && VAR_5->prov_state == VAR_4) {
        VAR_5->mgr_info.capabilities.no_auto_stop = 1;
        VAR_5->cleanup_delay = VAR_7;
        VAR_8 = VAR_2;
    } else {
        VAR_8 = VAR_0;
    }

    FUNC_2(VAR_6);
    return VAR_8;
}
