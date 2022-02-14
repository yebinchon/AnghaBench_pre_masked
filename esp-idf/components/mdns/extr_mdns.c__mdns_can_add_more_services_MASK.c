
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ mdns_srv_item_t ;
struct TYPE_4__ {TYPE_1__* services; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static bool FUNC_0(void)
{
    mdns_srv_item_t * VAR_2 = VAR_1->services;
    uint16_t VAR_3 = 0;
    while (VAR_2) {
        VAR_3 ++;
        VAR_2 = VAR_2->next;
        if (VAR_3 >= VAR_0) {
            return 0;
        }
    }

    return 1;
}
