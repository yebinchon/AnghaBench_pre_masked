
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
struct TYPE_7__ {int fifo; } ;
struct TYPE_6__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AudioInterleaveContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(AVFormatContext *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
        AVStream *VAR_3 = VAR_1->streams[VAR_2];
        AudioInterleaveContext *VAR_4 = VAR_3->priv_data;

        if (VAR_3->codecpar->codec_type == VAR_0)
            FUNC_0(&VAR_4->fifo);
    }
}
