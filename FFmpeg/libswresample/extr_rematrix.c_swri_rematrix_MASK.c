
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_7__ {int bps; scalar_t__ ch_count; scalar_t__* ch; } ;
struct TYPE_6__ {int** matrix_ch; double** matrix; float** matrix_flt; int** matrix32; int int_sample_fmt; int native_matrix; int (* mix_2_1_f ) (scalar_t__,scalar_t__,scalar_t__,int ,int,int,int) ;int native_simd_matrix; int (* mix_2_1_simd ) (scalar_t__,scalar_t__,scalar_t__,int ,int,int,int) ;int (* mix_1_1_f ) (int ,int ,int ,int,int) ;int (* mix_1_1_simd ) (scalar_t__,scalar_t__,int ,int,int) ;int in_ch_layout; int out_ch_layout; int (* mix_any_f ) (scalar_t__*,int const**,int ,int) ;} ;
typedef TYPE_1__ SwrContext ;
typedef TYPE_2__ AudioData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__*,int const**,int ,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int,int) ;
 int FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int ,int,int,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,int ,int,int,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ,int,int,int) ;

int FUNC_11(SwrContext *VAR_2, AudioData *VAR_3, AudioData *VAR_4, int VAR_5, int VAR_6){
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;

    if(VAR_2->mix_any_f) {
        VAR_2->mix_any_f(VAR_3->ch, (const uint8_t **)VAR_4->ch, VAR_2->native_matrix, VAR_5);
        return 0;
    }

    if(VAR_2->mix_2_1_simd || VAR_2->mix_1_1_simd){
        VAR_11= VAR_5&~15;
        VAR_12 = VAR_11 * VAR_3->bps;
    }

    FUNC_0(!VAR_2->out_ch_layout || VAR_3->ch_count == FUNC_2(VAR_2->out_ch_layout));
    FUNC_0(!VAR_2-> in_ch_layout || VAR_4 ->ch_count == FUNC_2(VAR_2-> in_ch_layout));

    for(VAR_7=0; VAR_7<VAR_3->ch_count; VAR_7++){
        switch(VAR_2->matrix_ch[VAR_7][0]){
        case 0:
            if(VAR_6)
                FUNC_4(VAR_3->ch[VAR_7], 0, VAR_5 * FUNC_1(VAR_2->int_sample_fmt));
            break;
        case 1:
            VAR_8= VAR_2->matrix_ch[VAR_7][1];
            if(VAR_2->matrix[VAR_7][VAR_8]!=1.0){
                if(VAR_2->mix_1_1_simd && VAR_11)
                    VAR_2->mix_1_1_simd(VAR_3->ch[VAR_7] , VAR_4->ch[VAR_8] , VAR_2->native_simd_matrix, VAR_4->ch_count*VAR_7 + VAR_8, VAR_11);
                if(VAR_5 != VAR_11)
                    VAR_2->mix_1_1_f (VAR_3->ch[VAR_7]+VAR_12, VAR_4->ch[VAR_8]+VAR_12, VAR_2->native_matrix, VAR_4->ch_count*VAR_7 + VAR_8, VAR_5-VAR_11);
            }else if(VAR_6){
                FUNC_3(VAR_3->ch[VAR_7], VAR_4->ch[VAR_8], VAR_5*VAR_3->bps);
            }else{
                VAR_3->ch[VAR_7]= VAR_4->ch[VAR_8];
            }
            break;
        case 2: {
            int VAR_13 = VAR_2->matrix_ch[VAR_7][1];
            int VAR_14 = VAR_2->matrix_ch[VAR_7][2];
            if(VAR_2->mix_2_1_simd && VAR_11)
                VAR_2->mix_2_1_simd(VAR_3->ch[VAR_7] , VAR_4->ch[VAR_13] , VAR_4->ch[VAR_14] , VAR_2->native_simd_matrix, VAR_4->ch_count*VAR_7 + VAR_13, VAR_4->ch_count*VAR_7 + VAR_14, VAR_11);
            else
                VAR_2->mix_2_1_f (VAR_3->ch[VAR_7] , VAR_4->ch[VAR_13] , VAR_4->ch[VAR_14] , VAR_2->native_matrix, VAR_4->ch_count*VAR_7 + VAR_13, VAR_4->ch_count*VAR_7 + VAR_14, VAR_11);
            if(VAR_5 != VAR_11)
                VAR_2->mix_2_1_f (VAR_3->ch[VAR_7]+VAR_12, VAR_4->ch[VAR_13]+VAR_12, VAR_4->ch[VAR_14]+VAR_12, VAR_2->native_matrix, VAR_4->ch_count*VAR_7 + VAR_13, VAR_4->ch_count*VAR_7 + VAR_14, VAR_5-VAR_11);
            break;}
        default:
            if(VAR_2->int_sample_fmt == VAR_1){
                for(VAR_9=0; VAR_9<VAR_5; VAR_9++){
                    float VAR_15=0;
                    for(VAR_10=0; VAR_10<VAR_2->matrix_ch[VAR_7][0]; VAR_10++){
                        VAR_8= VAR_2->matrix_ch[VAR_7][1+VAR_10];
                        VAR_15+= ((float*)VAR_4->ch[VAR_8])[VAR_9] * VAR_2->matrix_flt[VAR_7][VAR_8];
                    }
                    ((float*)VAR_3->ch[VAR_7])[VAR_9]= VAR_15;
                }
            }else if(VAR_2->int_sample_fmt == VAR_0){
                for(VAR_9=0; VAR_9<VAR_5; VAR_9++){
                    double VAR_16=0;
                    for(VAR_10=0; VAR_10<VAR_2->matrix_ch[VAR_7][0]; VAR_10++){
                        VAR_8= VAR_2->matrix_ch[VAR_7][1+VAR_10];
                        VAR_16+= ((double*)VAR_4->ch[VAR_8])[VAR_9] * VAR_2->matrix[VAR_7][VAR_8];
                    }
                    ((double*)VAR_3->ch[VAR_7])[VAR_9]= VAR_16;
                }
            }else{
                for(VAR_9=0; VAR_9<VAR_5; VAR_9++){
                    int VAR_17=0;
                    for(VAR_10=0; VAR_10<VAR_2->matrix_ch[VAR_7][0]; VAR_10++){
                        VAR_8= VAR_2->matrix_ch[VAR_7][1+VAR_10];
                        VAR_17+= ((int16_t*)VAR_4->ch[VAR_8])[VAR_9] * VAR_2->matrix32[VAR_7][VAR_8];
                    }
                    ((int16_t*)VAR_3->ch[VAR_7])[VAR_9]= (VAR_17 + 16384)>>15;
                }
            }
        }
    }
    return 0;
}
