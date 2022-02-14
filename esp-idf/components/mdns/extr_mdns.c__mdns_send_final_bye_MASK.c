
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_srv_item_t ;
struct TYPE_5__ {TYPE_1__* services; } ;


 int FUNC_0 (TYPE_1__**,size_t,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(bool VAR_1)
{

    size_t VAR_2 = 0;
    mdns_srv_item_t * VAR_3 = VAR_0->services;
    while (VAR_3) {
        VAR_2++;
        VAR_3 = VAR_3->next;
    }
    if (!VAR_2) {
        return;
    }
    mdns_srv_item_t * VAR_4[VAR_2];
    size_t VAR_5 = 0;
    VAR_3 = VAR_0->services;
    while (VAR_3) {
        VAR_4[VAR_5++] = VAR_3;
        VAR_3 = VAR_3->next;
    }
    FUNC_0(VAR_4, VAR_2, VAR_1);
}
