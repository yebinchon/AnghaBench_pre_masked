
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ codec_type; } ;
struct TYPE_16__ {int nb_streams; TYPE_3__* pb; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int seekable; } ;
struct TYPE_14__ {int duration_pos; int vframes_pos; int video_frame_number; int audio_fifo; } ;
struct TYPE_13__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ SWFContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4)
{
    SWFContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    AVCodecParameters *VAR_7, *VAR_8;
    int VAR_9, VAR_10;

    VAR_8 = ((void*)0);
    for(VAR_10=0;VAR_10<VAR_4->nb_streams;VAR_10++) {
        VAR_7 = VAR_4->streams[VAR_10]->codecpar;
        if (VAR_7->codec_type == VAR_1)
            VAR_8 = VAR_7;
        else {
            FUNC_0(&VAR_5->audio_fifo);
        }
    }

    FUNC_6(VAR_4, VAR_3);
    FUNC_5(VAR_4);


    if ((VAR_4->pb->seekable & VAR_0) && VAR_8) {
        VAR_9 = FUNC_2(VAR_6);
        FUNC_1(VAR_6, 4, VAR_2);
        FUNC_4(VAR_6, VAR_9);
        FUNC_1(VAR_6, VAR_5->duration_pos, VAR_2);
        FUNC_3(VAR_6, VAR_5->video_frame_number);
        if (VAR_5->vframes_pos) {
        FUNC_1(VAR_6, VAR_5->vframes_pos, VAR_2);
        FUNC_3(VAR_6, VAR_5->video_frame_number);
        }
        FUNC_1(VAR_6, VAR_9, VAR_2);
    }
    return 0;
}
