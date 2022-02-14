
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int audiosize; scalar_t__ frame; scalar_t__ framecnt; int audio_stream_index; int video_stream_index; scalar_t__ has_audio; void* next_framesz; int next_frame; } ;
typedef TYPE_1__ ThpDemuxContext ;
struct TYPE_10__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int * data; int duration; int stream_index; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3,
                            AVPacket *VAR_4)
{
    ThpDemuxContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    unsigned int VAR_7;
    int VAR_8;

    if (VAR_5->audiosize == 0) {

        if (VAR_5->frame >= VAR_5->framecnt)
            return VAR_0;

        FUNC_6(VAR_6, VAR_5->next_frame, VAR_2);


        VAR_5->next_frame += FUNC_2(VAR_5->next_framesz, 1);
        VAR_5->next_framesz = FUNC_5(VAR_6);

                        FUNC_5(VAR_6);
        VAR_7 = FUNC_5(VAR_6);



        if (VAR_5->has_audio)
            VAR_5->audiosize = FUNC_5(VAR_6);
        else
            VAR_5->frame++;

        VAR_8 = FUNC_3(VAR_6, VAR_4, VAR_7);
        if (VAR_8 < 0)
            return VAR_8;
        if (VAR_8 != VAR_7) {
            FUNC_4(VAR_4);
            return FUNC_0(VAR_1);
        }

        VAR_4->stream_index = VAR_5->video_stream_index;
    } else {
        VAR_8 = FUNC_3(VAR_6, VAR_4, VAR_5->audiosize);
        if (VAR_8 < 0)
            return VAR_8;
        if (VAR_8 != VAR_5->audiosize) {
            FUNC_4(VAR_4);
            return FUNC_0(VAR_1);
        }

        VAR_4->stream_index = VAR_5->audio_stream_index;
        if (VAR_5->audiosize >= 8)
            VAR_4->duration = FUNC_1(&VAR_4->data[4]);

        VAR_5->audiosize = 0;
        VAR_5->frame++;
    }

    return 0;
}
