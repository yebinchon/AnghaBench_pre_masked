
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int block_align; } ;
struct TYPE_10__ {int pb; TYPE_1__** streams; } ;
struct TYPE_9__ {scalar_t__ stream_index; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVCodecParameters *VAR_2 = VAR_0->streams[0]->codecpar;
    int VAR_3;

    VAR_3 = FUNC_0(VAR_0->pb, VAR_1, VAR_2->block_align);
    VAR_1->stream_index = 0;
    return VAR_3;
}
