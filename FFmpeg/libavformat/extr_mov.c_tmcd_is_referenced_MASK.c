
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int timecode_track; } ;
struct TYPE_6__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
        AVStream *VAR_4 = VAR_1->streams[VAR_3];
        MOVStreamContext *VAR_5 = VAR_4->priv_data;

        if (VAR_4->codecpar->codec_type == VAR_0 &&
            VAR_5->timecode_track == VAR_2)
            return 1;
    }
    return 0;
}
