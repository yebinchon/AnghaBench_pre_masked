
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_streams; TYPE_2__** streams; TYPE_1__* internal; } ;
struct TYPE_6__ {int inject_global_side_data; } ;
struct TYPE_5__ {int inject_global_side_data; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;



void FUNC_0(AVFormatContext *VAR_0)
{
    int VAR_1;
    VAR_0->internal->inject_global_side_data = 1;
    for (VAR_1 = 0; VAR_1 < VAR_0->nb_streams; VAR_1++) {
        AVStream *VAR_2 = VAR_0->streams[VAR_1];
        VAR_2->inject_global_side_data = 1;
    }
}
