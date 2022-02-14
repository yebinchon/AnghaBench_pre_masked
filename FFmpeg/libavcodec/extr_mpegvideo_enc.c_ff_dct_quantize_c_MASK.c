
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_11__ {scalar_t__ perm_type; int idct_permutation; } ;
struct TYPE_10__ {int* scantable; } ;
struct TYPE_9__ {int* scantable; } ;
struct TYPE_8__ {int (* fdct ) (int*) ;} ;
struct TYPE_12__ {int y_dc_scale; int c_dc_scale; int** q_intra_matrix; int** q_chroma_intra_matrix; int intra_quant_bias; int** q_inter_matrix; int inter_quant_bias; int max_qcoeff; TYPE_4__ idsp; TYPE_3__ inter_scantable; int h263_aic; TYPE_2__ intra_scantable; scalar_t__ mb_intra; int (* denoise_dct ) (TYPE_5__*,int*) ;scalar_t__ dct_error_sum; TYPE_1__ fdsp; } ;
typedef TYPE_5__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int const*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_5__*,int*) ;

int FUNC_3(MpegEncContext *VAR_3,
                        int16_t *VAR_4, int VAR_5,
                        int VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    const int *VAR_14;
    const uint8_t *VAR_15;
    int VAR_16;
    int VAR_17=0;
    unsigned int VAR_18, VAR_19;

    VAR_3->fdsp.fdct(VAR_4);

    if(VAR_3->dct_error_sum)
        VAR_3->denoise_dct(VAR_3, VAR_4);

    if (VAR_3->mb_intra) {
        VAR_15= VAR_3->intra_scantable.scantable;
        if (!VAR_3->h263_aic) {
            if (VAR_5 < 4)
                VAR_12 = VAR_3->y_dc_scale;
            else
                VAR_12 = VAR_3->c_dc_scale;
            VAR_12 = VAR_12 << 3;
        } else

            VAR_12 = 1 << 3;


        VAR_4[0] = (VAR_4[0] + (VAR_12 >> 1)) / VAR_12;
        VAR_13 = 1;
        VAR_11 = 0;
        VAR_14 = VAR_5 < 4 ? VAR_3->q_intra_matrix[VAR_6] : VAR_3->q_chroma_intra_matrix[VAR_6];
        VAR_16= VAR_3->intra_quant_bias*(1<<(VAR_1 - VAR_2));
    } else {
        VAR_15= VAR_3->inter_scantable.scantable;
        VAR_13 = 0;
        VAR_11 = -1;
        VAR_14 = VAR_3->q_inter_matrix[VAR_6];
        VAR_16= VAR_3->inter_quant_bias*(1<<(VAR_1 - VAR_2));
    }
    VAR_18= (1<<VAR_1) - VAR_16 - 1;
    VAR_19= (VAR_18<<1);
    for(VAR_8=63;VAR_8>=VAR_13;VAR_8--) {
        VAR_9 = VAR_15[VAR_8];
        VAR_10 = VAR_4[VAR_9] * VAR_14[VAR_9];

        if(((unsigned)(VAR_10+VAR_18))>VAR_19){
            VAR_11 = VAR_8;
            break;
        }else{
            VAR_4[VAR_9]=0;
        }
    }
    for(VAR_8=VAR_13; VAR_8<=VAR_11; VAR_8++) {
        VAR_9 = VAR_15[VAR_8];
        VAR_10 = VAR_4[VAR_9] * VAR_14[VAR_9];



        if(((unsigned)(VAR_10+VAR_18))>VAR_19){
            if(VAR_10>0){
                VAR_10= (VAR_16 + VAR_10)>>VAR_1;
                VAR_4[VAR_9]= VAR_10;
            }else{
                VAR_10= (VAR_16 - VAR_10)>>VAR_1;
                VAR_4[VAR_9]= -VAR_10;
            }
            VAR_17 |=VAR_10;
        }else{
            VAR_4[VAR_9]=0;
        }
    }
    *VAR_7= VAR_3->max_qcoeff < VAR_17;


    if (VAR_3->idsp.perm_type != VAR_0)
        FUNC_0(VAR_4, VAR_3->idsp.idct_permutation,
                      VAR_15, VAR_11);

    return VAR_11;
}
