
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__* service; } ;
typedef TYPE_2__ mdns_srv_item_t ;
struct TYPE_7__ {TYPE_2__* services; } ;
struct TYPE_5__ {int instance; } ;


 int FUNC_0 (TYPE_2__**,size_t,int,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    size_t VAR_1 = 0;
    mdns_srv_item_t * VAR_2 = VAR_0->services;
    while (VAR_2) {
        if (!VAR_2->service->instance) {
            VAR_1++;
        }
        VAR_2 = VAR_2->next;
    }
    if (!VAR_1) {
        return;
    }
    mdns_srv_item_t * VAR_3[VAR_1];
    size_t VAR_4 = 0;
    VAR_2 = VAR_0->services;
    while (VAR_2) {
        if (!VAR_2->service->instance) {
            VAR_3[VAR_4++] = VAR_2;
        }
        VAR_2 = VAR_2->next;
    }
    FUNC_0(VAR_3, VAR_1, 0, 1);
}
