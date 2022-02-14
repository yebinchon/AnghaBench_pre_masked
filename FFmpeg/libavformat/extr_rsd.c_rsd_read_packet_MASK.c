
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {scalar_t__ codec_id; int block_align; scalar_t__ codec_tag; int channels; } ;
struct TYPE_11__ {int pb; TYPE_1__** streams; } ;
struct TYPE_10__ {int* data; int size; int duration; scalar_t__ stream_index; int pos; } ;
struct TYPE_9__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AVCodecParameters *VAR_7 = VAR_5->streams[0]->codecpar;
    int VAR_8, VAR_9 = 1024;
    int64_t VAR_10;

    if (FUNC_3(VAR_5->pb))
        return VAR_0;

    VAR_10 = FUNC_5(VAR_5->pb);
    if (VAR_7->codec_id == VAR_1 ||
        VAR_7->codec_id == VAR_3 ||
        VAR_7->codec_id == VAR_2 ||
        VAR_7->codec_id == VAR_4) {
        VAR_8 = FUNC_1(VAR_5->pb, VAR_6, VAR_7->block_align);
    } else if (VAR_7->codec_tag == FUNC_0('W','A','D','P') &&
               VAR_7->channels > 1) {
        int VAR_11, VAR_12;

        VAR_8 = FUNC_2(VAR_6, VAR_7->block_align);
        if (VAR_8 < 0)
            return VAR_8;
        for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
            for (VAR_12 = 0; VAR_12 < VAR_7->channels; VAR_12++) {
                VAR_6->data[VAR_12 * 8 + VAR_11 * 2 + 0] = FUNC_4(VAR_5->pb);
                VAR_6->data[VAR_12 * 8 + VAR_11 * 2 + 1] = FUNC_4(VAR_5->pb);
            }
        }
        VAR_8 = 0;
    } else {
        VAR_8 = FUNC_1(VAR_5->pb, VAR_6, VAR_9);
    }

    if (VAR_7->codec_id == VAR_4 && VAR_6->size >= 1)
        VAR_6->duration = (VAR_6->data[0] >> 2) * 512;

    VAR_6->pos = VAR_10;
    VAR_6->stream_index = 0;

    return VAR_8;
}
