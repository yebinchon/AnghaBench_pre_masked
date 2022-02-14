
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct MuxChain {TYPE_7__* rtp_ctx; TYPE_7__* mpegts_ctx; } ;
struct TYPE_14__ {TYPE_2__** streams; int * pb; } ;
struct TYPE_13__ {TYPE_1__** streams; struct MuxChain* priv_data; } ;
struct TYPE_12__ {int size; size_t stream_index; scalar_t__ pts; scalar_t__ dts; int * data; } ;
struct TYPE_11__ {int time_base; } ;
struct TYPE_10__ {int time_base; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int **) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    struct MuxChain *VAR_3 = VAR_1->priv_data;
    int VAR_4 = 0, VAR_5;
    uint8_t *VAR_6;
    AVPacket VAR_7;

    if (!VAR_3->mpegts_ctx->pb) {
        if ((VAR_4 = FUNC_5(&VAR_3->mpegts_ctx->pb)) < 0)
            return VAR_4;
    }
    if ((VAR_4 = FUNC_3(VAR_3->mpegts_ctx, VAR_2)) < 0)
        return VAR_4;
    VAR_5 = FUNC_4(VAR_3->mpegts_ctx->pb, &VAR_6);
    VAR_3->mpegts_ctx->pb = ((void*)0);
    if (VAR_5 == 0) {
        FUNC_0(VAR_6);
        return 0;
    }
    FUNC_1(&VAR_7);
    VAR_7.data = VAR_6;
    VAR_7.size = VAR_5;
    VAR_7.stream_index = 0;
    if (VAR_2->pts != VAR_0)
        VAR_7.pts = FUNC_2(VAR_2->pts,
                                     VAR_1->streams[VAR_2->stream_index]->time_base,
                                     VAR_3->rtp_ctx->streams[0]->time_base);
    if (VAR_2->dts != VAR_0)
        VAR_7.dts = FUNC_2(VAR_2->dts,
                                     VAR_1->streams[VAR_2->stream_index]->time_base,
                                     VAR_3->rtp_ctx->streams[0]->time_base);
    VAR_4 = FUNC_3(VAR_3->rtp_ctx, &VAR_7);
    FUNC_0(VAR_6);

    return VAR_4;
}
