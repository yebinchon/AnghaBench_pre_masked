
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int nb_streams; TYPE_1__** streams; TYPE_4__* priv_data; int * pb; } ;
struct TYPE_8__ {int media_info; } ;
struct TYPE_10__ {int umf_track_offset; int umf_start_offset; TYPE_2__ timecode_track; } ;
struct TYPE_9__ {int media_info; } ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_3__ GXFStreamContext ;
typedef TYPE_4__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    AVIOContext *VAR_1 = VAR_0->pb;
    GXFContext *VAR_2 = VAR_0->priv_data;
    int64_t VAR_3 = FUNC_0(VAR_1);
    int VAR_4;

    VAR_2->umf_track_offset = VAR_3 - VAR_2->umf_start_offset;
    for (VAR_4 = 0; VAR_4 < VAR_0->nb_streams; ++VAR_4) {
        GXFStreamContext *VAR_5 = VAR_0->streams[VAR_4]->priv_data;
        FUNC_1(VAR_1, VAR_5->media_info);
        FUNC_1(VAR_1, 1);
    }

    FUNC_1(VAR_1, VAR_2->timecode_track.media_info);
    FUNC_1(VAR_1, 1);

    return FUNC_0(VAR_1) - VAR_3;
}
