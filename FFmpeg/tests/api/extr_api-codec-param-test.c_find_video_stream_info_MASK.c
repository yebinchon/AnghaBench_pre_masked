
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ codec_type; } ;
struct TYPE_16__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_15__ {size_t stream_index; } ;
struct TYPE_14__ {scalar_t__ codec_info_nb_frames; TYPE_4__* codec; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    int VAR_5, VAR_6 = 0;
    AVPacket VAR_7;

    FUNC_0(&VAR_7);

    while (!VAR_6) {
        AVCodecContext *VAR_8 = ((void*)0);
        AVStream *VAR_9;

        if ((VAR_4 = FUNC_3(VAR_2, &VAR_7)) < 0) {
            FUNC_1(VAR_2, VAR_1, "Failed to read frame\n");
            goto end;
        }

        VAR_9 = VAR_2->streams[VAR_7.stream_index];
        VAR_8 = VAR_9->codec;






        if (VAR_8->codec_type != VAR_0 ||
            VAR_9->codec_info_nb_frames++ > 0) {
            FUNC_2(&VAR_7);
            continue;
        }

        VAR_4 = FUNC_5(VAR_8, &VAR_7, VAR_3);
        if (VAR_4 < 0) {
            FUNC_1(VAR_2, VAR_1, "Failed to decode video frame\n");
            goto end;
        }

        FUNC_2(&VAR_7);


        VAR_6 = 1;
        for (VAR_5 = 0; VAR_5 < VAR_2->nb_streams; VAR_5++) {
            VAR_9 = VAR_2->streams[VAR_5];
            VAR_8 = VAR_9->codec;

            if (VAR_8->codec_type != VAR_0)
                continue;

            VAR_6 &= VAR_9->codec_info_nb_frames > 0;
        }
    }

end:
    FUNC_2(&VAR_7);


    for (VAR_5 = 0; VAR_5 < VAR_2->nb_streams; VAR_5++) {
        AVStream *VAR_10 = VAR_2->streams[VAR_5];
        FUNC_4(VAR_10->codec);
    }

    return VAR_4 < 0;
}
