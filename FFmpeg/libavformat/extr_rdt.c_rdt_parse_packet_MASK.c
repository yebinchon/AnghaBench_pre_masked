
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_18__ {int pb; } ;
struct TYPE_17__ {size_t stream_index; int pts; } ;
struct TYPE_16__ {size_t index; TYPE_1__* codecpar; } ;
struct TYPE_15__ {scalar_t__ audio_pkt_cnt; TYPE_8__* rmctx; int * rmst; int buffer; } ;
struct TYPE_14__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ PayloadContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_8__*,int *,TYPE_3__*,int ,int,TYPE_4__*,int*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int ,TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_5 (int *,int *,int,int ,int *,int *,int *,int *) ;
 int FUNC_6 (int ,int const*,int) ;

__attribute__((used)) static int
FUNC_7 (AVFormatContext *VAR_2, PayloadContext *VAR_3, AVStream *VAR_4,
                  AVPacket *VAR_5, uint32_t *VAR_6,
                  const uint8_t *VAR_7, int VAR_8, uint16_t VAR_9, int VAR_10)
{
    int VAR_11 = 1, VAR_12;
    AVIOContext VAR_13;

    if (VAR_3->audio_pkt_cnt == 0) {
        int VAR_14, VAR_15;

        FUNC_5(&VAR_13, (uint8_t *)VAR_7, VAR_8, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        VAR_15 = (VAR_10 & VAR_1) ? 2 : 0;
        VAR_12 = FUNC_3 (VAR_3->rmctx, &VAR_13, VAR_4, VAR_3->rmst[VAR_4->index], VAR_8, VAR_5,
                                  &VAR_11, VAR_15, *VAR_6);
        VAR_14 = FUNC_2(&VAR_13);
        if (VAR_12 < 0)
            return VAR_12;
        if (VAR_12 > 0) {
            if (VAR_4->codecpar->codec_id == VAR_0) {
                FUNC_6 (VAR_3->buffer, VAR_7 + VAR_14, VAR_8 - VAR_14);
                VAR_3->rmctx->pb = FUNC_0 (VAR_3->buffer, VAR_8 - VAR_14, 0,
                                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            }
            goto get_cache;
        }
    } else {
get_cache:
        VAR_3->audio_pkt_cnt =
            FUNC_4 (VAR_3->rmctx, VAR_3->rmctx->pb,
                                  VAR_4, VAR_3->rmst[VAR_4->index], VAR_5);
        if (VAR_3->audio_pkt_cnt == 0 &&
            VAR_4->codecpar->codec_id == VAR_0)
            FUNC_1(&VAR_3->rmctx->pb);
    }
    VAR_5->stream_index = VAR_4->index;
    VAR_5->pts = *VAR_6;

    return VAR_3->audio_pkt_cnt > 0;
}
