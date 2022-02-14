
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_24__ {TYPE_4__* codecpar; } ;
struct TYPE_23__ {int current_pid; int pos47_full; scalar_t__ scan_all_pmts; int nb_prg; int raw_packet_size; TYPE_14__* stream; TYPE_3__* prg; TYPE_6__** pids; scalar_t__ auto_guess; } ;
struct TYPE_17__ {int (* pes_cb ) (TYPE_6__*,int const*,int,int,int) ;TYPE_5__* opaque; } ;
struct TYPE_18__ {TYPE_1__ pes_filter; } ;
struct TYPE_22__ {int last_cc; scalar_t__ type; int last_pcr; TYPE_2__ u; scalar_t__ discard; } ;
struct TYPE_21__ {int flags; } ;
struct TYPE_20__ {int codec_type; } ;
struct TYPE_19__ {int pmt_found; } ;
struct TYPE_16__ {int ctx_flags; int nb_streams; TYPE_8__** streams; int pb; } ;
typedef TYPE_5__ PESContext ;
typedef TYPE_6__ MpegTSFilter ;
typedef TYPE_7__ MpegTSContext ;
typedef TYPE_8__ AVStream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_7__*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_14__*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int) ;
 scalar_t__ FUNC_6 (int*,int*,int const*) ;
 int FUNC_7 (TYPE_6__*,int const*,int,int,int) ;
 int FUNC_8 (TYPE_7__*,TYPE_6__*,int const*,int,int) ;

__attribute__((used)) static int FUNC_9(MpegTSContext *VAR_8, const uint8_t *VAR_9)
{
    MpegTSFilter *VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_19, VAR_20;
    const uint8_t *VAR_21, *VAR_22;
    int64_t VAR_23;

    VAR_12 = FUNC_0(VAR_9 + 1) & 0x1fff;
    VAR_17 = VAR_9[1] & 0x40;
    VAR_10 = VAR_8->pids[VAR_12];
    if (VAR_8->auto_guess && !VAR_10 && VAR_17) {
        FUNC_1(VAR_8, VAR_12, -1);
        VAR_10 = VAR_8->pids[VAR_12];
    }
    if (!VAR_10)
        return 0;
    if (VAR_17)
        VAR_10->discard = FUNC_5(VAR_8, VAR_12);
    if (VAR_10->discard)
        return 0;
    VAR_8->current_pid = VAR_12;

    VAR_16 = (VAR_9[3] >> 4) & 3;
    if (VAR_16 == 0)
        return 0;
    VAR_19 = VAR_16 & 2;
    VAR_20 = VAR_16 & 1;
    VAR_18 = VAR_19 &&
                       VAR_9[4] != 0 &&
                       (VAR_9[5] & 0x80);


    VAR_13 = (VAR_9[3] & 0xf);
    VAR_14 = VAR_20 ? (VAR_10->last_cc + 1) & 0x0f : VAR_10->last_cc;
    VAR_15 = VAR_12 == 0x1FFF ||
            VAR_18 ||
            VAR_10->last_cc < 0 ||
            VAR_14 == VAR_13;

    VAR_10->last_cc = VAR_13;
    if (!VAR_15) {
        FUNC_3(VAR_8->stream, VAR_3,
               "Continuity check failed for pid %d expected %d got %d\n",
               VAR_12, VAR_14, VAR_13);
        if (VAR_10->type == VAR_5) {
            PESContext *VAR_24 = VAR_10->u.pes_filter.opaque;
            VAR_24->flags |= VAR_4;
        }
    }

    if (VAR_9[1] & 0x80) {
        FUNC_3(VAR_8->stream, VAR_3, "Packet had TEI flag set; marking as corrupt\n");
        if (VAR_10->type == VAR_5) {
            PESContext *VAR_25 = VAR_10->u.pes_filter.opaque;
            VAR_25->flags |= VAR_4;
        }
    }

    VAR_21 = VAR_9 + 4;
    if (VAR_19) {
        int64_t VAR_26;
        int VAR_27;
        if (FUNC_6(&VAR_26, &VAR_27, VAR_9) == 0)
            VAR_10->last_pcr = VAR_26 * 300 + VAR_27;

        VAR_21 += VAR_21[0] + 1;
    }

    VAR_22 = VAR_9 + VAR_7;
    if (VAR_21 >= VAR_22 || !VAR_20)
        return 0;

    VAR_23 = FUNC_4(VAR_8->stream->pb);
    if (VAR_23 >= 0) {
        FUNC_2(VAR_23 >= VAR_7);
        VAR_8->pos47_full = VAR_23 - VAR_7;
    }

    if (VAR_10->type == VAR_6) {
        if (VAR_17) {

            VAR_11 = *VAR_21++;
            if (VAR_11 > VAR_22 - VAR_21)
                return 0;
            if (VAR_11 && VAR_15) {

                FUNC_8(VAR_8, VAR_10,
                                   VAR_21, VAR_11, 0);

                if (!VAR_8->pids[VAR_12])
                    return 0;
            }
            VAR_21 += VAR_11;
            if (VAR_21 < VAR_22) {
                FUNC_8(VAR_8, VAR_10,
                                   VAR_21, VAR_22 - VAR_21, 1);
            }
        } else {
            if (VAR_15) {
                FUNC_8(VAR_8, VAR_10,
                                   VAR_21, VAR_22 - VAR_21, 0);
            }
        }



        if (VAR_8->stream->ctx_flags & VAR_0 && VAR_8->scan_all_pmts <= 0) {
            int VAR_28;
            for (VAR_28 = 0; VAR_28 < VAR_8->nb_prg; VAR_28++) {
                if (!VAR_8->prg[VAR_28].pmt_found)
                    break;
            }
            if (VAR_28 == VAR_8->nb_prg && VAR_8->nb_prg > 0) {
                int VAR_29 = 0;
                for (VAR_28 = 0; VAR_28 < VAR_8->stream->nb_streams; VAR_28++) {
                    AVStream *VAR_30 = VAR_8->stream->streams[VAR_28];
                    if (VAR_30->codecpar->codec_type >= 0)
                        VAR_29 |= 1<<VAR_30->codecpar->codec_type;
                }
                if ((VAR_29 & (1<<VAR_1) && VAR_29 & (1<<VAR_2)) || VAR_23 > 100000) {
                    FUNC_3(VAR_8->stream, VAR_3, "All programs have pmt, headers found\n");
                    VAR_8->stream->ctx_flags &= ~VAR_0;
                }
            }
        }

    } else {
        int VAR_31;

        if (VAR_10->type == VAR_5) {
            if ((VAR_31 = VAR_10->u.pes_filter.pes_cb(VAR_10, VAR_21, VAR_22 - VAR_21, VAR_17,
                                                VAR_23 - VAR_8->raw_packet_size)) < 0)
                return VAR_31;
        }
    }

    return 0;
}
