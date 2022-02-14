
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int portTickType ;
typedef int mdns_txt_linked_item_t ;
typedef int mdns_txt_item_t ;
typedef int mdns_srv_item_t ;
struct TYPE_7__ {int * txt; int * service; } ;
struct TYPE_8__ {TYPE_1__ srv_txt_replace; } ;
struct TYPE_9__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int action_queue; int services; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char const*) ;
 TYPE_6__* VAR_6 ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ,TYPE_3__**,int ) ;

esp_err_t FUNC_7(const char * VAR_8, const char * VAR_9, mdns_txt_item_t VAR_10[], uint8_t VAR_11)
{
    if (!VAR_6 || !VAR_6->services || FUNC_3(VAR_8) || FUNC_3(VAR_9) || (VAR_11 && VAR_10 == ((void*)0))) {
        return VAR_1;
    }
    mdns_srv_item_t * VAR_12 = FUNC_2(VAR_8, VAR_9);
    if (!VAR_12) {
        return VAR_2;
    }

    mdns_txt_linked_item_t * VAR_13 = ((void*)0);
    if (VAR_11){
        VAR_13 = FUNC_0(VAR_11, VAR_10);
        if (!VAR_13) {
            return VAR_3;
        }
    }

    mdns_action_t * VAR_14 = (mdns_action_t *)FUNC_5(sizeof(mdns_action_t));
    if (!VAR_14) {
        VAR_5;
        FUNC_1(VAR_13);
        return VAR_3;
    }
    VAR_14->type = VAR_0;
    VAR_14->data.srv_txt_replace.service = VAR_12;
    VAR_14->data.srv_txt_replace.txt = VAR_13;

    if (FUNC_6(VAR_6->action_queue, &VAR_14, (portTickType)0) != VAR_7) {
        FUNC_1(VAR_13);
        FUNC_4(VAR_14);
        return VAR_3;
    }
    return VAR_4;
}
