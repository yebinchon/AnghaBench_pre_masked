
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
struct TYPE_11__ {TYPE_4__* codecpar; TYPE_1__* priv_data; } ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
struct TYPE_9__ {int nb_streams; TYPE_5__** streams; TYPE_2__* priv_data; int * pb; } ;
struct TYPE_8__ {int frames_hdr_all; } ;
struct TYPE_7__ {int packet_count; int audio_strm_length; int frames_hdr_strm; } ;
typedef TYPE_1__ AVIStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVIContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_5__*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, int VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    AVIContext *VAR_5 = VAR_2->priv_data;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0;
    int64_t VAR_11;
    AVCodecParameters *VAR_12;

    VAR_11 = FUNC_3(VAR_4);
    for (VAR_6 = 0; VAR_6 < VAR_2->nb_streams; VAR_6++) {
        AVIStream *VAR_13 = VAR_2->streams[VAR_6]->priv_data;

        FUNC_1(VAR_13->frames_hdr_strm);
        VAR_12 = VAR_2->streams[VAR_6]->codecpar;
        FUNC_2(VAR_4, VAR_13->frames_hdr_strm, VAR_1);
        FUNC_5(VAR_2->streams[VAR_6], &VAR_7, &VAR_8, &VAR_9);
        if (VAR_8 == 0)
            FUNC_4(VAR_4, VAR_13->packet_count);
        else
            FUNC_4(VAR_4, VAR_13->audio_strm_length / VAR_8);
        if (VAR_12->codec_type == VAR_0)
            VAR_10 = FUNC_0(VAR_10, VAR_13->packet_count);
    }
    if (VAR_3 == 1) {
        FUNC_1(VAR_5->frames_hdr_all);
        FUNC_2(VAR_4, VAR_5->frames_hdr_all, VAR_1);
        FUNC_4(VAR_4, VAR_10);
    }
    FUNC_2(VAR_4, VAR_11, VAR_1);

    return 0;
}
