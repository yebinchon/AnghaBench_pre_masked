
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ivi_mc_func ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_9__ {int mb_size; int is_halfpel; int pitch; scalar_t__ aheight; int blk_size; int * buf; int * ref_buf; scalar_t__ inherit_mv; scalar_t__ inherit_qdelta; int glob_quant; int band_num; int plane; int qdelta_present; } ;
struct TYPE_8__ {int xpos; int ypos; int buf_offs; int type; int mv_x; int mv_y; int q_delta; scalar_t__ cbp; } ;
struct TYPE_7__ {int xpos; int width; int num_MBs; int height; int ypos; TYPE_2__* mbs; TYPE_2__* ref_mbs; } ;
typedef TYPE_1__ IVITile ;
typedef TYPE_2__ IVIMbInfo ;
typedef TYPE_3__ IVIBandDesc ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__ const*,int ,int ,int,int,int,int ,int ,int,int) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_4, const IVIBandDesc *VAR_5,
                                  IVITile *VAR_6, int32_t VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;
    IVIMbInfo *VAR_21, *VAR_22;
    const int16_t *VAR_23;
    int16_t *VAR_24;
    ivi_mc_func VAR_25;
    int VAR_26 = !VAR_5->qdelta_present && !VAR_5->plane && !VAR_5->band_num;
    int VAR_27 = VAR_5->mb_size;
    int VAR_28 = VAR_6->xpos + VAR_6->width;
    int VAR_29 = VAR_5->is_halfpel;
    int VAR_30 = VAR_5->pitch;

    if (VAR_6->num_MBs != FUNC_0(VAR_6->width, VAR_6->height, VAR_27)) {
        FUNC_1(VAR_4, VAR_1, "Allocated tile size %d mismatches "
               "parameters %d in ivi_process_empty_tile()\n",
               VAR_6->num_MBs, FUNC_0(VAR_6->width, VAR_6->height, VAR_27));
        return VAR_0;
    }

    VAR_17 = VAR_6->ypos * VAR_30 + VAR_6->xpos;
    VAR_21 = VAR_6->mbs;
    VAR_22 = VAR_6->ref_mbs;
    VAR_19 = VAR_27 * VAR_30;
    VAR_10 = 0;

    for (VAR_9 = VAR_6->ypos; VAR_9 < (VAR_6->ypos + VAR_6->height); VAR_9 += VAR_27) {
        VAR_18 = VAR_17;

        for (VAR_8 = VAR_6->xpos; VAR_8 < VAR_28; VAR_8 += VAR_27) {
            VAR_21->xpos = VAR_8;
            VAR_21->ypos = VAR_9;
            VAR_21->buf_offs = VAR_18;

            VAR_21->type = 1;
            VAR_21->cbp = 0;

            if (VAR_26) {
                VAR_21->q_delta = VAR_5->glob_quant;
                VAR_21->mv_x = 0;
                VAR_21->mv_y = 0;
            }

            if (VAR_22) {
                if (VAR_5->inherit_qdelta)
                    VAR_21->q_delta = VAR_22->q_delta;

                if (VAR_5->inherit_mv) {

                    if (VAR_7) {
                        VAR_21->mv_x = FUNC_3(VAR_22->mv_x, VAR_7);
                        VAR_21->mv_y = FUNC_3(VAR_22->mv_y, VAR_7);
                    } else {
                        VAR_21->mv_x = VAR_22->mv_x;
                        VAR_21->mv_y = VAR_22->mv_y;
                    }
                    VAR_10 |= VAR_21->mv_x || VAR_21->mv_y;
                    {
                        int VAR_31, VAR_32, VAR_33, VAR_34;

                        VAR_31 = VAR_21->mv_x >> VAR_29;
                        VAR_32 = VAR_21->mv_y >> VAR_29;
                        VAR_33 = VAR_21->mv_x & VAR_29;
                        VAR_34 = VAR_21->mv_y & VAR_29;

                        if ( VAR_21->xpos + VAR_31 < 0
                            || VAR_21->xpos + VAR_31 + VAR_27 + VAR_33 > VAR_30
                            || VAR_21->ypos + VAR_32 < 0
                            || VAR_21->ypos + VAR_32 + VAR_27 + VAR_34 > VAR_5->aheight) {
                            FUNC_1(VAR_4, VAR_1, "MV out of bounds\n");
                            return VAR_0;
                        }
                    }
                }
                VAR_22++;
            }

            VAR_21++;
            VAR_18 += VAR_27;
        }
        VAR_17 += VAR_19;
    }

    if (VAR_5->inherit_mv && VAR_10) {
        VAR_13 = (VAR_27 != VAR_5->blk_size) ? 4 : 1;
        VAR_25 = (VAR_5->blk_size == 8) ? VAR_3
                                                 : VAR_2;

        for (VAR_11 = 0, VAR_21 = VAR_6->mbs; VAR_11 < VAR_6->num_MBs; VAR_21++, VAR_11++) {
            VAR_14 = VAR_21->mv_x;
            VAR_15 = VAR_21->mv_y;
            if (!VAR_5->is_halfpel) {
                VAR_16 = 0;
            } else {
                VAR_16 = ((VAR_15 & 1) << 1) | (VAR_14 & 1);
                VAR_14 >>= 1;
                VAR_15 >>= 1;
            }

            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {

                VAR_17 = VAR_21->buf_offs + VAR_5->blk_size * ((VAR_12 & 1) + !!(VAR_12 & 2) * VAR_30);
                VAR_20 = FUNC_2(VAR_5, VAR_25, 0, VAR_17,
                             VAR_14, VAR_15, 0, 0, VAR_16, -1);
                if (VAR_20 < 0)
                    return VAR_20;
            }
        }
    } else {

        VAR_23 = VAR_5->ref_buf + VAR_6->ypos * VAR_30 + VAR_6->xpos;
        VAR_24 = VAR_5->buf + VAR_6->ypos * VAR_30 + VAR_6->xpos;
        for (VAR_9 = 0; VAR_9 < VAR_6->height; VAR_9++) {
            FUNC_4(VAR_24, VAR_23, VAR_6->width*sizeof(VAR_5->buf[0]));
            VAR_23 += VAR_30;
            VAR_24 += VAR_30;
        }
    }

    return 0;
}
