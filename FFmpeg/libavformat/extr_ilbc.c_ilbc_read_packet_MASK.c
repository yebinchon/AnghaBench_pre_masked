
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int block_align; } ;
struct TYPE_11__ {int pb; TYPE_1__** streams; } ;
struct TYPE_10__ {int duration; int data; int pos; scalar_t__ stream_index; } ;
struct TYPE_9__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1,
                          AVPacket *VAR_2)
{
    AVCodecParameters *VAR_3 = VAR_1->streams[0]->codecpar;
    int VAR_4;

    if ((VAR_4 = FUNC_1(VAR_2, VAR_3->block_align)) < 0)
        return VAR_4;

    VAR_2->stream_index = 0;
    VAR_2->pos = FUNC_4(VAR_1->pb);
    VAR_2->duration = VAR_3->block_align == 38 ? 160 : 240;
    if ((VAR_4 = FUNC_3(VAR_1->pb, VAR_2->data, VAR_3->block_align)) != VAR_3->block_align) {
        FUNC_2(VAR_2);
        return VAR_4 < 0 ? VAR_4 : FUNC_0(VAR_0);
    }

    return 0;
}
