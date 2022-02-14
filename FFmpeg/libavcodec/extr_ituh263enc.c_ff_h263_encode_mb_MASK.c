
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_11__ {int*** motion_val; } ;
struct TYPE_13__ {int dquant; int mv_type; scalar_t__ alt_inter_vlc; size_t* block_index; int y_dc_scale; int c_dc_scale; int* block_last_index; scalar_t__ pict_type; int i_count; int i_tex_bits; int f_count; int p_tex_bits; scalar_t__ mb_intra; scalar_t__ h263_aic; scalar_t__ misc_bits; int pb; int modified_quant; int mv_bits; int umvplus; TYPE_1__ current_picture; int skip_count; int last_bits; TYPE_2__* avctx; } ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int* VAR_3 ;
 int** VAR_4 ;
 int FUNC_1 (TYPE_3__*,int,int,int) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_2 (TYPE_3__*,int,int**) ;
 int FUNC_3 (TYPE_3__*,int,int ,int*,int*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int**,int,int) ;
 int FUNC_6 (TYPE_3__*,int*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;

void FUNC_9(MpegEncContext * VAR_9,
                       int16_t VAR_10[6][64],
                       int VAR_11, int VAR_12)
{
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int16_t VAR_19;
    int16_t VAR_20[6];
    int16_t *VAR_21[6];
    const int VAR_22 = VAR_9->avctx->flags & VAR_0;

    if (!VAR_9->mb_intra) {

        VAR_16= FUNC_5(VAR_9, VAR_10, VAR_11, VAR_12);

        if ((VAR_16 | VAR_11 | VAR_12 | VAR_9->dquant | (VAR_9->mv_type - VAR_2)) == 0) {

            FUNC_8(&VAR_9->pb, 1, 1);
            if(VAR_22){
                VAR_9->misc_bits++;
                VAR_9->last_bits++;
            }
            VAR_9->skip_count++;

            return;
        }
        FUNC_8(&VAR_9->pb, 1, 0);

        VAR_13 = VAR_16 & 3;
        VAR_14 = VAR_16 >> 2;
        if(VAR_9->alt_inter_vlc==0 || VAR_13!=3)
            VAR_14 ^= 0xF;
        if(VAR_9->dquant) VAR_13+= 8;
        if(VAR_9->mv_type==VAR_2){
            FUNC_8(&VAR_9->pb,
                    VAR_5[VAR_13],
                    VAR_6[VAR_13]);

            FUNC_8(&VAR_9->pb, VAR_4[VAR_14][1], VAR_4[VAR_14][0]);
            if(VAR_9->dquant)
                FUNC_8(&VAR_9->pb, 2, VAR_3[VAR_9->dquant+2]);

            if(VAR_22){
                VAR_9->misc_bits+= FUNC_4(VAR_9);
            }


            FUNC_3(VAR_9, 0, 0, &VAR_17, &VAR_18);

            if (!VAR_9->umvplus) {
                FUNC_1(VAR_9, VAR_11 - VAR_17,
                                                VAR_12 - VAR_18, 1);
            }
            else {
                FUNC_7(&VAR_9->pb, VAR_11 - VAR_17);
                FUNC_7(&VAR_9->pb, VAR_12 - VAR_18);
                if (((VAR_11 - VAR_17) == 1) && ((VAR_12 - VAR_18) == 1))

                    FUNC_8(&VAR_9->pb,1,1);
            }
        }else{
            FUNC_8(&VAR_9->pb,
                    VAR_5[VAR_13+16],
                    VAR_6[VAR_13+16]);
            FUNC_8(&VAR_9->pb, VAR_4[VAR_14][1], VAR_4[VAR_14][0]);
            if(VAR_9->dquant)
                FUNC_8(&VAR_9->pb, 2, VAR_3[VAR_9->dquant+2]);

            if(VAR_22){
                VAR_9->misc_bits+= FUNC_4(VAR_9);
            }

            for(VAR_15=0; VAR_15<4; VAR_15++){

                FUNC_3(VAR_9, VAR_15, 0, &VAR_17, &VAR_18);

                VAR_11 = VAR_9->current_picture.motion_val[0][VAR_9->block_index[VAR_15]][0];
                VAR_12 = VAR_9->current_picture.motion_val[0][VAR_9->block_index[VAR_15]][1];
                if (!VAR_9->umvplus) {
                    FUNC_1(VAR_9, VAR_11 - VAR_17,
                                                    VAR_12 - VAR_18, 1);
                }
                else {
                    FUNC_7(&VAR_9->pb, VAR_11 - VAR_17);
                    FUNC_7(&VAR_9->pb, VAR_12 - VAR_18);
                    if (((VAR_11 - VAR_17) == 1) && ((VAR_12 - VAR_18) == 1))

                        FUNC_8(&VAR_9->pb,1,1);
                }
            }
        }

        if(VAR_22){
            VAR_9->mv_bits+= FUNC_4(VAR_9);
        }
    } else {
        FUNC_0(VAR_9->mb_intra);

        VAR_16 = 0;
        if (VAR_9->h263_aic) {

            for(VAR_15=0; VAR_15<6; VAR_15++) {
                int16_t VAR_23 = VAR_10[VAR_15][0];
                int VAR_24;

                if(VAR_15<4) VAR_24= VAR_9->y_dc_scale;
                else VAR_24= VAR_9->c_dc_scale;

                VAR_19 = FUNC_2(VAR_9, VAR_15, &VAR_21[VAR_15]);
                VAR_23 -= VAR_19;

                if (VAR_23 >= 0)
                    VAR_23 = (VAR_23 + (VAR_24>>1))/VAR_24;
                else
                    VAR_23 = (VAR_23 - (VAR_24>>1))/VAR_24;

                if(!VAR_9->modified_quant){
                    if (VAR_23 < -127)
                        VAR_23 = -127;
                    else if (VAR_23 > 127)
                        VAR_23 = 127;
                }

                VAR_10[VAR_15][0] = VAR_23;

                VAR_20[VAR_15] = VAR_24*VAR_23 + VAR_19;

                VAR_20[VAR_15] |= 1;



                if (VAR_20[VAR_15] < 0)
                    VAR_20[VAR_15] = 0;
                else if (VAR_20[VAR_15] > 2047)
                    VAR_20[VAR_15] = 2047;


                *VAR_21[VAR_15] = VAR_20[VAR_15];

                if (VAR_9->block_last_index[VAR_15] > 0 ||
                    (VAR_9->block_last_index[VAR_15] == 0 && VAR_23 !=0))
                    VAR_16 |= 1 << (5 - VAR_15);
            }
        }else{
            for(VAR_15=0; VAR_15<6; VAR_15++) {

                if (VAR_9->block_last_index[VAR_15] >= 1)
                    VAR_16 |= 1 << (5 - VAR_15);
            }
        }

        VAR_13 = VAR_16 & 3;
        if (VAR_9->pict_type == VAR_1) {
            if(VAR_9->dquant) VAR_13+=4;
            FUNC_8(&VAR_9->pb,
                VAR_7[VAR_13],
                VAR_8[VAR_13]);
        } else {
            if(VAR_9->dquant) VAR_13+=8;
            FUNC_8(&VAR_9->pb, 1, 0);
            FUNC_8(&VAR_9->pb,
                VAR_5[VAR_13 + 4],
                VAR_6[VAR_13 + 4]);
        }
        if (VAR_9->h263_aic) {

            FUNC_8(&VAR_9->pb, 1, 0);
        }
        VAR_14 = VAR_16 >> 2;
        FUNC_8(&VAR_9->pb, VAR_4[VAR_14][1], VAR_4[VAR_14][0]);
        if(VAR_9->dquant)
            FUNC_8(&VAR_9->pb, 2, VAR_3[VAR_9->dquant+2]);

        if(VAR_22){
            VAR_9->misc_bits+= FUNC_4(VAR_9);
        }
    }

    for(VAR_15=0; VAR_15<6; VAR_15++) {

        FUNC_6(VAR_9, VAR_10[VAR_15], VAR_15);


        if (VAR_9->h263_aic && VAR_9->mb_intra) {
            VAR_10[VAR_15][0] = VAR_20[VAR_15];

        }
    }

    if(VAR_22){
        if (!VAR_9->mb_intra) {
            VAR_9->p_tex_bits+= FUNC_4(VAR_9);
            VAR_9->f_count++;
        }else{
            VAR_9->i_tex_bits+= FUNC_4(VAR_9);
            VAR_9->i_count++;
        }
    }
}
