
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_16__ {int nb_streams; int channel_maps; } ;
struct TYPE_15__ {int frame_count; int frame_duration; } ;
struct TYPE_14__ {scalar_t__ extradata; } ;
struct TYPE_13__ {int duration; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int frame_start_found; int state; } ;
struct TYPE_12__ {int ts_framing; int extradata_parsed; TYPE_7__ pkt; TYPE_9__ ctx; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ OpusParseContext ;
typedef TYPE_3__ AVCodecParserContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_4 (TYPE_7__*,int const*,int,int) ;
 int* FUNC_5 (int const*,int*,int) ;

__attribute__((used)) static int FUNC_6(AVCodecParserContext *VAR_5, AVCodecContext *VAR_6,
                               const uint8_t *VAR_7, int VAR_8, int *VAR_9)
{
    OpusParseContext *VAR_10 = VAR_5->priv_data;
    ParseContext *VAR_11 = &VAR_10->pc;
    int VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;
    const uint8_t *VAR_16;
    uint32_t VAR_17;
    uint16_t VAR_18;
    *VAR_9 = 0;

    if (!VAR_8)
        return 0;

    VAR_13 = VAR_11->frame_start_found;
    VAR_17 = VAR_11->state;
    VAR_16 = VAR_7;


    if (!VAR_10->ts_framing && VAR_8 > 2) {
        VAR_18 = FUNC_0(VAR_7);
        if ((VAR_18 & VAR_4) == VAR_3)
            VAR_10->ts_framing = 1;
    }

    if (VAR_10->ts_framing && !VAR_13) {
        for (VAR_14 = 0; VAR_14 < VAR_8-2; VAR_14++) {
            VAR_17 = (VAR_17 << 8) | VAR_16[VAR_14];
            if ((VAR_17 & VAR_4) == VAR_3) {
                VAR_16 = FUNC_5(VAR_16, &VAR_15, VAR_8 - VAR_14);
                if (!VAR_16) {
                    FUNC_2(VAR_6, VAR_1, "Error parsing Ogg TS header.\n");
                    return VAR_0;
                }
                *VAR_9 = VAR_16 - VAR_7;
                VAR_13 = 1;
                break;
            }
        }
    }

    if (!VAR_10->ts_framing)
        VAR_15 = VAR_8;

    if (VAR_6->extradata && !VAR_10->extradata_parsed) {
        VAR_12 = FUNC_3(VAR_6, &VAR_10->ctx);
        if (VAR_12 < 0) {
            FUNC_2(VAR_6, VAR_1, "Error parsing Ogg extradata.\n");
            return VAR_0;
        }
        FUNC_1(&VAR_10->ctx.channel_maps);
        VAR_10->extradata_parsed = 1;
    }

    if (VAR_15 <= VAR_8 && (!VAR_10->ts_framing || VAR_13)) {
        VAR_12 = FUNC_4(&VAR_10->pkt, VAR_16, VAR_15, VAR_10->ctx.nb_streams > 1);
        if (VAR_12 < 0) {
            FUNC_2(VAR_6, VAR_1, "Error parsing Opus packet header.\n");
            VAR_11->frame_start_found = 0;
            return VAR_0;
        }

        VAR_5->duration = VAR_10->pkt.frame_count * VAR_10->pkt.frame_duration;
    }

    if (VAR_10->ts_framing) {
        if (VAR_13) {
            if (VAR_15 + *VAR_9 <= VAR_8) {
                VAR_11->frame_start_found = 0;
                VAR_11->state = -1;
                return VAR_15 + *VAR_9;
            }
        }

        VAR_11->frame_start_found = VAR_13;
        VAR_11->state = VAR_17;
        return VAR_2;
    }

    return VAR_8;
}
