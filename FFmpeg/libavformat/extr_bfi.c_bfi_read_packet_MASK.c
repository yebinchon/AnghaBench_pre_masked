
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int pts; int stream_index; } ;
struct TYPE_8__ {scalar_t__ nframes; int avflag; int video_size; int audio_frame; int video_frame; } ;
typedef TYPE_1__ BFIContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext * VAR_5, AVPacket * VAR_6)
{
    BFIContext *VAR_7 = VAR_5->priv_data;
    AVIOContext *VAR_8 = VAR_5->pb;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;
    if (VAR_7->nframes == 0 || FUNC_4(VAR_8)) {
        return VAR_0;
    }


    if (!VAR_7->avflag) {
        uint32_t VAR_14 = 0;
        while(VAR_14 != FUNC_1('S','A','V','I')){
            if (FUNC_4(VAR_8))
                return FUNC_0(VAR_4);
            VAR_14 = 256*VAR_14 + FUNC_5(VAR_8);
        }

        VAR_12 = FUNC_6(VAR_8);
        FUNC_6(VAR_8);
        VAR_10 = FUNC_6(VAR_8);
        FUNC_6(VAR_8);
        VAR_11 = FUNC_6(VAR_8);
        VAR_13 = VAR_11 - VAR_10;
        VAR_7->video_size = VAR_12 - VAR_11;
        if (VAR_13 < 0 || VAR_7->video_size < 0) {
            FUNC_3(VAR_5, VAR_2, "Invalid audio/video offsets or chunk size\n");
            return VAR_1;
        }


        VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_13);
        if (VAR_9 < 0)
            return VAR_9;

        VAR_6->pts = VAR_7->audio_frame;
        VAR_7->audio_frame += VAR_9;
    } else if (VAR_7->video_size > 0) {


        VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7->video_size);
        if (VAR_9 < 0)
            return VAR_9;

        VAR_6->pts = VAR_7->video_frame;
        VAR_7->video_frame += VAR_9 / VAR_7->video_size;


        VAR_7->nframes--;
    } else {

        VAR_9 = FUNC_0(VAR_3);
    }

    VAR_7->avflag = !VAR_7->avflag;
    VAR_6->stream_index = VAR_7->avflag;
    return VAR_9;
}
