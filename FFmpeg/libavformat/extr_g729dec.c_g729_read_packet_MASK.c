
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int pb; TYPE_2__** streams; } ;
struct TYPE_10__ {int dts; int pts; int pos; int duration; scalar_t__ stream_index; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int block_align; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVStream *VAR_2 = VAR_0->streams[0];
    int VAR_3 = FUNC_0(VAR_0->pb, VAR_1, VAR_2->codecpar->block_align);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_1->stream_index = 0;
    VAR_1->dts = VAR_1->pts = VAR_1->pos / VAR_2->codecpar->block_align;
    VAR_1->duration = 1;

    return 0;
}
