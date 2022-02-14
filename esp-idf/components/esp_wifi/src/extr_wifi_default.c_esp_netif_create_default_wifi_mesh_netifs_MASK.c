
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int netif_cfg ;
typedef int esp_netif_t ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ esp_netif_inherent_config_t ;
struct TYPE_6__ {int stack; TYPE_1__* base; } ;
typedef TYPE_2__ esp_netif_config_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

esp_err_t FUNC_10(esp_netif_t **VAR_7, esp_netif_t **VAR_8)
{

    esp_netif_inherent_config_t VAR_9;
    FUNC_9(&VAR_9, VAR_0, sizeof(VAR_9));
    VAR_9.flags &= ~VAR_3;
    esp_netif_config_t VAR_10 = {
            .base = &VAR_9,
            .stack = VAR_4,
    };
    esp_netif_t *VAR_11 = FUNC_6(&VAR_10);
    FUNC_1(VAR_11);
    FUNC_0(FUNC_2(VAR_11));
    FUNC_0(FUNC_7());


    FUNC_0(FUNC_5(VAR_11));


    FUNC_9(&VAR_9, VAR_1, sizeof(VAR_9));
    VAR_9.flags &= ~VAR_2;
    esp_netif_config_t VAR_12 = {
            .base = &VAR_9,
            .stack = VAR_5,
    };
    esp_netif_t *VAR_13 = FUNC_6(&VAR_12);
    FUNC_1(VAR_13);
    FUNC_0(FUNC_3(VAR_13));
    FUNC_0(FUNC_8());


    FUNC_0(FUNC_4(VAR_13));

    if (VAR_7) {
        *VAR_7 = VAR_13;
    }
    if (VAR_8) {
        *VAR_8 = VAR_11;
    }
    return VAR_6;
}
