
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {int lock; int action_queue; } ;
typedef TYPE_2__ mdns_server_t ;
typedef int mdns_action_t ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_9__ {TYPE_1__ ip; } ;
typedef TYPE_3__ esp_netif_ip_info_t ;
typedef int esp_ip6_addr_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* VAR_12 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int VAR_13 ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 () ;

esp_err_t FUNC_16(void)
{
    esp_err_t VAR_14 = VAR_3;

    if (VAR_12) {
        return VAR_14;
    }

    VAR_12 = (mdns_server_t *)FUNC_10(sizeof(mdns_server_t));
    if (!VAR_12) {
        VAR_5;
        return VAR_0;
    }
    FUNC_11((uint8_t*)VAR_12, 0, sizeof(mdns_server_t));

    VAR_12->lock = FUNC_15();
    if (!VAR_12->lock) {
        VAR_14 = VAR_0;
        goto free_server;
    }

    VAR_12->action_queue = FUNC_14(VAR_7, sizeof(mdns_action_t *));
    if (!VAR_12->action_queue) {
        VAR_14 = VAR_0;
        goto free_lock;
    }
    if ((VAR_14 = FUNC_5(VAR_11, VAR_1, &VAR_13, ((void*)0))) != VAR_3) {
        goto free_event_handlers;
    }
    if ((VAR_14 = FUNC_5(VAR_6, VAR_1, &VAR_13, ((void*)0))) != VAR_3) {
        goto free_event_handlers;
    }





    uint8_t VAR_15;
    esp_ip6_addr_t VAR_16;
    esp_netif_ip_info_t VAR_17;

    for (VAR_15=0; VAR_15<VAR_8; VAR_15++) {
        if (!FUNC_7(FUNC_3(VAR_15), &VAR_16) && !FUNC_0(VAR_16)) {
            FUNC_2(VAR_15, VAR_10);
        }
        if (!FUNC_8(FUNC_3(VAR_15), &VAR_17) && VAR_17.ip.addr) {
            FUNC_2(VAR_15, VAR_9);
        }
    }

    if (FUNC_4()) {

        VAR_14 = VAR_2;
        goto free_all_and_disable_pcbs;
    }

    return VAR_3;

free_all_and_disable_pcbs:
    for (VAR_15=0; VAR_15<VAR_8; VAR_15++) {
        FUNC_1(VAR_15, VAR_10);
        FUNC_1(VAR_15, VAR_9);
    }
free_event_handlers:
    FUNC_6(VAR_11, VAR_1, &VAR_13);
    FUNC_6(VAR_6, VAR_1, &VAR_13);



    FUNC_12(VAR_12->action_queue);
free_lock:
    FUNC_13(VAR_12->lock);
free_server:
    FUNC_9(VAR_12);
    VAR_12 = ((void*)0);
    return VAR_14;
}
