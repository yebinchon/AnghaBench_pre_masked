
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int portTickType ;
struct TYPE_8__ {int interface; scalar_t__ event_id; scalar_t__ event_base; } ;
struct TYPE_9__ {TYPE_1__ sys_event; } ;
struct TYPE_10__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mdns_action_t ;
struct TYPE_11__ {int esp_netif; } ;
typedef TYPE_4__ ip_event_got_ip6_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ esp_event_base_t ;
struct TYPE_12__ {int action_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_7__* VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,TYPE_3__**,int ) ;

__attribute__((used)) static void FUNC_3(void* VAR_6, esp_event_base_t VAR_7,
                     int32_t VAR_8, void* VAR_9)
{
    if (!VAR_4) {
        return;
    }

    mdns_action_t * VAR_10 = (mdns_action_t *)FUNC_0(1, sizeof(mdns_action_t));
    if (!VAR_10) {
        VAR_1;
        return;
    }
    VAR_10->type = VAR_0;
    VAR_10->data.sys_event.event_base = VAR_7;
    VAR_10->data.sys_event.event_id = VAR_8;
    if (VAR_7 == VAR_2 && VAR_8 == VAR_3) {
        ip_event_got_ip6_t* VAR_11 = (ip_event_got_ip6_t*) VAR_9;
        VAR_10->data.sys_event.interface = VAR_11->esp_netif;
    }

    if (FUNC_2(VAR_4->action_queue, &VAR_10, (portTickType)0) != VAR_5) {
        FUNC_1(VAR_10);
    }
}
