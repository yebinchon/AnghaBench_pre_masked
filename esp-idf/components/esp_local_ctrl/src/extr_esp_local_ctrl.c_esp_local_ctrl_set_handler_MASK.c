
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int protocomm_req_handler_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int pc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (int ,char const*,int ,void*) ;

esp_err_t FUNC_2(const char *VAR_4,
                                     protocomm_req_handler_t VAR_5,
                                     void *VAR_6)
{
    esp_err_t VAR_7 = VAR_0;

    if (VAR_3) {
        VAR_7 = FUNC_1(VAR_3->pc, VAR_4,
                                     VAR_5, VAR_6);
    }

    if (VAR_7 != VAR_1) {
        FUNC_0(VAR_2, "Failed to register endpoint handler");
    }
    return VAR_7;
}
