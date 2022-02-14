
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int audio_stream_count; TYPE_1__* audio_streams; } ;
struct TYPE_5__ {scalar_t__ pid; scalar_t__ coding_type; } ;
typedef TYPE_1__ BLURAY_STREAM_INFO ;
typedef TYPE_2__ BLURAY_CLIP_INFO ;



__attribute__((used)) static int FUNC_0( BLURAY_CLIP_INFO *VAR_0, BLURAY_CLIP_INFO *VAR_1 )
{
    int VAR_2, VAR_3, VAR_4;

    if ( VAR_0->audio_stream_count != VAR_1->audio_stream_count )
        return 0;

    if ( VAR_0->audio_stream_count == 0 )
        return 0;

    for ( VAR_2 = 0; VAR_2 < VAR_0->audio_stream_count; VAR_2++ )
    {
        BLURAY_STREAM_INFO * VAR_5 = &VAR_0->audio_streams[VAR_2];
        VAR_4 = 0;
        for ( VAR_3 = 0; VAR_3 < VAR_1->audio_stream_count; VAR_3++ )
        {
            if ( VAR_5->pid == VAR_1->audio_streams[VAR_3].pid &&
                 VAR_5->coding_type == VAR_1->audio_streams[VAR_3].coding_type)
            {
                VAR_4 = 1;
                break;
            }
        }
        if ( !VAR_4 )
            return 0;
    }
    return 1;
}
