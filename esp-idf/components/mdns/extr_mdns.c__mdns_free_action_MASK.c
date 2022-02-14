
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_21__ {TYPE_10__* packet; } ;
struct TYPE_20__ {int packet; } ;
struct TYPE_19__ {int search; } ;
struct TYPE_18__ {TYPE_10__* key; } ;
struct TYPE_17__ {TYPE_10__* value; TYPE_10__* key; } ;
struct TYPE_16__ {int txt; } ;
struct TYPE_15__ {TYPE_10__* instance; } ;
struct TYPE_14__ {TYPE_10__* service; } ;
struct TYPE_22__ {TYPE_8__ rx_handle; TYPE_7__ tx_handle; TYPE_6__ search_add; TYPE_5__ srv_txt_del; TYPE_4__ srv_txt_set; TYPE_3__ srv_txt_replace; TYPE_2__ srv_instance; TYPE_1__ srv_add; TYPE_10__* instance; TYPE_10__* hostname; } ;
struct TYPE_13__ {int type; TYPE_9__ data; int pb; int service; } ;
typedef TYPE_10__ mdns_action_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(mdns_action_t * VAR_0)
{
    switch(VAR_0->type) {
    case 139:
        FUNC_4(VAR_0->data.hostname);
        break;
    case 138:
        FUNC_4(VAR_0->data.instance);
        break;
    case 133:
        FUNC_1(VAR_0->data.srv_add.service->service);
        FUNC_4(VAR_0->data.srv_add.service);
        break;
    case 132:
        FUNC_4(VAR_0->data.srv_instance.instance);
        break;
    case 130:
        FUNC_0(VAR_0->data.srv_txt_replace.txt);
        break;
    case 129:
        FUNC_4(VAR_0->data.srv_txt_set.key);
        FUNC_4(VAR_0->data.srv_txt_set.value);
        break;
    case 131:
        FUNC_4(VAR_0->data.srv_txt_del.key);
        break;
    case 136:

    case 134:

    case 135:
        FUNC_3(VAR_0->data.search_add.search);
        break;
    case 128:
        FUNC_2(VAR_0->data.tx_handle.packet);
        break;
    case 137:
        FUNC_5(VAR_0->data.rx_handle.packet->pb);
        FUNC_4(VAR_0->data.rx_handle.packet);
        break;
    default:
        break;
    }
    FUNC_4(VAR_0);
}
