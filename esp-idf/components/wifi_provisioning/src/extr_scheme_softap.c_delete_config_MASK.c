
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_prov_softap_config_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    if (!VAR_1) {
        FUNC_0(VAR_0, "Cannot delete null configuration");
        return;
    }

    wifi_prov_softap_config_t *VAR_2 = (wifi_prov_softap_config_t *) VAR_1;
    FUNC_1(VAR_2);
}
