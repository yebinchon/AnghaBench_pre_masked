
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int duration; int stream_index; } ;
struct TYPE_11__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ sent_bytes; scalar_t__ out_size; } ;
struct TYPE_9__ {int channels; } ;
typedef TYPE_2__ MaxisXADemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*,unsigned int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1,
                          AVPacket *VAR_2)
{
    MaxisXADemuxContext *VAR_3 = VAR_1->priv_data;
    AVStream *VAR_4 = VAR_1->streams[0];
    AVIOContext *VAR_5 = VAR_1->pb;
    unsigned int VAR_6;
    int VAR_7;

    if (VAR_3->sent_bytes >= VAR_3->out_size)
        return VAR_0;

    VAR_6 = 15*VAR_4->codecpar->channels;

    VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_6);
    if(VAR_7 < 0)
        return VAR_7;

    VAR_2->stream_index = VAR_4->index;
    VAR_3->sent_bytes += VAR_6;
    VAR_2->duration = 28;

    return VAR_7;
}
