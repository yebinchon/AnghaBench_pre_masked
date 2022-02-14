
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int packet_size; int pb; } ;
struct TYPE_6__ {int pts; int dts; int pos; scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_0(VAR_0->pb, VAR_1, VAR_0->packet_size);
    VAR_1->pts = VAR_1->dts = VAR_1->pos / VAR_0->packet_size;

    VAR_1->stream_index = 0;
    if (VAR_2 < 0)
        return VAR_2;
    return 0;
}
