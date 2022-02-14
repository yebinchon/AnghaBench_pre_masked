
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__** streams; } ;
struct TYPE_10__ {size_t stream_index; scalar_t__ dts; } ;
struct TYPE_9__ {scalar_t__ order; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ MXFStreamContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0, const AVPacket *VAR_1,
                                                      const AVPacket *VAR_2)
{
    MXFStreamContext *VAR_3 = VAR_0->streams[VAR_2 ->stream_index]->priv_data;
    MXFStreamContext *VAR_4 = VAR_0->streams[VAR_1->stream_index]->priv_data;

    return VAR_1->dts > VAR_2->dts ||
        (VAR_1->dts == VAR_2->dts && VAR_3->order < VAR_4->order);
}
