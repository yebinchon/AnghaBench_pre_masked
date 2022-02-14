
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_2__ AVFormatContext ;



int FUNC_0(AVFormatContext *VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_streams; VAR_2++)
        if (VAR_0->streams[VAR_2]->id == VAR_1)
            return VAR_2;
    return -1;
}
