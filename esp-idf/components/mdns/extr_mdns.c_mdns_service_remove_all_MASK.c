
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int portTickType ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int action_queue; int services; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__**,int ) ;

esp_err_t FUNC_3(void)
{
    if (!VAR_5) {
        return VAR_1;
    }
    if (!VAR_5->services) {
        return VAR_3;
    }

    mdns_action_t * VAR_7 = (mdns_action_t *)FUNC_1(sizeof(mdns_action_t));
    if (!VAR_7) {
        VAR_4;
        return VAR_2;
    }
    VAR_7->type = VAR_0;
    if (FUNC_2(VAR_5->action_queue, &VAR_7, (portTickType)0) != VAR_6) {
        FUNC_0(VAR_7);
        return VAR_2;
    }
    return VAR_3;
}
