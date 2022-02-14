
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {int nb_streams; TYPE_5__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_16__ {TYPE_2__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_12__ {int drop; } ;
struct TYPE_14__ {int media_info; int sample_size; int sample_rate; int track_type; } ;
struct TYPE_15__ {int umf_media_offset; int umf_start_offset; TYPE_1__ tc; TYPE_3__ timecode_track; int nb_fields; } ;
struct TYPE_13__ {int codec_id; } ;
typedef TYPE_3__ GXFStreamContext ;
typedef TYPE_4__ GXFContext ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_3__*,TYPE_5__*) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_2)
{
    GXFContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    int64_t VAR_5;
    int VAR_6, VAR_7;

    VAR_5 = FUNC_1(VAR_4);
    VAR_3->umf_media_offset = VAR_5 - VAR_3->umf_start_offset;
    for (VAR_6 = 0; VAR_6 <= VAR_2->nb_streams; ++VAR_6) {
        GXFStreamContext *VAR_8;
        int64_t VAR_9, VAR_10;

        if (VAR_6 == VAR_2->nb_streams)
            VAR_8 = &VAR_3->timecode_track;
        else
            VAR_8 = VAR_2->streams[VAR_6]->priv_data;

        VAR_9 = FUNC_1(VAR_4);
        FUNC_4(VAR_4, 0);
        FUNC_4(VAR_4, VAR_8->media_info);
        FUNC_4(VAR_4, 0);
        FUNC_4(VAR_4, 0);
        FUNC_5(VAR_4, VAR_3->nb_fields);
        FUNC_5(VAR_4, 0);
        FUNC_5(VAR_4, 0);
        FUNC_5(VAR_4, VAR_3->nb_fields);
        FUNC_6(VAR_4, VAR_0, FUNC_11(VAR_0));
        FUNC_3(VAR_4, VAR_8->media_info);
        for (VAR_7 = FUNC_11(VAR_0)+2; VAR_7 < 88; VAR_7++)
            FUNC_2(VAR_4, 0);
        FUNC_5(VAR_4, VAR_8->track_type);
        FUNC_5(VAR_4, VAR_8->sample_rate);
        FUNC_5(VAR_4, VAR_8->sample_size);
        FUNC_5(VAR_4, 0);

        if (VAR_8 == &VAR_3->timecode_track)
            FUNC_10(VAR_4, VAR_3->tc.drop);
        else {
            AVStream *VAR_11 = VAR_2->streams[VAR_6];
            switch (VAR_11->codecpar->codec_id) {
            case 130:
            case 129:
                FUNC_9(VAR_4, VAR_11);
                break;
            case 128:
                FUNC_7(VAR_4, VAR_8);
                break;
            case 131:
                FUNC_8(VAR_4, VAR_8, VAR_11);
                break;
            }
        }

        VAR_10 = FUNC_1(VAR_4);
        FUNC_0(VAR_4, VAR_9, VAR_1);
        FUNC_4(VAR_4, VAR_10 - VAR_9);
        FUNC_0(VAR_4, VAR_10, VAR_1);
    }
    return FUNC_1(VAR_4) - VAR_5;
}
