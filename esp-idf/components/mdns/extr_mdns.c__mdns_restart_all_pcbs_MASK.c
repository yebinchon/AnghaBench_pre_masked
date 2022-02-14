
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_srv_item_t ;
struct TYPE_5__ {TYPE_1__* services; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__**,size_t,int,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_0();
    size_t VAR_1 = 0;
    mdns_srv_item_t * VAR_2 = VAR_0->services;
    while (VAR_2) {
        VAR_1++;
        VAR_2 = VAR_2->next;
    }
    mdns_srv_item_t * VAR_3[VAR_1];
    size_t VAR_4 = 0;
    VAR_2 = VAR_0->services;
    while (VAR_2) {
        VAR_3[VAR_4++] = VAR_2;
        VAR_2 = VAR_2->next;
    }

    FUNC_1(VAR_3, VAR_1, 1, 1);
}
