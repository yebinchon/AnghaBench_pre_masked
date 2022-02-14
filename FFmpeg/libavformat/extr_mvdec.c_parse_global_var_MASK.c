
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {void* nb_audio_tracks; void* nb_video_tracks; } ;
typedef TYPE_1__ MvContext ;
typedef int AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char const*,char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,char const*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVStream *VAR_2,
                            const char *VAR_3, int VAR_4)
{
    MvContext *VAR_5 = VAR_1->priv_data;
    AVIOContext *VAR_6 = VAR_1->pb;
    if (!FUNC_1(VAR_3, "__NUM_I_TRACKS")) {
        VAR_5->nb_video_tracks = FUNC_2(VAR_6, VAR_4);
    } else if (!FUNC_1(VAR_3, "__NUM_A_TRACKS")) {
        VAR_5->nb_audio_tracks = FUNC_2(VAR_6, VAR_4);
    } else if (!FUNC_1(VAR_3, "COMMENT") || !FUNC_1(VAR_3, "TITLE")) {
        FUNC_3(VAR_1, VAR_3, VAR_4);
    } else if (!FUNC_1(VAR_3, "LOOP_MODE") || !FUNC_1(VAR_3, "NUM_LOOPS") ||
               !FUNC_1(VAR_3, "OPTIMIZED")) {
        FUNC_0(VAR_6, VAR_4);
    } else
        return VAR_0;

    return 0;
}
