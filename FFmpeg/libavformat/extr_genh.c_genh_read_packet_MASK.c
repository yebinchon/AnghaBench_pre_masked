
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ codec_id; int channels; int block_align; } ;
struct TYPE_13__ {int pb; TYPE_2__* priv_data; TYPE_1__** streams; } ;
struct TYPE_12__ {scalar_t__ stream_index; void** data; } ;
struct TYPE_11__ {int dsp_int_type; int interleave_size; } ;
struct TYPE_10__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ GENHDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AVCodecParameters *VAR_5 = VAR_3->streams[0]->codecpar;
    GENHDemuxContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;

    if (VAR_6->dsp_int_type == 1 && VAR_5->codec_id == VAR_1 &&
        VAR_5->channels > 1) {
        int VAR_8, VAR_9;

        if (FUNC_2(VAR_3->pb))
            return VAR_0;
        VAR_7 = FUNC_1(VAR_4, 8 * VAR_5->channels);
        if (VAR_7 < 0)
            return VAR_7;
        for (VAR_8 = 0; VAR_8 < 8 / VAR_6->interleave_size; VAR_8++) {
            for (VAR_9 = 0; VAR_9 < VAR_5->channels; VAR_9++) {
                VAR_4->data[VAR_9 * 8 + VAR_8*VAR_6->interleave_size+0] = FUNC_3(VAR_3->pb);
                VAR_4->data[VAR_9 * 8 + VAR_8*VAR_6->interleave_size+1] = FUNC_3(VAR_3->pb);
            }
        }
        VAR_7 = 0;
    } else if (VAR_5->codec_id == VAR_2) {
        VAR_7 = FUNC_0(VAR_3->pb, VAR_4, VAR_5->block_align * 1024);

    } else {
        VAR_7 = FUNC_0(VAR_3->pb, VAR_4, VAR_5->block_align ? VAR_5->block_align : 1024 * VAR_5->channels);
    }

    VAR_4->stream_index = 0;
    return VAR_7;
}
