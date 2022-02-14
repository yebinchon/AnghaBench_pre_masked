
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int portTickType ;
typedef int mdns_srv_item_t ;
struct TYPE_8__ {TYPE_3__* key; int * service; } ;
struct TYPE_9__ {TYPE_1__ srv_txt_del; } ;
struct TYPE_10__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_11__ {int action_queue; int services; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (char const*,char const*) ;
 TYPE_7__* VAR_6 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__**,int ) ;

esp_err_t FUNC_6(const char * VAR_8, const char * VAR_9, const char * VAR_10)
{
    if (!VAR_6 || !VAR_6->services || FUNC_1(VAR_8) || FUNC_1(VAR_9) || FUNC_1(VAR_10)) {
        return VAR_1;
    }
    mdns_srv_item_t * VAR_11 = FUNC_0(VAR_8, VAR_9);
    if (!VAR_11) {
        return VAR_2;
    }
    mdns_action_t * VAR_12 = (mdns_action_t *)FUNC_3(sizeof(mdns_action_t));
    if (!VAR_12) {
        VAR_5;
        return VAR_3;
    }

    VAR_12->type = VAR_0;
    VAR_12->data.srv_txt_del.service = VAR_11;
    VAR_12->data.srv_txt_del.key = FUNC_4(VAR_10);
    if (!VAR_12->data.srv_txt_del.key) {
        FUNC_2(VAR_12);
        return VAR_3;
    }
    if (FUNC_5(VAR_6->action_queue, &VAR_12, (portTickType)0) != VAR_7) {
        FUNC_2(VAR_12->data.srv_txt_del.key);
        FUNC_2(VAR_12);
        return VAR_3;
    }
    return VAR_4;
}
