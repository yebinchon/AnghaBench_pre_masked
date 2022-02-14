
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {TYPE_2__* ffmpeg_ic; } ;
typedef TYPE_1__ hb_stream_t ;
struct TYPE_5__ {scalar_t__ start_time; } ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;

int64_t FUNC_0( hb_stream_t * VAR_1 )
{
    AVFormatContext *VAR_2 = VAR_1->ffmpeg_ic;
    if (VAR_2->start_time != VAR_0)
        return VAR_2->start_time;
    else
        return 0;
}
