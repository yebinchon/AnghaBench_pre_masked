
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_partition_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {int version; } ;
typedef TYPE_1__ esp_app_desc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int const*,TYPE_1__*) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_5(esp_app_desc_t *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    const esp_partition_t *VAR_5 = FUNC_3();
    esp_app_desc_t VAR_6;
    if (FUNC_2(VAR_5, &VAR_6) == VAR_2) {
        FUNC_0(VAR_3, "Running firmware version: %s", VAR_6.version);
    }

    if (FUNC_4(VAR_4->version, VAR_6.version, sizeof(VAR_4->version)) == 0) {
        FUNC_1(VAR_3, "Current running version is the same as a new. We will not continue the update.");
        return VAR_1;
    }
    return VAR_2;
}
