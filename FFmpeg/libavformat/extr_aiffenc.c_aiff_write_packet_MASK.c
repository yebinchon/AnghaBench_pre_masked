
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ audio_stream_idx; int pict_list_end; int pict_list; } ;
struct TYPE_13__ {TYPE_2__** streams; int * pb; TYPE_5__* priv_data; } ;
struct TYPE_12__ {scalar_t__ stream_index; int size; int data; } ;
struct TYPE_11__ {int nb_frames; TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AIFFOutputContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*,size_t) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AIFFOutputContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    if (VAR_4->stream_index == VAR_5->audio_stream_idx)
        FUNC_1(VAR_6, VAR_4->data, VAR_4->size);
    else {
        if (VAR_3->streams[VAR_4->stream_index]->codecpar->codec_type != VAR_0)
            return 0;


        if (VAR_3->streams[VAR_4->stream_index]->nb_frames == 1) {
            FUNC_0(VAR_3, VAR_1, "Got more than one picture in stream %d,"
                   " ignoring.\n", VAR_4->stream_index);
        }
        if (VAR_3->streams[VAR_4->stream_index]->nb_frames >= 1)
            return 0;

        return FUNC_2(&VAR_5->pict_list, &VAR_5->pict_list_end,
                                  VAR_4, VAR_2);
    }

    return 0;
}
