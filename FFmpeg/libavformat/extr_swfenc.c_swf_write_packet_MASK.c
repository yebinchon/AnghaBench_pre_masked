
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ codec_type; } ;
struct TYPE_13__ {TYPE_1__** streams; } ;
struct TYPE_12__ {size_t stream_index; int size; int data; } ;
struct TYPE_11__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    AVCodecParameters *VAR_3 = VAR_1->streams[VAR_2->stream_index]->codecpar;
    if (VAR_3->codec_type == VAR_0)
        return FUNC_0(VAR_1, VAR_3, VAR_2->data, VAR_2->size);
    else
        return FUNC_1(VAR_1, VAR_3, VAR_2->data, VAR_2->size);
}
