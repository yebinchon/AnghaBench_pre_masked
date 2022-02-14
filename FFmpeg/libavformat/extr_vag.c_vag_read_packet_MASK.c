
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int block_align; } ;
struct TYPE_6__ {int pb; TYPE_1__** streams; } ;
struct TYPE_5__ {TYPE_3__* codecpar; } ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVCodecParameters *VAR_2 = VAR_0->streams[0]->codecpar;

    return FUNC_0(VAR_0->pb, VAR_1, VAR_2->block_align);
}
