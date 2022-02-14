
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_srv_item_t ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_5__ {TYPE_1__* services; } ;


 int FUNC_0 (int ,int ,TYPE_1__**,size_t,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(mdns_if_t VAR_1, mdns_ip_protocol_t VAR_2)
{
    size_t VAR_3 = 0;
    mdns_srv_item_t * VAR_4 = VAR_0->services;
    while (VAR_4) {
        VAR_3++;
        VAR_4 = VAR_4->next;
    }
    mdns_srv_item_t * VAR_5[VAR_3];
    size_t VAR_6 = 0;
    VAR_4 = VAR_0->services;
    while (VAR_4) {
        VAR_5[VAR_6++] = VAR_4;
        VAR_4 = VAR_4->next;
    }
    FUNC_0(VAR_1, VAR_2, VAR_5, VAR_3, 1);
}
