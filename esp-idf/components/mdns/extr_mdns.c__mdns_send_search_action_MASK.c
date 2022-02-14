
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int portTickType ;
typedef int mdns_search_once_t ;
typedef int mdns_action_type_t ;
struct TYPE_7__ {int * search; } ;
struct TYPE_8__ {TYPE_1__ search_add; } ;
struct TYPE_9__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int action_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,TYPE_3__**,int ) ;

__attribute__((used)) static esp_err_t FUNC_3(mdns_action_type_t VAR_5, mdns_search_once_t * VAR_6)
{
    mdns_action_t * VAR_7 = ((void*)0);

    VAR_7 = (mdns_action_t *)FUNC_1(sizeof(mdns_action_t));
    if (!VAR_7) {
        VAR_2;
        return VAR_0;
    }

    VAR_7->type = VAR_5;
    VAR_7->data.search_add.search = VAR_6;
    if (FUNC_2(VAR_3->action_queue, &VAR_7, (portTickType)0) != VAR_4) {
        FUNC_0(VAR_7);
        return VAR_0;
    }
    return VAR_1;
}
