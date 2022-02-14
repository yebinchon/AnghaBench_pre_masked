
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_8__ {scalar_t__ is_dvd; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ StreamInfo ;
typedef TYPE_3__ MpegMuxContext ;
typedef TYPE_4__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    StreamInfo *VAR_4;
    MpegMuxContext *VAR_5 = VAR_0->priv_data;

    if (VAR_5->is_dvd)
        return 18;

    VAR_1 = 12;
    VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_streams; VAR_2++) {
        VAR_4 = VAR_0->streams[VAR_2]->priv_data;
        if (VAR_4->id < 0xc0) {
            if (VAR_3)
                continue;
            VAR_3 = 1;
        }
        VAR_1 += 3;
    }
    return VAR_1;
}
