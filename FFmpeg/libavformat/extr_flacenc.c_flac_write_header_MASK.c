
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AVFormatContext {int pb; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int extradata_size; int extradata; } ;
struct TYPE_5__ {size_t audio_stream_idx; int waiting_pics; int write_header; } ;
struct TYPE_4__ {TYPE_3__* codecpar; } ;
typedef TYPE_2__ FlacMuxerContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct AVFormatContext*) ;

__attribute__((used)) static int FUNC_2(struct AVFormatContext *VAR_0)
{
    FlacMuxerContext *VAR_1 = VAR_0->priv_data;
    AVCodecParameters *VAR_2 = VAR_0->streams[VAR_1->audio_stream_idx]->codecpar;
    int VAR_3;

    if (!VAR_1->write_header)
        return 0;

    VAR_3 = FUNC_0(VAR_0->pb, VAR_2->extradata,
                               VAR_2->extradata_size, 0);
    if (VAR_3 < 0)
        return VAR_3;

    if (!VAR_1->waiting_pics)
        VAR_3 = FUNC_1(VAR_0);

    return VAR_3;
}
