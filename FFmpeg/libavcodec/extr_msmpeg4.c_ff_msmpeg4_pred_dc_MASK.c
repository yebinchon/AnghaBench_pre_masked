
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_7__ {TYPE_1__* f; } ;
struct TYPE_9__ {int y_dc_scale; int c_dc_scale; int* block_wrap; int** dc_val; int* block_index; int msmpeg4_version; int linesize; int mb_y; int mb_x; int uvlinesize; int h263_aic_dir; TYPE_3__* avctx; TYPE_2__ current_picture; scalar_t__ inter_intra_pred; scalar_t__ first_slice_line; } ;
struct TYPE_8__ {int lowres; } ;
struct TYPE_6__ {int ** data; } ;
typedef TYPE_4__ MpegEncContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int,int,int) ;

int FUNC_3(MpegEncContext *VAR_0, int VAR_1,
                       int16_t **VAR_2, int *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int16_t *VAR_10;


    if (VAR_1 < 4) {
        VAR_9 = VAR_0->y_dc_scale;
    } else {
        VAR_9 = VAR_0->c_dc_scale;
    }

    VAR_7 = VAR_0->block_wrap[VAR_1];
    VAR_10= VAR_0->dc_val[0] + VAR_0->block_index[VAR_1];




    VAR_4 = VAR_10[ - 1];
    VAR_5 = VAR_10[ - 1 - VAR_7];
    VAR_6 = VAR_10[ - VAR_7];

    if(VAR_0->first_slice_line && (VAR_1&2)==0 && VAR_0->msmpeg4_version<4){
        VAR_5=VAR_6=1024;
    }
    if (VAR_9 == 8) {
        VAR_4 = (VAR_4 + (8 >> 1)) / 8;
        VAR_5 = (VAR_5 + (8 >> 1)) / 8;
        VAR_6 = (VAR_6 + (8 >> 1)) / 8;
    } else {
        VAR_4 = FUNC_0((VAR_4 + (VAR_9 >> 1)), VAR_9);
        VAR_5 = FUNC_0((VAR_5 + (VAR_9 >> 1)), VAR_9);
        VAR_6 = FUNC_0((VAR_6 + (VAR_9 >> 1)), VAR_9);
    }



    if(VAR_0->msmpeg4_version>3){
        if(VAR_0->inter_intra_pred){
            uint8_t *VAR_11;
            int VAR_12;

            if(VAR_1==1){
                VAR_8=VAR_4;
                *VAR_3 = 0;
            }else if(VAR_1==2){
                VAR_8=VAR_6;
                *VAR_3 = 1;
            }else if(VAR_1==3){
                if (FUNC_1(VAR_4 - VAR_5) < FUNC_1(VAR_5 - VAR_6)) {
                    VAR_8 = VAR_6;
                    *VAR_3 = 1;
                } else {
                    VAR_8 = VAR_4;
                    *VAR_3 = 0;
                }
            }else{
                int VAR_13 = 8 >> VAR_0->avctx->lowres;
                if(VAR_1<4){
                    VAR_12= VAR_0->linesize;
                    VAR_11= VAR_0->current_picture.f->data[0] + (((VAR_1 >> 1) + 2*VAR_0->mb_y) * VAR_13* VAR_12 ) + ((VAR_1 & 1) + 2*VAR_0->mb_x) * VAR_13;
                }else{
                    VAR_12= VAR_0->uvlinesize;
                    VAR_11= VAR_0->current_picture.f->data[VAR_1 - 3] + (VAR_0->mb_y * VAR_13 * VAR_12) + VAR_0->mb_x * VAR_13;
                }
                if(VAR_0->mb_x==0) VAR_4= (1024 + (VAR_9>>1))/VAR_9;
                else VAR_4= FUNC_2(VAR_11-VAR_13, VAR_12, VAR_9*8>>(2*VAR_0->avctx->lowres), VAR_13);
                if(VAR_0->mb_y==0) VAR_6= (1024 + (VAR_9>>1))/VAR_9;
                else VAR_6= FUNC_2(VAR_11-VAR_13*VAR_12, VAR_12, VAR_9*8>>(2*VAR_0->avctx->lowres), VAR_13);

                if (VAR_0->h263_aic_dir==0) {
                    VAR_8= VAR_4;
                    *VAR_3 = 0;
                }else if (VAR_0->h263_aic_dir==1) {
                    if(VAR_1==0){
                        VAR_8= VAR_6;
                        *VAR_3 = 1;
                    }else{
                        VAR_8= VAR_4;
                        *VAR_3 = 0;
                    }
                }else if (VAR_0->h263_aic_dir==2) {
                    if(VAR_1==0){
                        VAR_8= VAR_4;
                        *VAR_3 = 0;
                    }else{
                        VAR_8= VAR_6;
                        *VAR_3 = 1;
                    }
                } else {
                    VAR_8= VAR_6;
                    *VAR_3 = 1;
                }
            }
        }else{
            if (FUNC_1(VAR_4 - VAR_5) < FUNC_1(VAR_5 - VAR_6)) {
                VAR_8 = VAR_6;
                *VAR_3 = 1;
            } else {
                VAR_8 = VAR_4;
                *VAR_3 = 0;
            }
        }
    }else{
        if (FUNC_1(VAR_4 - VAR_5) <= FUNC_1(VAR_5 - VAR_6)) {
            VAR_8 = VAR_6;
            *VAR_3 = 1;
        } else {
            VAR_8 = VAR_4;
            *VAR_3 = 0;
        }
    }


    *VAR_2 = &VAR_10[0];
    return VAR_8;
}
