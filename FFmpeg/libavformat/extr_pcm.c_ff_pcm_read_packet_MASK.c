
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int block_align; int sample_rate; } ;
struct TYPE_10__ {int pb; TYPE_1__** streams; } ;
struct TYPE_9__ {scalar_t__ stream_index; int flags; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_2__*,int) ;

int FUNC_4(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AVCodecParameters *VAR_5 = VAR_3->streams[0]->codecpar;
    int VAR_6, VAR_7;

    if (VAR_5->block_align <= 0)
        return FUNC_0(VAR_1);





    VAR_7 = FUNC_1(VAR_5->sample_rate/25, 1);
    VAR_7 = FUNC_2(VAR_7, VAR_2) * VAR_5->block_align;

    VAR_6 = FUNC_3(VAR_3->pb, VAR_4, VAR_7);

    VAR_4->flags &= ~VAR_0;
    VAR_4->stream_index = 0;

    return VAR_6;
}
