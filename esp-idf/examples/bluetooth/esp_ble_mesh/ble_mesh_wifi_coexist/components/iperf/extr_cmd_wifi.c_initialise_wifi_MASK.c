
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_init_config_t ;
typedef int esp_netif_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 () ;

void FUNC_15(void)
{
    FUNC_5("wifi", VAR_1);
    static bool VAR_11 = 0;

    if (VAR_11) {
        return;
    }

    FUNC_8();
    VAR_9 = FUNC_14();
    FUNC_0(FUNC_4());
    esp_netif_t *VAR_12 = FUNC_7();
    FUNC_2(VAR_12);
    esp_netif_t *VAR_13 = FUNC_6();
    FUNC_2(VAR_13);
    FUNC_0(FUNC_3(VAR_4, VAR_0, &VAR_10, ((void*)0)));
    FUNC_0(FUNC_3(VAR_2, VAR_3, &VAR_8, ((void*)0)));

    wifi_init_config_t VAR_14 = FUNC_1();
    FUNC_0( FUNC_9(&VAR_14) );
    FUNC_0( FUNC_11(VAR_6) );
    FUNC_0( FUNC_12(VAR_7) );
    FUNC_0( FUNC_10(VAR_5) );
    FUNC_0( FUNC_13() );
    VAR_11 = 1;
}
