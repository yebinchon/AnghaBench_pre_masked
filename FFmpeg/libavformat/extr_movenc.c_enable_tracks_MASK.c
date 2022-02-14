
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int disposition; TYPE_1__* codecpar; } ;
struct TYPE_10__ {int per_stream_grouping; TYPE_2__* tracks; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int codec_type; } ;
typedef TYPE_3__ MOVMuxContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_4)
{
    MOVMuxContext *VAR_5 = VAR_4->priv_data;
    int VAR_6;
    int VAR_7[VAR_0];
    int VAR_8[VAR_0];

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_7[VAR_6] = 0;
        VAR_8[VAR_6] = -1;
    }

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_streams; VAR_6++) {
        AVStream *VAR_9 = VAR_4->streams[VAR_6];

        if (VAR_9->codecpar->codec_type <= VAR_1 ||
            VAR_9->codecpar->codec_type >= VAR_0 ||
            FUNC_0(VAR_9))
            continue;

        if (VAR_8[VAR_9->codecpar->codec_type] < 0)
            VAR_8[VAR_9->codecpar->codec_type] = VAR_6;
        if (VAR_9->disposition & VAR_2) {
            VAR_5->tracks[VAR_6].flags |= VAR_3;
            VAR_7[VAR_9->codecpar->codec_type]++;
        }
    }

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        switch (VAR_6) {
        case 128:
        case 130:
        case 129:
            if (VAR_7[VAR_6] > 1)
                VAR_5->per_stream_grouping = 1;
            if (!VAR_7[VAR_6] && VAR_8[VAR_6] >= 0)
                VAR_5->tracks[VAR_8[VAR_6]].flags |= VAR_3;
            break;
        }
    }
}
