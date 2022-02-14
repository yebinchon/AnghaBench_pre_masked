
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int need_keyframe; TYPE_2__* ffmpeg_ic; } ;
typedef TYPE_1__ hb_stream_t ;
struct TYPE_7__ {scalar_t__ duration; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3( hb_stream_t *VAR_1, float VAR_2 )
{
    AVFormatContext *VAR_3 = VAR_1->ffmpeg_ic;
    int VAR_4;
    if ( VAR_2 > 0. )
    {
        int64_t VAR_5 = (double)VAR_1->ffmpeg_ic->duration * (double)VAR_2 +
                FUNC_1( VAR_1 );
        VAR_4 = FUNC_0( VAR_3, -1, 0, VAR_5, VAR_5, VAR_0);
        if (VAR_4 < 0)
        {
            FUNC_2("avformat_seek_file failed");
        }
    }
    else
    {
        int64_t VAR_6 = FUNC_1( VAR_1 );
        VAR_4 = FUNC_0( VAR_3, -1, 0, VAR_6, VAR_6, VAR_0);
        if (VAR_4 < 0)
        {
            FUNC_2("avformat_seek_file failed");
        }
    }
    VAR_1->need_keyframe = 1;
    return 1;
}
