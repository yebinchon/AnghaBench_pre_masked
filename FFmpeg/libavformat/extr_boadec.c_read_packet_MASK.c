
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pb; TYPE_2__** streams; } ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int block_align; } ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVStream *VAR_2 = VAR_0->streams[0];

    return FUNC_0(VAR_0->pb, VAR_1, VAR_2->codecpar->block_align);
}
