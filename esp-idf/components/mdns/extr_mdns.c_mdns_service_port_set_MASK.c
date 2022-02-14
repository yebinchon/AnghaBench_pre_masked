
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int portTickType ;
typedef int mdns_srv_item_t ;
struct TYPE_7__ {scalar_t__ port; int * service; } ;
struct TYPE_8__ {TYPE_1__ srv_port; } ;
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
 int * FUNC_0 (char const*,char const*) ;
 TYPE_6__* VAR_6 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int ,TYPE_3__**,int ) ;

esp_err_t FUNC_5(const char * VAR_8, const char * VAR_9, uint16_t VAR_10)
{
    if (!VAR_6 || !VAR_6->services || FUNC_1(VAR_8) || FUNC_1(VAR_9) || !VAR_10) {
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
    VAR_12->data.srv_port.service = VAR_11;
    VAR_12->data.srv_port.port = VAR_10;
    if (FUNC_4(VAR_6->action_queue, &VAR_12, (portTickType)0) != VAR_7) {
        FUNC_2(VAR_12);
        return VAR_3;
    }
    return VAR_4;
}
