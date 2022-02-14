
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int audio_codec; void* num_channels; void* bytes; void* sample_rate; } ;
typedef TYPE_1__ EaDemuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_1)
{
    EaDemuxContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;

    VAR_2->sample_rate = FUNC_0(VAR_3);
    VAR_2->bytes = FUNC_0(VAR_3);
    VAR_2->num_channels = FUNC_0(VAR_3);
    VAR_2->audio_codec = VAR_0;
}
