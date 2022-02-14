
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_17__ {scalar_t__ bits_per_coded_sample; scalar_t__ channels; int codec_id; } ;
struct TYPE_16__ {size_t stream_index; scalar_t__ pts; scalar_t__ size; } ;
struct TYPE_15__ {int time_base; TYPE_2__* priv_data; } ;
struct TYPE_14__ {TYPE_1__* fc; } ;
struct TYPE_13__ {scalar_t__ sample_count; int edit_rate; } ;
struct TYPE_12__ {TYPE_4__** streams; } ;
typedef TYPE_2__ MXFTrack ;
typedef TYPE_3__ MXFContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVCodecParameters ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(MXFContext *VAR_0, AVCodecParameters *VAR_1,
                             AVPacket *VAR_2)
{
    AVStream *VAR_3 = VAR_0->fc->streams[VAR_2->stream_index];
    MXFTrack *VAR_4 = VAR_3->priv_data;
    int64_t VAR_5 = VAR_1->bits_per_coded_sample;

    if (!VAR_5)
        VAR_5 = FUNC_0(VAR_1->codec_id);

    VAR_2->pts = VAR_4->sample_count;

    if ( VAR_1->channels <= 0
        || VAR_5 <= 0
        || VAR_1->channels * (int64_t)VAR_5 < 8)
        VAR_4->sample_count = FUNC_3(VAR_0, VAR_3, FUNC_2(VAR_4->sample_count, VAR_3->time_base, FUNC_1(VAR_4->edit_rate)) + 1);
    else
        VAR_4->sample_count += VAR_2->size / (VAR_1->channels * (int64_t)VAR_5 / 8);

    return 0;
}
