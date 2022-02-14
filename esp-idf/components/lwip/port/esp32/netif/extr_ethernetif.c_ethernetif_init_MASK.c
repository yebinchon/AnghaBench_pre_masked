
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {char* hostname; int l2_buffer_free_notify; int linkoutput; int output_ip6; int output; int * name; } ;
typedef scalar_t__ eth_speed_t ;
typedef int esp_eth_handle_t ;
typedef int err_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct netif*,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (struct netif*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct netif*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

err_t FUNC_6(struct netif *VAR_11)
{
    FUNC_0("netif != NULL", (VAR_11 != ((void*)0)));

    esp_eth_handle_t VAR_12 = FUNC_4(FUNC_3(VAR_11));
    eth_speed_t VAR_13;

    FUNC_2(VAR_12, VAR_2, &VAR_13);
    if (VAR_13 == VAR_3) {
        FUNC_1(VAR_11, VAR_10, 100000000);
    } else {
        FUNC_1(VAR_11, VAR_10, 10000000);
    }

    VAR_11->name[0] = VAR_4;
    VAR_11->name[1] = VAR_5;
    VAR_11->output = VAR_6;



    VAR_11->linkoutput = VAR_8;
    VAR_11->l2_buffer_free_notify = VAR_7;

    FUNC_5(VAR_11);

    return VAR_1;
}
