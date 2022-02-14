
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t nb_streams; TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ discard; } ;
struct TYPE_6__ {size_t curr_stream; } ;
typedef TYPE_1__ AviSynthContext ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFormatContext *VAR_1, AVStream **VAR_2,
                                 AVPacket *VAR_3, int *VAR_4)
{
    AviSynthContext *VAR_5 = VAR_1->priv_data;

    VAR_5->curr_stream++;
    VAR_5->curr_stream %= VAR_1->nb_streams;

    *VAR_2 = VAR_1->streams[VAR_5->curr_stream];
    if ((*VAR_2)->discard == VAR_0)
        *VAR_4 = 1;
    else
        *VAR_4 = 0;

    return;
}
