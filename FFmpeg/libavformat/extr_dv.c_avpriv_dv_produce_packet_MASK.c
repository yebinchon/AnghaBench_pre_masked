
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* int64_t ;
struct TYPE_21__ {int frame_size; int height; } ;
struct TYPE_20__ {int* data; int size; int pts; int stream_index; int flags; void* pos; } ;
struct TYPE_19__ {int ach; int abytes; int** audio_buf; int frames; TYPE_4__* vst; TYPE_3__* audio_pkt; TYPE_9__* sys; TYPE_2__** ast; } ;
struct TYPE_18__ {int index; } ;
struct TYPE_17__ {int size; int pts; void* pos; } ;
struct TYPE_16__ {TYPE_1__* codecpar; } ;
struct TYPE_15__ {int bit_rate; } ;
typedef TYPE_5__ DVDemuxContext ;
typedef TYPE_6__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_0 (TYPE_9__*,int*,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int*,int**,TYPE_9__*) ;
 int FUNC_3 (TYPE_5__*,int*) ;
 int FUNC_4 (TYPE_5__*,int*) ;

int FUNC_5(DVDemuxContext *VAR_2, AVPacket *VAR_3,
                             uint8_t *VAR_4, int VAR_5, int64_t VAR_6)
{
    int VAR_7, VAR_8;
    uint8_t *VAR_9[5] = { 0 };

    if (VAR_5 < VAR_1 ||
        !(VAR_2->sys = FUNC_0(VAR_2->sys, VAR_4, VAR_5)) ||
        VAR_5 < VAR_2->sys->frame_size) {
        return -1;
    }



    VAR_7 = FUNC_3(VAR_2, VAR_4);
    for (VAR_8 = 0; VAR_8 < VAR_2->ach; VAR_8++) {
        VAR_2->audio_pkt[VAR_8].pos = VAR_6;
        VAR_2->audio_pkt[VAR_8].size = VAR_7;
        VAR_2->audio_pkt[VAR_8].pts = VAR_2->abytes * 30000 * 8 /
                               VAR_2->ast[VAR_8]->codecpar->bit_rate;
        VAR_9[VAR_8] = VAR_2->audio_buf[VAR_8];
    }
    if (VAR_2->ach)
        FUNC_2(VAR_4, VAR_9, VAR_2->sys);



    if (VAR_2->sys->height == 720) {
        if (VAR_4[1] & 0x0C) {
            VAR_2->audio_pkt[2].size = VAR_2->audio_pkt[3].size = 0;
        } else {
            VAR_2->audio_pkt[0].size = VAR_2->audio_pkt[1].size = 0;
            VAR_2->abytes += VAR_7;
        }
    } else {
        VAR_2->abytes += VAR_7;
    }


    VAR_7 = FUNC_4(VAR_2, VAR_4);
    FUNC_1(VAR_3);
    VAR_3->data = VAR_4;
    VAR_3->pos = VAR_6;
    VAR_3->size = VAR_7;
    VAR_3->flags |= VAR_0;
    VAR_3->stream_index = VAR_2->vst->index;
    VAR_3->pts = VAR_2->frames;

    VAR_2->frames++;

    return VAR_7;
}
