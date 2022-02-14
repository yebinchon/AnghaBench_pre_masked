
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_34__ {int tg_end; } ;
struct TYPE_25__ {int tile_cols; int tile_rows; int show_frame; scalar_t__ show_existing_frame; } ;
struct TYPE_27__ {TYPE_10__ header; } ;
struct TYPE_29__ {TYPE_8__ tile_group; TYPE_10__ frame_header; TYPE_1__ frame; } ;
struct TYPE_28__ {int obu_type; } ;
struct TYPE_35__ {TYPE_3__ obu; TYPE_2__ header; } ;
struct TYPE_33__ {TYPE_11__* priv_data; } ;
struct TYPE_32__ {int size; int pts; int * data; } ;
struct TYPE_31__ {int nb_units; TYPE_4__* units; } ;
struct TYPE_30__ {scalar_t__ type; scalar_t__ data; TYPE_9__* content; scalar_t__ data_size; } ;
struct TYPE_26__ {scalar_t__ cur_frame; int cur_frame_idx; int last_frame_idx; int nb_frames; int cbc; TYPE_6__* buffer_pkt; TYPE_5__ temporal_unit; } ;
typedef TYPE_4__ CodedBitstreamUnit ;
typedef TYPE_5__ CodedBitstreamFragment ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVBSFContext ;
typedef TYPE_8__ AV1RawTileGroup ;
typedef TYPE_9__ AV1RawOBU ;
typedef TYPE_10__ AV1RawFrameHeader ;
typedef TYPE_11__ AV1FSplitContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int ,char*) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 (int ,TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_7, AVPacket *VAR_8)
{
    AV1FSplitContext *VAR_9 = VAR_7->priv_data;
    CodedBitstreamFragment *VAR_10 = &VAR_9->temporal_unit;
    int VAR_11, VAR_12;
    int VAR_13 = !!VAR_9->buffer_pkt->data;

    if (!VAR_9->buffer_pkt->data) {
        int VAR_14 = 0;

        VAR_12 = FUNC_5(VAR_7, VAR_9->buffer_pkt);
        if (VAR_12 < 0)
            return VAR_12;

        VAR_12 = FUNC_7(VAR_9->cbc, VAR_10, VAR_9->buffer_pkt);
        if (VAR_12 < 0) {
            FUNC_1(VAR_7, VAR_5, "Failed to parse temporal unit.\n");
            goto passthrough;
        }

        for (VAR_11 = 0; VAR_11 < VAR_10->nb_units; VAR_11++) {
            CodedBitstreamUnit *VAR_15 = &VAR_10->units[VAR_11];

            if (VAR_15->type == VAR_0 ||
                VAR_15->type == VAR_1)
                VAR_14++;
            else if (VAR_15->type == VAR_3) {
                FUNC_1(VAR_7, VAR_4, "Large scale tiles are unsupported.\n");
                goto passthrough;
            }
        }
        if (VAR_14 > 1) {
            VAR_9->cur_frame = 0;
            VAR_9->cur_frame_idx = VAR_9->last_frame_idx = 0;
            VAR_9->nb_frames = VAR_14;
            VAR_13 = 1;
        }
    }

    if (VAR_13) {
        AV1RawFrameHeader *VAR_16 = ((void*)0);
        int VAR_17 = -1, VAR_18 = 0;

        for (VAR_11 = VAR_9->cur_frame_idx; VAR_11 < VAR_10->nb_units; VAR_11++) {
            CodedBitstreamUnit *VAR_19 = &VAR_10->units[VAR_11];

            VAR_18 += VAR_19->data_size;
            if (VAR_19->type == VAR_0) {
                AV1RawOBU *VAR_20 = VAR_19->content;

                if (VAR_16) {
                    FUNC_1(VAR_7, VAR_5, "Frame OBU found when Tile data for a "
                                                "previous frame was expected.\n");
                    goto passthrough;
                }

                VAR_16 = &VAR_20->obu.frame.header;
                VAR_17 = VAR_20->header.obu_type;
                VAR_9->last_frame_idx = VAR_9->cur_frame_idx;
                VAR_9->cur_frame_idx = VAR_11 + 1;
                VAR_9->cur_frame++;



                if (VAR_9->cur_frame < VAR_9->nb_frames)
                    break;
            } else if (VAR_19->type == VAR_1) {
                AV1RawOBU *VAR_21 = VAR_19->content;

                if (VAR_16) {
                    FUNC_1(VAR_7, VAR_5, "Frame Header OBU found when Tile data for a "
                                                "previous frame was expected.\n");
                    goto passthrough;
                }

                VAR_16 = &VAR_21->obu.frame_header;
                VAR_17 = VAR_21->header.obu_type;
                VAR_9->last_frame_idx = VAR_9->cur_frame_idx;
                VAR_9->cur_frame++;



                if (VAR_16->show_existing_frame &&
                    VAR_9->cur_frame < VAR_9->nb_frames) {
                    VAR_9->cur_frame_idx = VAR_11 + 1;
                    break;
                }
            } else if (VAR_19->type == VAR_2) {
                AV1RawOBU *VAR_22 = VAR_19->content;
                AV1RawTileGroup *VAR_23 = &VAR_22->obu.tile_group;

                if (!VAR_16 || VAR_17 != VAR_1) {
                    FUNC_1(VAR_7, VAR_5, "Unexpected Tile Group OBU found before a "
                                                "Frame Header.\n");
                    goto passthrough;
                }

                if ((VAR_23->tg_end == (VAR_16->tile_cols * VAR_16->tile_rows) - 1) &&

                    VAR_9->cur_frame < VAR_9->nb_frames) {
                    VAR_9->cur_frame_idx = VAR_11 + 1;
                    break;
                }
            }
        }
        FUNC_0(VAR_16 && VAR_9->cur_frame <= VAR_9->nb_frames);

        VAR_12 = FUNC_3(VAR_8, VAR_9->buffer_pkt);
        if (VAR_12 < 0)
            goto fail;

        VAR_8->data = (uint8_t *)VAR_10->units[VAR_9->last_frame_idx].data;
        VAR_8->size = VAR_18;



        VAR_9->buffer_pkt->data += VAR_18;
        VAR_9->buffer_pkt->size -= VAR_18;

        if (!VAR_16->show_existing_frame && !VAR_16->show_frame)
            VAR_8->pts = VAR_6;

        if (VAR_9->cur_frame == VAR_9->nb_frames) {
            FUNC_4(VAR_9->buffer_pkt);
            FUNC_6(VAR_9->cbc, VAR_10);
        }

        return 0;
    }

passthrough:
    FUNC_2(VAR_8, VAR_9->buffer_pkt);

    VAR_12 = 0;
fail:
    if (VAR_12 < 0) {
        FUNC_4(VAR_8);
        FUNC_4(VAR_9->buffer_pkt);
    }
    FUNC_6(VAR_9->cbc, VAR_10);

    return VAR_12;
}
