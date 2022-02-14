
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef enum cavs_mb { ____Placeholder_cavs_mb } cavs_mb ;
struct TYPE_15__ {scalar_t__ pict_type; int* linesize; int * data; } ;
struct TYPE_13__ {int poc; TYPE_2__* f; } ;
struct TYPE_14__ {scalar_t__ stc; int stream_revision; int* dist; int* scale_den; int sym_factor; int* direct_den; int progressive; int pic_structure; int pic_qp_fixed; int qp_fixed; int qp; int ref_flag; int skip_mode_flag; int loop_filter_disable; int alpha_offset; int beta_offset; TYPE_11__* DPB; TYPE_11__ cur; int gb; scalar_t__ low_delay; int avctx; int edge_emu_buffer; int top_qp; } ;
typedef TYPE_1__ AVSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,TYPE_11__,TYPE_11__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,char*,...) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,TYPE_2__*,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 void* FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(AVSContext *VAR_13)
{
    int VAR_14;
    int VAR_15 = -1;
    enum cavs_mb VAR_16;

    if (!VAR_13->top_qp) {
        FUNC_5(VAR_13->avctx, VAR_3, "No sequence header decoded yet\n");
        return VAR_0;
    }

    FUNC_4(VAR_13->cur.f);

    FUNC_21(&VAR_13->gb, 16);
    if (VAR_13->stc == VAR_10) {
        VAR_13->cur.f->pict_type = FUNC_15(&VAR_13->gb, 2) + VAR_5;
        if (VAR_13->cur.f->pict_type > VAR_4) {
            FUNC_5(VAR_13->avctx, VAR_3, "illegal picture type\n");
            return VAR_0;
        }

        if (!VAR_13->DPB[0].f->data[0] ||
           (!VAR_13->DPB[1].f->data[0] && VAR_13->cur.f->pict_type == VAR_4))
            return VAR_0;
    } else {
        VAR_13->cur.f->pict_type = VAR_5;
        if (FUNC_16(&VAR_13->gb))
            FUNC_21(&VAR_13->gb, 24);


        if (VAR_13->low_delay || !(FUNC_20(&VAR_13->gb, 9) & 1))
            VAR_13->stream_revision = 1;

        else if (FUNC_20(&VAR_13->gb, 11) & 3)
            VAR_13->stream_revision = 1;
        if (VAR_13->stream_revision > 0)
            FUNC_21(&VAR_13->gb, 1);
    }

    VAR_14 = FUNC_14(VAR_13->avctx, VAR_13->cur.f, VAR_13->cur.f->pict_type == VAR_4 ?
                        0 : VAR_2);
    if (VAR_14 < 0)
        return VAR_14;

    if (!VAR_13->edge_emu_buffer) {
        int VAR_17 = FUNC_2(FUNC_1(VAR_13->cur.f->linesize[0]) + 32, 32);
        VAR_13->edge_emu_buffer = FUNC_6(VAR_17 * 2 * 24);
        if (!VAR_13->edge_emu_buffer)
            return FUNC_0(VAR_9);
    }

    if ((VAR_14 = FUNC_12(VAR_13)) < 0)
        return VAR_14;
    VAR_13->cur.poc = FUNC_15(&VAR_13->gb, 8) * 2;


    if (VAR_13->cur.f->pict_type != VAR_4) {
        VAR_13->dist[0] = (VAR_13->cur.poc - VAR_13->DPB[0].poc) & 511;
    } else {
        VAR_13->dist[0] = (VAR_13->DPB[0].poc - VAR_13->cur.poc) & 511;
    }
    VAR_13->dist[1] = (VAR_13->cur.poc - VAR_13->DPB[1].poc) & 511;
    VAR_13->scale_den[0] = VAR_13->dist[0] ? 512/VAR_13->dist[0] : 0;
    VAR_13->scale_den[1] = VAR_13->dist[1] ? 512/VAR_13->dist[1] : 0;
    if (VAR_13->cur.f->pict_type == VAR_4) {
        VAR_13->sym_factor = VAR_13->dist[0] * VAR_13->scale_den[1];
        if (FUNC_1(VAR_13->sym_factor) > 32768) {
            FUNC_5(VAR_13->avctx, VAR_3, "sym_factor %d too large\n", VAR_13->sym_factor);
            return VAR_0;
        }
    } else {
        VAR_13->direct_den[0] = VAR_13->dist[0] ? 16384 / VAR_13->dist[0] : 0;
        VAR_13->direct_den[1] = VAR_13->dist[1] ? 16384 / VAR_13->dist[1] : 0;
    }

    if (VAR_13->low_delay)
        FUNC_19(&VAR_13->gb);
    VAR_13->progressive = FUNC_16(&VAR_13->gb);
    VAR_13->pic_structure = 1;
    if (!VAR_13->progressive)
        VAR_13->pic_structure = FUNC_16(&VAR_13->gb);
    if (!VAR_13->pic_structure && VAR_13->stc == VAR_10)
        FUNC_22(&VAR_13->gb);
    FUNC_22(&VAR_13->gb);
    FUNC_22(&VAR_13->gb);
    VAR_13->pic_qp_fixed =
    VAR_13->qp_fixed = FUNC_16(&VAR_13->gb);
    VAR_13->qp = FUNC_15(&VAR_13->gb, 6);
    if (VAR_13->cur.f->pict_type == VAR_5) {
        if (!VAR_13->progressive && !VAR_13->pic_structure)
            FUNC_22(&VAR_13->gb);
        FUNC_21(&VAR_13->gb, 4);
    } else {
        if (!(VAR_13->cur.f->pict_type == VAR_4 && VAR_13->pic_structure == 1))
            VAR_13->ref_flag = FUNC_16(&VAR_13->gb);
        FUNC_21(&VAR_13->gb, 4);
        VAR_13->skip_mode_flag = FUNC_16(&VAR_13->gb);
    }
    VAR_13->loop_filter_disable = FUNC_16(&VAR_13->gb);
    if (!VAR_13->loop_filter_disable && FUNC_16(&VAR_13->gb)) {
        VAR_13->alpha_offset = FUNC_18(&VAR_13->gb);
        VAR_13->beta_offset = FUNC_18(&VAR_13->gb);
        if ( VAR_13->alpha_offset < -64 || VAR_13->alpha_offset > 64
            || VAR_13-> beta_offset < -64 || VAR_13-> beta_offset > 64) {
            VAR_13->alpha_offset = VAR_13->beta_offset = 0;
            return VAR_0;
        }
    } else {
        VAR_13->alpha_offset = VAR_13->beta_offset = 0;
    }

    VAR_14 = 0;
    if (VAR_13->cur.f->pict_type == VAR_5) {
        do {
            FUNC_7(VAR_13);
            VAR_14 = FUNC_9(VAR_13, 0);
            if (VAR_14 < 0)
                break;
        } while (FUNC_13(VAR_13));
    } else if (VAR_13->cur.f->pict_type == VAR_6) {
        do {
            if (FUNC_7(VAR_13))
                VAR_15 = -1;
            if (VAR_13->skip_mode_flag && (VAR_15 < 0)) {
                if (FUNC_17(&VAR_13->gb) < 1) {
                    VAR_14 = VAR_0;
                    break;
                }
                VAR_15 = FUNC_19(&VAR_13->gb);
            }
            if (VAR_13->skip_mode_flag && VAR_15--) {
                FUNC_10(VAR_13, VAR_12);
            } else {
                if (FUNC_17(&VAR_13->gb) < 1) {
                    VAR_14 = VAR_0;
                    break;
                }
                VAR_16 = FUNC_19(&VAR_13->gb) + VAR_12 + VAR_13->skip_mode_flag;
                if (VAR_16 > VAR_11)
                    VAR_14 = FUNC_9(VAR_13, VAR_16 - VAR_11 - 1);
                else
                    FUNC_10(VAR_13, VAR_16);
            }
            if (VAR_14 < 0)
                break;
        } while (FUNC_13(VAR_13));
    } else {
        do {
            if (FUNC_7(VAR_13))
                VAR_15 = -1;
            if (VAR_13->skip_mode_flag && (VAR_15 < 0)) {
                if (FUNC_17(&VAR_13->gb) < 1) {
                    VAR_14 = VAR_0;
                    break;
                }
                VAR_15 = FUNC_19(&VAR_13->gb);
            }
            if (VAR_13->skip_mode_flag && VAR_15--) {
                VAR_14 = FUNC_8(VAR_13, VAR_8);
            } else {
                if (FUNC_17(&VAR_13->gb) < 1) {
                    VAR_14 = VAR_0;
                    break;
                }
                VAR_16 = FUNC_19(&VAR_13->gb) + VAR_8 + VAR_13->skip_mode_flag;
                if (VAR_16 > VAR_7)
                    VAR_14 = FUNC_9(VAR_13, VAR_16 - VAR_7 - 1);
                else
                    VAR_14 = FUNC_8(VAR_13, VAR_16);
            }
            if (VAR_14 < 0)
                break;
        } while (FUNC_13(VAR_13));
    }
    FUNC_11();
    if (VAR_14 >= 0 && VAR_13->cur.f->pict_type != VAR_4) {
        FUNC_4(VAR_13->DPB[1].f);
        FUNC_3(VAR_1, VAR_13->cur, VAR_13->DPB[1]);
        FUNC_3(VAR_1, VAR_13->DPB[0], VAR_13->DPB[1]);
    }
    return VAR_14;
}
