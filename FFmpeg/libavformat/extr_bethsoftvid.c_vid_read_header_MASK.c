
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ctx_flags; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int video_index; int audio_index; int sample_rate; void* bethsoft_global_delay; void* height; void* width; void* nframes; } ;
typedef TYPE_1__ BVID_DemuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2)
{
    BVID_DemuxContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;





    FUNC_1(VAR_4, 5);
    VAR_3->nframes = FUNC_0(VAR_4);
    VAR_3->width = FUNC_0(VAR_4);
    VAR_3->height = FUNC_0(VAR_4);
    VAR_3->bethsoft_global_delay = FUNC_0(VAR_4);
    FUNC_0(VAR_4);


    VAR_3->video_index = -1;
    VAR_3->audio_index = -1;
    VAR_3->sample_rate = VAR_1;
    VAR_2->ctx_flags |= VAR_0;

    return 0;
}
