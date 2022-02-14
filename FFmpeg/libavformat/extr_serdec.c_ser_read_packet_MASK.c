
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int packet_size; TYPE_1__* internal; int pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int pts; int dts; int pos; scalar_t__ stream_index; } ;
struct TYPE_9__ {scalar_t__ end; } ;
struct TYPE_8__ {int data_offset; } ;
typedef TYPE_2__ SERDemuxerContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    SERDemuxerContext *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4;
    int VAR_5;

    VAR_4 = FUNC_1(VAR_1->pb);
    if (VAR_4 >= VAR_3->end)
        return VAR_0;

    VAR_5 = FUNC_0(VAR_1->pb, VAR_2, VAR_1->packet_size);
    VAR_2->pts = VAR_2->dts = (VAR_2->pos - VAR_1->internal->data_offset) / VAR_1->packet_size;

    VAR_2->stream_index = 0;
    if (VAR_5 < 0)
        return VAR_5;
    return 0;
}
