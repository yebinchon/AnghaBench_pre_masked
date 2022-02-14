
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int pkt; } ;
typedef TYPE_1__ AVPacketList ;
typedef int AVPacket ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;

int FUNC_2(AVPacketList **VAR_0,
                       AVPacketList **VAR_1,
                       AVPacket *VAR_2)
{
    AVPacketList *VAR_3;
    FUNC_0(*VAR_0);
    VAR_3 = *VAR_0;
    *VAR_2 = VAR_3->pkt;
    *VAR_0 = VAR_3->next;
    if (!VAR_3->next)
        *VAR_1 = ((void*)0);
    FUNC_1(&VAR_3);
    return 0;
}
