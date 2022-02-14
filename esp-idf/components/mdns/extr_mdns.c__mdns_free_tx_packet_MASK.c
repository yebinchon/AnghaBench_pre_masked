
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int additional; int servers; int answers; int questions; } ;
typedef TYPE_1__ mdns_tx_packet_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(mdns_tx_packet_t * VAR_2)
{
    if (!VAR_2) {
        return;
    }
    FUNC_1(VAR_1, VAR_2->questions);
    FUNC_1(VAR_0, VAR_2->answers);
    FUNC_1(VAR_0, VAR_2->servers);
    FUNC_1(VAR_0, VAR_2->additional);
    FUNC_0(VAR_2);
}
