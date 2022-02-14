
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int protocomm_req_handler_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ prov_state; int pc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,char const*,int ,void*) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

esp_err_t FUNC_4(const char *VAR_8, protocomm_req_handler_t VAR_9, void *VAR_10)
{
    if (!VAR_7) {
        FUNC_1(VAR_3, "Provisioning manager not initialized");
        return VAR_0;
    }

    esp_err_t VAR_11 = VAR_1;

    FUNC_0(VAR_7);
    if (VAR_6 &&
        VAR_6->prov_state > VAR_4 &&
        VAR_6->prov_state < VAR_5) {
        VAR_11 = FUNC_3(VAR_6->pc, VAR_8, VAR_9, VAR_10);
    }
    FUNC_2(VAR_7);

    if (VAR_11 != VAR_2) {
        FUNC_1(VAR_3, "Failed to register handler for endpoint");
    }
    return VAR_11;
}
