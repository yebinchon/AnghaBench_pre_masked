
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_5__ {int ach; TYPE_2__* audio_pkt; scalar_t__* ast; } ;
typedef TYPE_1__ DVDemuxContext ;
typedef TYPE_2__ AVPacket ;



int FUNC_0(DVDemuxContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2 = -1;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->ach; VAR_3++) {
        if (VAR_0->ast[VAR_3] && VAR_0->audio_pkt[VAR_3].size) {
            *VAR_1 = VAR_0->audio_pkt[VAR_3];
            VAR_0->audio_pkt[VAR_3].size = 0;
            VAR_2 = VAR_1->size;
            break;
        }
    }

    return VAR_2;
}
