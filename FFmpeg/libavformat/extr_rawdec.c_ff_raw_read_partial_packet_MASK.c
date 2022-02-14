
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int data; scalar_t__ stream_index; int pos; } ;
struct TYPE_9__ {int raw_packet_size; } ;
typedef TYPE_1__ FFRawDemuxerContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    FFRawDemuxerContext *VAR_3 = VAR_1->priv_data;
    int VAR_4, VAR_5;

    VAR_5 = VAR_3->raw_packet_size;

    if (FUNC_1(VAR_2, VAR_5) < 0)
        return FUNC_0(VAR_0);

    VAR_2->pos= FUNC_5(VAR_1->pb);
    VAR_2->stream_index = 0;
    VAR_4 = FUNC_4(VAR_1->pb, VAR_2->data, VAR_5);
    if (VAR_4 < 0) {
        FUNC_2(VAR_2);
        return VAR_4;
    }
    FUNC_3(VAR_2, VAR_4);
    return VAR_4;
}
