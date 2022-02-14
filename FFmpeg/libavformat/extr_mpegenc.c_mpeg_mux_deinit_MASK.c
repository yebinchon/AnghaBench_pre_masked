
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_6__ {int fifo; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ StreamInfo ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->nb_streams; VAR_1++) {
        StreamInfo *VAR_2 = VAR_0->streams[VAR_1]->priv_data;
        if (!VAR_2)
            continue;
        FUNC_0(&VAR_2->fifo);
    }
}
