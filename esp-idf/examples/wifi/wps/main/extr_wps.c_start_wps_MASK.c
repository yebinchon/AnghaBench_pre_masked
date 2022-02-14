
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_init_config_t ;
typedef int esp_netif_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_13(void)
{
    FUNC_7();
    FUNC_0(FUNC_5());
    esp_netif_t *VAR_9 = FUNC_6();
    FUNC_3(VAR_9);

    wifi_init_config_t VAR_10 = FUNC_2();
    FUNC_0(FUNC_8(&VAR_10));

    FUNC_0(FUNC_4(VAR_4, VAR_0, &VAR_8, ((void*)0)));
    FUNC_0(FUNC_4(VAR_1, VAR_2, &VAR_7, ((void*)0)));

    FUNC_0(FUNC_9(VAR_5));
    FUNC_0(FUNC_10());

    FUNC_1(VAR_3, "start wps...");

    FUNC_0(FUNC_11(&VAR_6));
    FUNC_0(FUNC_12(0));
}
