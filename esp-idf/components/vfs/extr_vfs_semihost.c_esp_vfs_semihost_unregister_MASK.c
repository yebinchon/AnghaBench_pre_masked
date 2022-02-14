
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__* base_path; scalar_t__* host_path; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (char const*,scalar_t__*) ;

esp_err_t FUNC_3(const char* VAR_5)
{
    FUNC_0(VAR_3, "Unregister semihosting driver @ '%s'", VAR_5);
    int VAR_6 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_4[VAR_6].base_path[0] != 0 && FUNC_2(VAR_5, VAR_4[VAR_6].base_path) == 0) {
            break;
        }
    }
    if (VAR_6 == VAR_0) {
        return VAR_1;
    }
    esp_err_t VAR_7 = FUNC_1(VAR_4[VAR_6].base_path);
    if (VAR_7 != VAR_2) {
        return VAR_7;
    }
    VAR_4[VAR_6].base_path[0] = 0;
    VAR_4[VAR_6].host_path[0] = 0;
    FUNC_0(VAR_3, "Unregistered semihosting driver @ '%s'", VAR_5);
    return VAR_2;
}
