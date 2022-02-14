
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__** streams; } ;
struct TYPE_13__ {int stream_index; int side_data_elems; int side_data; int buf; } ;
struct TYPE_12__ {int time_base; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

int FUNC_3(AVFormatContext *VAR_0, int VAR_1, AVPacket *VAR_2,
                     AVFormatContext *VAR_3, int VAR_4)
{
    AVPacket VAR_5;
    int VAR_6;

    VAR_5 = *VAR_2;
    VAR_5.stream_index = VAR_1;

    FUNC_1(&VAR_5,
                         VAR_3->streams[VAR_2->stream_index]->time_base,
                         VAR_0->streams[VAR_1]->time_base);

    if (VAR_4) VAR_6 = FUNC_0(VAR_0, &VAR_5);
    else VAR_6 = FUNC_2(VAR_0, &VAR_5);
    VAR_2->buf = VAR_5.buf;
    VAR_2->side_data = VAR_5.side_data;
    VAR_2->side_data_elems = VAR_5.side_data_elems;
    return VAR_6;
}
