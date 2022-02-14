
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ format; int height; int width; } ;
struct TYPE_12__ {int pb; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int size; scalar_t__ stream_index; scalar_t__* data; } ;
struct TYPE_10__ {scalar_t__ count; } ;
struct TYPE_9__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ FrmContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    FrmContext *VAR_5 = VAR_3->priv_data;
    AVCodecParameters *VAR_6 = VAR_3->streams[0]->codecpar;
    int VAR_7, VAR_8;

    if (VAR_5->count)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_6->format, VAR_6->width, VAR_6->height, 1);
    if (VAR_7 < 0)
        return VAR_1;

    VAR_8 = FUNC_0(VAR_3->pb, VAR_4, VAR_7);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_6->format == VAR_2) {
        int VAR_9;
        for (VAR_9 = 3; VAR_9 + 1 <= VAR_4->size; VAR_9 += 4)
            VAR_4->data[VAR_9] = 0xFF - VAR_4->data[VAR_9];
    }

    VAR_4->stream_index = 0;
    VAR_5->count++;

    return 0;
}
