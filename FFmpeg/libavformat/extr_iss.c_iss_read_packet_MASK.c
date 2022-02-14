
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__** streams; int pb; TYPE_3__* priv_data; } ;
struct TYPE_12__ {int pts; scalar_t__ stream_index; } ;
struct TYPE_11__ {int packet_size; int sample_start_pos; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int channels; } ;
typedef TYPE_3__ IssDemuxContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    IssDemuxContext *VAR_3 = VAR_1->priv_data;
    int VAR_4 = FUNC_1(VAR_1->pb, VAR_2, VAR_3->packet_size);

    if(VAR_4 != VAR_3->packet_size)
        return FUNC_0(VAR_0);

    VAR_2->stream_index = 0;
    VAR_2->pts = FUNC_2(VAR_1->pb) - VAR_3->sample_start_pos;
    if(VAR_1->streams[0]->codecpar->channels > 0)
        VAR_2->pts /= VAR_1->streams[0]->codecpar->channels*2;
    return 0;
}
