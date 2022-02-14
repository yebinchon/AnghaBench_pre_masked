
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {scalar_t__ codec_id; int channels; int block_align; } ;
struct TYPE_11__ {int pb; TYPE_1__** streams; } ;
struct TYPE_10__ {int* data; int size; int duration; scalar_t__ stream_index; int pos; } ;
struct TYPE_9__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AVCodecParameters *VAR_5 = VAR_3->streams[0]->codecpar;
    int64_t VAR_6;
    int VAR_7;

    if (FUNC_2(VAR_3->pb))
        return VAR_0;

    VAR_6 = FUNC_4(VAR_3->pb);
    if (VAR_5->codec_id == VAR_1 &&
               VAR_5->channels > 1) {
        int VAR_8, VAR_9;

        VAR_7 = FUNC_1(VAR_4, VAR_5->block_align);
        if (VAR_7 < 0)
            return VAR_7;
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            for (VAR_9 = 0; VAR_9 < VAR_5->channels; VAR_9++) {
                VAR_4->data[VAR_9 * 8 + VAR_8 * 2 + 0] = FUNC_3(VAR_3->pb);
                VAR_4->data[VAR_9 * 8 + VAR_8 * 2 + 1] = FUNC_3(VAR_3->pb);
            }
        }
        VAR_7 = 0;
    } else {
        VAR_7 = FUNC_0(VAR_3->pb, VAR_4, VAR_5->block_align);
    }

    if (VAR_5->codec_id == VAR_2 && VAR_4->size >= 1)
        VAR_4->duration = (VAR_4->data[0] >> 2) * 512;

    VAR_4->pos = VAR_6;
    VAR_4->stream_index = 0;

    return VAR_7;
}
