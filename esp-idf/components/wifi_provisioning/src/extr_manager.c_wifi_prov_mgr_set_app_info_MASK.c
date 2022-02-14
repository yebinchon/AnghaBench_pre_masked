
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int cJSON ;
struct TYPE_2__ {scalar_t__ prov_state; int * app_info_json; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *,char*,char const*) ;
 int * FUNC_6 () ;
 void* FUNC_7 () ;
 int FUNC_8 (char const*) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

esp_err_t FUNC_9(const char *VAR_8, const char *VAR_9,
                                     const char**VAR_10, size_t VAR_11)
{
    if (!VAR_8 || !VAR_9 || !VAR_10) {
        return VAR_0;
    }

    if (!VAR_7) {
        FUNC_1(VAR_4, "Provisioning manager not initialized");
        return VAR_1;
    }

    esp_err_t VAR_12 = VAR_2;
    FUNC_0(VAR_7);

    if (VAR_6 && VAR_6->prov_state == VAR_5) {
        if (!VAR_6->app_info_json) {
            VAR_6->app_info_json = FUNC_7();
        }

        cJSON *VAR_13 = FUNC_7();
        cJSON *VAR_14 = FUNC_6();
        FUNC_4(VAR_6->app_info_json, VAR_8, VAR_13);


        FUNC_5(VAR_13, "ver", VAR_9);


        FUNC_4(VAR_13, "cap", VAR_14);
        for (unsigned int VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
            if (VAR_10[VAR_15]) {
                FUNC_3(VAR_14, FUNC_8(VAR_10[VAR_15]));
            }
        }
        VAR_12 = VAR_3;
    } else {
        VAR_12 = VAR_1;
    }

    FUNC_2(VAR_7);
    return VAR_12;
}
