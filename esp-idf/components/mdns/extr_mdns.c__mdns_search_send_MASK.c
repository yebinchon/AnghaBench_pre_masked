
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ mdns_search_once_t ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_6__ {TYPE_1__* search_once; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_1(mdns_search_once_t * VAR_3)
{
    mdns_search_once_t* VAR_4 = VAR_2->search_once;
    bool VAR_5 = 0;

    while (VAR_4) {
        if (VAR_4 == VAR_3) {
            VAR_5 = 1;
            break;
        }
        VAR_4 = VAR_4->next;
    }

    if (!VAR_5) {

        return;
    }

    uint8_t VAR_6, VAR_7;
    for (VAR_6=0; VAR_6<VAR_0; VAR_6++) {
        for (VAR_7=0; VAR_7<VAR_1; VAR_7++) {
            FUNC_0(VAR_3, (mdns_if_t)VAR_6, (mdns_ip_protocol_t)VAR_7);
        }
    }
}
