
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_7__ {int nb_streams; TYPE_1__** asf_st; } ;
struct TYPE_6__ {int ** streams; TYPE_3__* priv_data; } ;
struct TYPE_5__ {scalar_t__ stream_index; size_t index; } ;
typedef int AVStream ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;



__attribute__((used)) static AVStream *FUNC_0(AVFormatContext *VAR_0, uint16_t VAR_1)
{
    AVStream *VAR_2 = ((void*)0);
    ASFContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_streams; VAR_4++) {
        if (VAR_3->asf_st[VAR_4]->stream_index == VAR_1) {
            VAR_2 = VAR_0->streams[VAR_3->asf_st[VAR_4]->index];
            break;
        }
    }

    return VAR_2;
}
