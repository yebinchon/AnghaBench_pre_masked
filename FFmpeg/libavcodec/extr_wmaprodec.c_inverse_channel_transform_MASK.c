
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_7__ {int num_chgroups; int* cur_sfb_offsets; int num_bands; int nb_channels; TYPE_2__* fdsp; int subframe_len; TYPE_1__* chgroup; } ;
typedef TYPE_3__ WMAProDecodeCtx ;
struct TYPE_6__ {int (* vector_fmul_scalar ) (float*,float*,double,int) ;} ;
struct TYPE_5__ {int num_channels; float** channel_data; float* decorrelation_matrix; int * transform_band; scalar_t__ transform; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (float*,float*,double,int) ;
 int FUNC_2 (float*,float*,double,int) ;

__attribute__((used)) static void FUNC_3(WMAProDecodeCtx *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_chgroups; VAR_2++) {
        if (VAR_1->chgroup[VAR_2].transform) {
            float VAR_3[VAR_0];
            const int VAR_4 = VAR_1->chgroup[VAR_2].num_channels;
            float** VAR_5 = VAR_1->chgroup[VAR_2].channel_data;
            float** VAR_6 = VAR_5 + VAR_4;
            const int8_t* VAR_7 = VAR_1->chgroup[VAR_2].transform_band;
            int16_t* VAR_8;


            for (VAR_8 = VAR_1->cur_sfb_offsets;
                 VAR_8 < VAR_1->cur_sfb_offsets + VAR_1->num_bands; VAR_8++) {
                int VAR_9;
                if (*VAR_7++ == 1) {

                    for (VAR_9 = VAR_8[0]; VAR_9 < FUNC_0(VAR_8[1], VAR_1->subframe_len); VAR_9++) {
                        const float* VAR_10 = VAR_1->chgroup[VAR_2].decorrelation_matrix;
                        const float* VAR_11 = VAR_3 + VAR_4;
                        float* VAR_12 = VAR_3;
                        float** VAR_13;

                        for (VAR_13 = VAR_5; VAR_13 < VAR_6; VAR_13++)
                            *VAR_12++ = (*VAR_13)[VAR_9];

                        for (VAR_13 = VAR_5; VAR_13 < VAR_6; VAR_13++) {
                            float VAR_14 = 0;
                            VAR_12 = VAR_3;
                            while (VAR_12 < VAR_11)
                                VAR_14 += *VAR_12++ * *VAR_10++;

                            (*VAR_13)[VAR_9] = VAR_14;
                        }
                    }
                } else if (VAR_1->nb_channels == 2) {
                    int VAR_15 = FUNC_0(VAR_8[1], VAR_1->subframe_len) - VAR_8[0];
                    VAR_1->fdsp->vector_fmul_scalar(VAR_5[0] + VAR_8[0],
                                               VAR_5[0] + VAR_8[0],
                                               181.0 / 128, VAR_15);
                    VAR_1->fdsp->vector_fmul_scalar(VAR_5[1] + VAR_8[0],
                                               VAR_5[1] + VAR_8[0],
                                               181.0 / 128, VAR_15);
                }
            }
        }
    }
}
