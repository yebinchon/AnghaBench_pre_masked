
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int swf_frame_number; int video_par; int sound_samples; int audio_fifo; } ;
typedef TYPE_1__ SWFContext ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3,
                           AVCodecParameters *VAR_4, uint8_t *VAR_5, int VAR_6)
{
    SWFContext *VAR_7 = VAR_3->priv_data;


    if (VAR_7->swf_frame_number == 16000)
        FUNC_3(VAR_3, VAR_2, "warning: Flash Player limit of 16000 frames reached\n");

    if (FUNC_1(VAR_7->audio_fifo) + VAR_6 > VAR_0) {
        FUNC_3(VAR_3, VAR_1, "audio fifo too small to mux audio essence\n");
        return -1;
    }

    FUNC_0(VAR_7->audio_fifo, VAR_5, VAR_6, ((void*)0));
    VAR_7->sound_samples += FUNC_2(VAR_4, VAR_6);


    if (!VAR_7->video_par)
        FUNC_4(VAR_3, VAR_4, 0, 0);

    return 0;
}
