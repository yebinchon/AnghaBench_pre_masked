
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef int ivi_mc_func ;
typedef int ivi_mc_avg_func ;
typedef scalar_t__ int32_t ;
struct TYPE_15__ {scalar_t__ codec_id; } ;
struct TYPE_14__ {int blk_size; int mb_size; size_t glob_quant; size_t* intra_scale; size_t* inter_scale; int is_halfpel; scalar_t__ pitch; scalar_t__ aheight; } ;
struct TYPE_13__ {int type; size_t cbp; size_t buf_offs; size_t q_delta; int mv_x; int mv_y; int b_mv_x; int b_mv_y; scalar_t__ xpos; scalar_t__ ypos; } ;
struct TYPE_12__ {int num_MBs; TYPE_2__* mbs; } ;
typedef TYPE_1__ IVITile ;
typedef TYPE_2__ IVIMbInfo ;
typedef TYPE_3__ IVIBandDesc ;
typedef int GetBitContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (size_t,int ,int) ;
 size_t FUNC_2 (size_t,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__ const*,scalar_t__*,size_t,int) ;
 int FUNC_4 (int *,TYPE_3__ const*,int ,int ,int,int,int,int,scalar_t__*,int,int,int,size_t,size_t,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__ const*,int ,int ,size_t,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(GetBitContext *VAR_10, const IVIBandDesc *VAR_11,
                             IVITile *VAR_12, AVCodecContext *VAR_13)
{
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20 = 0, VAR_21 = -1;
    int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
    int32_t VAR_26;
    uint32_t VAR_27, VAR_28, VAR_29;
    IVIMbInfo *VAR_30;
    ivi_mc_func VAR_31, VAR_32;
    ivi_mc_avg_func VAR_33, VAR_34;
    const uint8_t *VAR_35;


    VAR_26 = 0;
    VAR_17 = VAR_11->blk_size;

    VAR_16 = (VAR_11->mb_size != VAR_17) ? 4 : 1;
    if (VAR_17 == 8) {
        VAR_31 = VAR_4;
        VAR_32 = VAR_5;
        VAR_33 = VAR_8;
        VAR_34 = VAR_9;
    } else {
        VAR_31 = VAR_2;
        VAR_32 = VAR_3;
        VAR_33 = VAR_6;
        VAR_34 = VAR_7;
    }

    for (VAR_14 = 0, VAR_30 = VAR_12->mbs; VAR_14 < VAR_12->num_MBs; VAR_30++, VAR_14++) {
        VAR_19 = !VAR_30->type;
        VAR_27 = VAR_30->cbp;
        VAR_29 = VAR_30->buf_offs;

        VAR_28 = VAR_11->glob_quant + VAR_30->q_delta;
        if (VAR_13->codec_id == VAR_1)
            VAR_28 = FUNC_2(VAR_28, 5);
        else
            VAR_28 = FUNC_1(VAR_28, 0, 23);

        VAR_35 = VAR_19 ? VAR_11->intra_scale : VAR_11->inter_scale;
        if (VAR_35)
            VAR_28 = VAR_35[VAR_28];

        if (!VAR_19) {
            VAR_22 = VAR_30->mv_x;
            VAR_23 = VAR_30->mv_y;
            VAR_24 = VAR_30->b_mv_x;
            VAR_25 = VAR_30->b_mv_y;
            if (VAR_11->is_halfpel) {
                VAR_20 = ((VAR_23 & 1) << 1) | (VAR_22 & 1);
                VAR_21 = ((VAR_25 & 1) << 1) | (VAR_24 & 1);
                VAR_22 >>= 1;
                VAR_23 >>= 1;
                VAR_24 >>= 1;
                VAR_25 >>= 1;
            }
            if (VAR_30->type == 2)
                VAR_20 = -1;
            if (VAR_30->type != 2 && VAR_30->type != 3)
                VAR_21 = -1;
            if (VAR_30->type) {
                int VAR_36, VAR_37, VAR_38, VAR_39;

                VAR_36 = VAR_30->mv_x >> VAR_11->is_halfpel;
                VAR_37 = VAR_30->mv_y >> VAR_11->is_halfpel;
                VAR_38 = VAR_30->mv_x & VAR_11->is_halfpel;
                VAR_39 = VAR_30->mv_y & VAR_11->is_halfpel;

                if (VAR_30->xpos + VAR_36 < 0 ||
                    VAR_30->xpos + VAR_36 + VAR_11->mb_size + VAR_38 > VAR_11->pitch ||
                    VAR_30->ypos + VAR_37 < 0 ||
                    VAR_30->ypos + VAR_37 + VAR_11->mb_size + VAR_39 > VAR_11->aheight) {
                    return VAR_0;
                }
            }
            if (VAR_30->type == 2 || VAR_30->type == 3) {
                int VAR_40, VAR_41, VAR_42, VAR_43;

                VAR_40 = VAR_30->b_mv_x >> VAR_11->is_halfpel;
                VAR_41 = VAR_30->b_mv_y >> VAR_11->is_halfpel;
                VAR_42 = VAR_30->b_mv_x & VAR_11->is_halfpel;
                VAR_43 = VAR_30->b_mv_y & VAR_11->is_halfpel;

                if (VAR_30->xpos + VAR_40 < 0 ||
                    VAR_30->xpos + VAR_40 + VAR_11->mb_size + VAR_42 > VAR_11->pitch ||
                    VAR_30->ypos + VAR_41 < 0 ||
                    VAR_30->ypos + VAR_41 + VAR_11->mb_size + VAR_43 > VAR_11->aheight) {
                    return VAR_0;
                }
            }
        }

        for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {

            if (VAR_15 & 1) {
                VAR_29 += VAR_17;
            } else if (VAR_15 == 2) {
                VAR_29 -= VAR_17;
                VAR_29 += VAR_17 * VAR_11->pitch;
            }

            if (VAR_27 & 1) {
                VAR_18 = FUNC_4(VAR_10, VAR_11, VAR_31,
                                              VAR_33,
                                              VAR_22, VAR_23, VAR_24, VAR_25,
                                              &VAR_26, VAR_19,
                                              VAR_20, VAR_21, VAR_28,
                                              VAR_29, VAR_13);
                if (VAR_18 < 0)
                    return VAR_18;
            } else {
                int VAR_44 = VAR_11->pitch * VAR_11->aheight - VAR_29;
                int VAR_45 = (VAR_17 - 1) * VAR_11->pitch + VAR_17;

                if (VAR_45 > VAR_44)
                    return VAR_0;



                if (VAR_19) {
                    VAR_18 = FUNC_3(VAR_11, &VAR_26, VAR_29, VAR_17);
                    if (VAR_18 < 0)
                        return VAR_18;
                } else {
                    VAR_18 = FUNC_5(VAR_11, VAR_32, VAR_34,
                                 VAR_29, VAR_22, VAR_23, VAR_24, VAR_25,
                                 VAR_20, VAR_21);
                    if (VAR_18 < 0)
                        return VAR_18;
                }
            }

            VAR_27 >>= 1;
        }
    }

    FUNC_0(VAR_10);

    return 0;
}
