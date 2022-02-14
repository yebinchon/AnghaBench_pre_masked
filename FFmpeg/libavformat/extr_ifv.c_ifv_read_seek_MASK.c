
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {unsigned int nb_streams; int * streams; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int next_video_index; int total_vframes; int next_audio_index; int total_aframes; unsigned int video_stream_index; } ;
typedef TYPE_1__ IFVContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    IFVContext *VAR_5 = VAR_1->priv_data;

    for (unsigned VAR_6 = 0; VAR_6 < VAR_1->nb_streams; VAR_6++) {
        int VAR_7 = FUNC_0(VAR_1->streams[VAR_6], VAR_3, VAR_0);
        if (VAR_7 < 0) {
            VAR_5->next_video_index = VAR_5->total_vframes - 1;
            VAR_5->next_audio_index = VAR_5->total_aframes - 1;
            return 0;
        }

        if (VAR_6 == VAR_5->video_stream_index) {
            VAR_5->next_video_index = VAR_7;
        } else {
            VAR_5->next_audio_index = VAR_7;
        }
    }

    return 0;
}
