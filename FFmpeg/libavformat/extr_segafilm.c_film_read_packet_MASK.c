
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stream; int sample_size; scalar_t__ pts; scalar_t__ keyframe; int sample_offset; } ;
typedef TYPE_1__ film_sample ;
struct TYPE_11__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {scalar_t__ stream_index; scalar_t__ duration; int flags; scalar_t__ pts; scalar_t__ dts; } ;
struct TYPE_9__ {size_t current_sample; size_t sample_count; TYPE_1__* sample_table; } ;
typedef TYPE_2__ FilmDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4,
                            AVPacket *VAR_5)
{
    FilmDemuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    film_sample *VAR_8;
    film_sample *VAR_9 = ((void*)0);
    int VAR_10;
    int VAR_11 = 0;

    if (VAR_6->current_sample >= VAR_6->sample_count)
        return VAR_0;

    VAR_8 = &VAR_6->sample_table[VAR_6->current_sample];



    VAR_10 = VAR_6->current_sample + 1;
    while (VAR_9 == ((void*)0)) {
        if (VAR_10 >= VAR_6->sample_count)
            break;

        VAR_9 = &VAR_6->sample_table[VAR_10];
        if (VAR_9->stream != VAR_8->stream) {
            VAR_9 = ((void*)0);
            VAR_10++;
        }
    }


    FUNC_2(VAR_7, VAR_8->sample_offset, VAR_3);

    VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_8->sample_size);
    if (VAR_11 != VAR_8->sample_size)
        VAR_11 = FUNC_0(VAR_2);

    VAR_5->stream_index = VAR_8->stream;
    VAR_5->dts = VAR_8->pts;
    VAR_5->pts = VAR_8->pts;
    VAR_5->flags |= VAR_8->keyframe ? VAR_1 : 0;
    if (VAR_9 != ((void*)0))
        VAR_5->duration = VAR_9->pts - VAR_8->pts;

    VAR_6->current_sample++;

    return VAR_11;
}
