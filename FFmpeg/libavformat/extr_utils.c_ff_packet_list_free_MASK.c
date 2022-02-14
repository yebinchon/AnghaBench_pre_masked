
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkt; struct TYPE_5__* next; } ;
typedef TYPE_1__ AVPacketList ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *) ;

void FUNC_2(AVPacketList **VAR_0, AVPacketList **VAR_1)
{
    AVPacketList *VAR_2 = *VAR_0;

    while (VAR_2) {
        AVPacketList *VAR_3 = VAR_2;
        VAR_2 = VAR_3->next;
        FUNC_1(&VAR_3->pkt);
        FUNC_0(&VAR_3);
    }
    *VAR_0 = ((void*)0);
    *VAR_1 = ((void*)0);
}
