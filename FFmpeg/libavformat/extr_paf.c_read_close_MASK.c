
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int temp_audio_frame; int audio_frame; int video_frame; int blocks_offset_table; int frames_offset_table; int blocks_count_table; } ;
typedef TYPE_1__ PAFDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    PAFDemuxContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->blocks_count_table);
    FUNC_0(&VAR_1->frames_offset_table);
    FUNC_0(&VAR_1->blocks_offset_table);
    FUNC_0(&VAR_1->video_frame);
    FUNC_0(&VAR_1->audio_frame);
    FUNC_0(&VAR_1->temp_audio_frame);

    return 0;
}
