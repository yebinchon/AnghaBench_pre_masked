
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_31__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_30__ {int pos; scalar_t__ eof_reached; } ;
struct TYPE_29__ {size_t stream_index; } ;
struct TYPE_28__ {int buf; TYPE_6__* pktbuf; TYPE_6__ pb; } ;
struct TYPE_27__ {int asf_pb_pos; TYPE_11__* asf_ctx; } ;
struct TYPE_26__ {scalar_t__ id; } ;
struct TYPE_25__ {scalar_t__ id; } ;
struct TYPE_24__ {TYPE_2__** streams; TYPE_6__* pb; } ;
typedef TYPE_3__ RTSPState ;
typedef TYPE_4__ PayloadContext ;
typedef int AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVIOContext ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (TYPE_6__**) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,int) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,int const*,int) ;
 int FUNC_12 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_6__**) ;
 int FUNC_14 (TYPE_6__*,int *,int,int ,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_6__*,int ,int) ;
 int FUNC_16 (int ,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_2, PayloadContext *VAR_3,
                               AVStream *VAR_4, AVPacket *VAR_5,
                               uint32_t *VAR_6,
                               const uint8_t *VAR_7, int VAR_8, uint16_t VAR_9,
                               int VAR_10)
{
    AVIOContext *VAR_11 = &VAR_3->pb;
    int VAR_12, VAR_13, VAR_14;
    RTSPState *VAR_15 = VAR_2->priv_data;

    if (!VAR_15->asf_ctx)
        return -1;

    if (VAR_8 > 0) {
        int VAR_16, VAR_17 = 0;

        if (VAR_8 < 4)
            return -1;

        FUNC_2(&VAR_3->buf);

        FUNC_14(VAR_11, (uint8_t *)VAR_7, VAR_8, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

        while (FUNC_10(VAR_11) + 4 < VAR_8) {
            int VAR_18 = FUNC_10(VAR_11);

            VAR_13 = FUNC_7(VAR_11);
            VAR_14 = FUNC_8(VAR_11);
            if (VAR_13 & 0x20)
                FUNC_9(VAR_11, 4);
            if (VAR_13 & 0x10)
                FUNC_9(VAR_11, 4);
            if (VAR_13 & 0x8)
                FUNC_9(VAR_11, 4);
            VAR_16 = FUNC_10(VAR_11);

            if (!(VAR_13 & 0x40)) {






                if (VAR_3->pktbuf && VAR_14 != FUNC_10(VAR_3->pktbuf)) {
                    FUNC_13(&VAR_3->pktbuf);
                }
                if (!VAR_14 && !VAR_3->pktbuf &&
                    (VAR_12 = FUNC_6(&VAR_3->pktbuf)) < 0)
                    return VAR_12;
                if (!VAR_3->pktbuf)
                    return FUNC_0(VAR_0);

                FUNC_11(VAR_3->pktbuf, VAR_7 + VAR_16, VAR_8 - VAR_16);
                FUNC_9(VAR_11, VAR_8 - VAR_16);
                if (!(VAR_10 & VAR_1))
                    return -1;
                VAR_17 = FUNC_5(VAR_3->pktbuf, &VAR_3->buf);
                VAR_3->pktbuf = ((void*)0);
            } else {
                int VAR_19 = VAR_18 + VAR_14 - VAR_16;
                int VAR_20 = VAR_17;
                VAR_17 += VAR_19;
                if (FUNC_1(VAR_19, VAR_8 - VAR_16) < 0)
                    return -1;
                if ((VAR_12 = FUNC_4(&VAR_3->buf, VAR_17)) < 0)
                    return VAR_12;
                FUNC_16(VAR_3->buf + VAR_20, VAR_7 + VAR_16,
                       FUNC_1(VAR_19, VAR_8 - VAR_16));
                FUNC_9(VAR_11, VAR_19);
            }
        }

        FUNC_15(VAR_11, VAR_3->buf, VAR_17);
        VAR_11->pos += VAR_15->asf_pb_pos;
        VAR_11->eof_reached = 0;
        VAR_15->asf_ctx->pb = VAR_11;
    }

    for (;;) {
        int VAR_21;

        VAR_12 = FUNC_12(VAR_15->asf_ctx, VAR_5);
        VAR_15->asf_pb_pos = FUNC_10(VAR_11);
        if (VAR_12 != 0)
            break;
        for (VAR_21 = 0; VAR_21 < VAR_2->nb_streams; VAR_21++) {
            if (VAR_2->streams[VAR_21]->id == VAR_15->asf_ctx->streams[VAR_5->stream_index]->id) {
                VAR_5->stream_index = VAR_21;
                return 1;
            }
        }
        FUNC_3(VAR_5);
    }

    return VAR_12 == 1 ? -1 : VAR_12;
}
