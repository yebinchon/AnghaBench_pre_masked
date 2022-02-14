
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


typedef int int64_t ;
struct TYPE_17__ {TYPE_4__** streams; TYPE_2__* priv_data; } ;
struct TYPE_16__ {size_t stream_index; scalar_t__ dts; int flags; } ;
struct TYPE_15__ {scalar_t__ first_dts; int time_base; TYPE_1__* codecpar; } ;
struct TYPE_14__ {int ctx; scalar_t__ packets_written; } ;
struct TYPE_13__ {int nb_fragments; int has_video; scalar_t__ min_frag_duration; TYPE_3__* streams; } ;
struct TYPE_12__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ SmoothStreamingContext ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int,int ) ;
 int FUNC_1 (int ,int ,TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    SmoothStreamingContext *VAR_6 = VAR_4->priv_data;
    AVStream *VAR_7 = VAR_4->streams[VAR_5->stream_index];
    OutputStream *VAR_8 = &VAR_6->streams[VAR_5->stream_index];
    int64_t VAR_9 = (VAR_6->nb_fragments + 1) * (int64_t) VAR_6->min_frag_duration;
    int VAR_10;

    if (VAR_7->first_dts == VAR_1)
        VAR_7->first_dts = VAR_5->dts;

    if ((!VAR_6->has_video || VAR_7->codecpar->codec_type == VAR_0) &&
        FUNC_0(VAR_5->dts - VAR_7->first_dts, VAR_7->time_base,
                      VAR_9, VAR_3) >= 0 &&
        VAR_5->flags & VAR_2 && VAR_8->packets_written) {

        if ((VAR_10 = FUNC_2(VAR_4, 0)) < 0)
            return VAR_10;
        VAR_6->nb_fragments++;
    }

    VAR_8->packets_written++;
    return FUNC_1(VAR_8->ctx, 0, VAR_5, VAR_4, 0);
}
