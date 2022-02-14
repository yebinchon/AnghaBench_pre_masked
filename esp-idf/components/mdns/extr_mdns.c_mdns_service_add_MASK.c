
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int portTickType ;
typedef int mdns_txt_item_t ;
struct TYPE_9__ {TYPE_3__* service; } ;
struct TYPE_10__ {TYPE_1__ srv_add; } ;
struct TYPE_11__ {TYPE_2__ data; int type; int * next; int * service; } ;
typedef TYPE_3__ mdns_srv_item_t ;
typedef int mdns_service_t ;
typedef TYPE_3__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_12__ {int action_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 () ;
 int * FUNC_2 (char const*,char const*,int ,char const*,size_t,int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (char const*,char const*) ;
 TYPE_7__* VAR_7 ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_3__**,int ) ;
 size_t FUNC_11 () ;

esp_err_t FUNC_12(const char * VAR_10, const char * VAR_11, const char * VAR_12, uint16_t VAR_13, mdns_txt_item_t VAR_14[], size_t VAR_15)
{
    if (!VAR_7 || FUNC_5(VAR_11) || FUNC_5(VAR_12) || !VAR_13) {
        return VAR_1;
    }

    if (!FUNC_1()) {
        return VAR_2;
    }

    mdns_srv_item_t * VAR_16 = FUNC_4(VAR_11, VAR_12);
    if (VAR_16) {
        return VAR_1;
    }

    mdns_service_t * VAR_17 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_10, VAR_15, VAR_14);
    if (!VAR_17) {
        return VAR_2;
    }

    VAR_16 = (mdns_srv_item_t *)FUNC_7(sizeof(mdns_srv_item_t));
    if (!VAR_16) {
        VAR_5;
        FUNC_3(VAR_17);
        return VAR_2;
    }

    VAR_16->service = VAR_17;
    VAR_16->next = ((void*)0);

    mdns_action_t * VAR_18 = (mdns_action_t *)FUNC_7(sizeof(mdns_action_t));
    if (!VAR_18) {
        VAR_5;
        FUNC_3(VAR_17);
        FUNC_6(VAR_16);
        return VAR_2;
    }
    VAR_18->type = VAR_0;
    VAR_18->data.srv_add.service = VAR_16;
    if (FUNC_10(VAR_7->action_queue, &VAR_18, (portTickType)0) != VAR_8) {
        FUNC_3(VAR_17);
        FUNC_6(VAR_16);
        FUNC_6(VAR_18);
        return VAR_2;
    }

    size_t VAR_19 = FUNC_11();
    size_t VAR_20 = FUNC_8(VAR_6);
    while (FUNC_4(VAR_11, VAR_12) == ((void*)0))
    {
        uint32_t VAR_21 = FUNC_11() - VAR_19;
        if (VAR_21 >= VAR_20) {
            return VAR_3;
        }
        FUNC_9(FUNC_0(10 / VAR_9, VAR_20 - VAR_21));
    }

    return VAR_4;
}
