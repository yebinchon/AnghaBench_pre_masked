
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int protocomm_console_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int security; int * pc; int * pop; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int *,char*,int ,void*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,char*,int *,int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static esp_err_t FUNC_9(void)
{

    VAR_3->pc = FUNC_6();
    if (VAR_3->pc == ((void*)0)) {
        FUNC_0(VAR_2, "Failed to create new protocomm instance");
        return VAR_0;
    }


    protocomm_console_config_t VAR_8 = FUNC_2();


    if (FUNC_4(VAR_3->pc, &VAR_8) != VAR_1) {
        FUNC_0(VAR_2, "Failed to start console provisioning");
        return VAR_0;
    }


    FUNC_8(VAR_3->pc, "proto-ver", "V0.1");


    if (VAR_3->security == 0) {
        FUNC_7(VAR_3->pc, "prov-session", &VAR_4, ((void*)0));
    } else if (VAR_3->security == 1) {
        FUNC_7(VAR_3->pc, "prov-session", &VAR_5, VAR_3->pop);
    }


    if (FUNC_3(VAR_3->pc, "prov-config",
                               VAR_6,
                               (void *) &VAR_7) != VAR_1) {
        FUNC_0(VAR_2, "Failed to set provisioning endpoint");
        FUNC_5(VAR_3->pc);
        return VAR_0;
    }

    FUNC_1(VAR_2, "Provisioning started");
    return VAR_1;
}
