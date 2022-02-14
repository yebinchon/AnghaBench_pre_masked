
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ duration; scalar_t__ size; } ;
struct TYPE_8__ {int serial; TYPE_3__ pkt; struct TYPE_8__* next; } ;
struct TYPE_7__ {int mutex; int cond; int duration; int size; int nb_packets; int * last_pkt; TYPE_2__* first_pkt; scalar_t__ abort_request; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ MyAVPacketList ;
typedef TYPE_3__ AVPacket ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(PacketQueue *VAR_0, AVPacket *VAR_1, int VAR_2, int *VAR_3)
{
    MyAVPacketList *VAR_4;
    int VAR_5;

    FUNC_1(VAR_0->mutex);

    for (;;) {
        if (VAR_0->abort_request) {
            VAR_5 = -1;
            break;
        }

        VAR_4 = VAR_0->first_pkt;
        if (VAR_4) {
            VAR_0->first_pkt = VAR_4->next;
            if (!VAR_0->first_pkt)
                VAR_0->last_pkt = ((void*)0);
            VAR_0->nb_packets--;
            VAR_0->size -= VAR_4->pkt.size + sizeof(*VAR_4);
            VAR_0->duration -= VAR_4->pkt.duration;
            *VAR_1 = VAR_4->pkt;
            if (VAR_3)
                *VAR_3 = VAR_4->serial;
            FUNC_3(VAR_4);
            VAR_5 = 1;
            break;
        } else if (!VAR_2) {
            VAR_5 = 0;
            break;
        } else {
            FUNC_0(VAR_0->cond, VAR_0->mutex);
        }
    }
    FUNC_2(VAR_0->mutex);
    return VAR_5;
}
