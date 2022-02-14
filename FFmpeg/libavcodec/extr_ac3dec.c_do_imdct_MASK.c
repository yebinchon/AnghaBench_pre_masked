
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* imdct_half ) (TYPE_4__*,int *,int *) ;} ;
struct TYPE_9__ {int (* imdct_half ) (TYPE_3__*,int *,int *) ;} ;
struct TYPE_8__ {int * tmp_output; int ** delay; int window; int * outptr; TYPE_1__* fdsp; int ** transform_coeffs; TYPE_3__ imdct_512; TYPE_4__ imdct_256; scalar_t__* block_switch; } ;
struct TYPE_7__ {int (* vector_fmul_window ) (int ,int *,int *,int ,int) ;int (* vector_fmul_window_scaled ) (int ,int *,int *,int ,int,int) ;} ;
typedef int FFTSample ;
typedef TYPE_2__ AC3DecodeContext ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int ,int,int) ;
 int FUNC_3 (int ,int *,int *,int ,int) ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int FUNC_5 (TYPE_3__*,int *,int *) ;
 int FUNC_6 (int ,int *,int *,int ,int,int) ;
 int FUNC_7 (int ,int *,int *,int ,int) ;

__attribute__((used)) static inline void FUNC_8(AC3DecodeContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 1; VAR_3 <= VAR_1; VAR_3++) {
        if (VAR_0->block_switch[VAR_3]) {
            int VAR_4;
            FFTSample *VAR_5 = VAR_0->tmp_output + 128;
            for (VAR_4 = 0; VAR_4 < 128; VAR_4++)
                VAR_5[VAR_4] = VAR_0->transform_coeffs[VAR_3][2 * VAR_4];
            VAR_0->imdct_256.imdct_half(&VAR_0->imdct_256, VAR_0->tmp_output, VAR_5);




            VAR_0->fdsp->vector_fmul_window(VAR_0->outptr[VAR_3 - 1], VAR_0->delay[VAR_3 - 1 + VAR_2],
                                       VAR_0->tmp_output, VAR_0->window, 128);

            for (VAR_4 = 0; VAR_4 < 128; VAR_4++)
                VAR_5[VAR_4] = VAR_0->transform_coeffs[VAR_3][2 * VAR_4 + 1];
            VAR_0->imdct_256.imdct_half(&VAR_0->imdct_256, VAR_0->delay[VAR_3 - 1 + VAR_2], VAR_5);
        } else {
            VAR_0->imdct_512.imdct_half(&VAR_0->imdct_512, VAR_0->tmp_output, VAR_0->transform_coeffs[VAR_3]);




            VAR_0->fdsp->vector_fmul_window(VAR_0->outptr[VAR_3 - 1], VAR_0->delay[VAR_3 - 1 + VAR_2],
                                       VAR_0->tmp_output, VAR_0->window, 128);

            FUNC_0(VAR_0->delay[VAR_3 - 1 + VAR_2], VAR_0->tmp_output + 128, 128 * sizeof(FFTSample));
        }
    }
}
