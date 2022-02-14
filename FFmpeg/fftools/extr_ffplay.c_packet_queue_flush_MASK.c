
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pkt; struct TYPE_6__* next; } ;
struct TYPE_5__ {int mutex; scalar_t__ duration; scalar_t__ size; scalar_t__ nb_packets; TYPE_2__* first_pkt; int * last_pkt; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ MyAVPacketList ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(PacketQueue *VAR_0)
{
    MyAVPacketList *VAR_1, *VAR_2;

    FUNC_0(VAR_0->mutex);
    for (VAR_1 = VAR_0->first_pkt; VAR_1; VAR_1 = VAR_2) {
        VAR_2 = VAR_1->next;
        FUNC_3(&VAR_1->pkt);
        FUNC_2(&VAR_1);
    }
    VAR_0->last_pkt = ((void*)0);
    VAR_0->first_pkt = ((void*)0);
    VAR_0->nb_packets = 0;
    VAR_0->size = 0;
    VAR_0->duration = 0;
    FUNC_1(VAR_0->mutex);
}
