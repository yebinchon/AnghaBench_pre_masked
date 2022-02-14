
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_15__ {TYPE_2__** streams; TYPE_4__* priv_data; int * pb; } ;
struct TYPE_14__ {scalar_t__ stream_index; int flags; int size; int * data; int duration; int pts; } ;
struct TYPE_13__ {scalar_t__ audio_index; TYPE_3__* last; int packet_count; TYPE_3__* start; } ;
struct TYPE_12__ {int audio; int keyframe; int size; int index; struct TYPE_12__* next; int duration; int pts; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int codec_id; } ;
typedef TYPE_3__ FILMPacket ;
typedef TYPE_4__ FILMOutputContext ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    FILMPacket *VAR_5;
    AVIOContext *VAR_6 = VAR_3->pb;
    FILMOutputContext *VAR_7 = VAR_3->priv_data;
    int VAR_8 = 0;
    enum AVCodecID VAR_9;


    VAR_5 = FUNC_3(sizeof(FILMPacket));
    if (!VAR_5)
        return FUNC_0(VAR_2);
    VAR_5->audio = VAR_4->stream_index == VAR_7->audio_index;
    VAR_5->keyframe = VAR_4->flags & VAR_1;
    VAR_5->pts = VAR_4->pts;
    VAR_5->duration = VAR_4->duration;
    VAR_5->size = VAR_4->size;
    if (VAR_7->last == ((void*)0)) {
        VAR_5->index = 0;
    } else {
        VAR_5->index = VAR_7->last->index + VAR_7->last->size;
        VAR_7->last->next = VAR_5;
    }
    VAR_5->next = ((void*)0);
    if (VAR_7->start == ((void*)0))
        VAR_7->start = VAR_5;
    VAR_7->packet_count++;
    VAR_7->last = VAR_5;

    VAR_9 = VAR_3->streams[VAR_4->stream_index]->codecpar->codec_id;



    if (VAR_9 == VAR_0) {
        VAR_8 = FUNC_1(&VAR_4->data[1]);

        if (VAR_8 != VAR_4->size && (VAR_4->size % VAR_8) != 0) {
            FUNC_4(VAR_6, VAR_4->data, VAR_4->size);
        } else {
            uint8_t VAR_10[2] = {0, 0};



            FUNC_2(&VAR_4->data[1], VAR_4->size - 8 + 2);
            VAR_5->size += 2;

            FUNC_4(VAR_6, VAR_4->data, 10);
            FUNC_4(VAR_6, VAR_10, 2);
            FUNC_4(VAR_6, &VAR_4->data[10], VAR_4->size - 10);
        }
    } else {

        FUNC_4(VAR_6, VAR_4->data, VAR_4->size);
    }

    return 0;
}
