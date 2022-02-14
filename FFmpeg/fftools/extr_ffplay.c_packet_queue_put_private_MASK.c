
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ duration; scalar_t__ size; } ;
struct TYPE_9__ {TYPE_3__ pkt; struct TYPE_9__* next; scalar_t__ serial; } ;
struct TYPE_8__ {int cond; int duration; int size; int nb_packets; TYPE_2__* last_pkt; TYPE_2__* first_pkt; scalar_t__ serial; scalar_t__ abort_request; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ MyAVPacketList ;
typedef TYPE_3__ AVPacket ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_2(PacketQueue *VAR_1, AVPacket *VAR_2)
{
    MyAVPacketList *VAR_3;

    if (VAR_1->abort_request)
       return -1;

    VAR_3 = FUNC_1(sizeof(MyAVPacketList));
    if (!VAR_3)
        return -1;
    VAR_3->pkt = *VAR_2;
    VAR_3->next = ((void*)0);
    if (VAR_2 == &VAR_0)
        VAR_1->serial++;
    VAR_3->serial = VAR_1->serial;

    if (!VAR_1->last_pkt)
        VAR_1->first_pkt = VAR_3;
    else
        VAR_1->last_pkt->next = VAR_3;
    VAR_1->last_pkt = VAR_3;
    VAR_1->nb_packets++;
    VAR_1->size += VAR_3->pkt.size + sizeof(*VAR_3);
    VAR_1->duration += VAR_3->pkt.duration;

    FUNC_0(VAR_1->cond);
    return 0;
}
