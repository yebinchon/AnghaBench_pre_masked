
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int portTickType ;
typedef int mdns_rx_packet_t ;
struct TYPE_7__ {int * packet; } ;
struct TYPE_8__ {TYPE_1__ rx_handle; } ;
struct TYPE_9__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int action_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,TYPE_3__**,int ) ;

esp_err_t FUNC_3(mdns_rx_packet_t * VAR_6)
{
    mdns_action_t * VAR_7 = ((void*)0);

    VAR_7 = (mdns_action_t *)FUNC_1(sizeof(mdns_action_t));
    if (!VAR_7) {
        VAR_3;
        return VAR_1;
    }

    VAR_7->type = VAR_0;
    VAR_7->data.rx_handle.packet = VAR_6;
    if (FUNC_2(VAR_4->action_queue, &VAR_7, (portTickType)0) != VAR_5) {
        FUNC_0(VAR_7);
        return VAR_1;
    }
    return VAR_2;
}
