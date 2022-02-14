
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int (* mdct_calcw ) (TYPE_5__*,int ,int ) ;} ;
struct TYPE_11__ {int * mdct_coef; int * coeff_shift; } ;
struct TYPE_9__ {int (* apply_window_int16 ) (int ,int const*,int ,int ) ;} ;
struct TYPE_10__ {int channels; int num_blocks; int windowed_samples; TYPE_5__ mdct; scalar_t__ fixed_point; int mdct_window; TYPE_2__ ac3dsp; TYPE_1__* fdsp; int ** planar_samples; TYPE_4__* blocks; } ;
struct TYPE_8__ {int (* vector_fmul ) (int ,int const*,int ,int ) ;} ;
typedef int SampleType ;
typedef TYPE_3__ AC3EncodeContext ;
typedef TYPE_4__ AC3Block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int const*,int ,int ) ;
 int FUNC_2 (int ,int const*,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(AC3EncodeContext *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->channels; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < VAR_2->num_blocks; VAR_3++) {
            AC3Block *VAR_5 = &VAR_2->blocks[VAR_3];
            const SampleType *VAR_6 = &VAR_2->planar_samples[VAR_4][VAR_3 * VAR_0];





            VAR_2->ac3dsp.apply_window_int16(VAR_2->windowed_samples, VAR_6,
                                         VAR_2->mdct_window, VAR_1);

            if (VAR_2->fixed_point)
                VAR_5->coeff_shift[VAR_4+1] = FUNC_0(VAR_2);


            VAR_2->mdct.mdct_calcw(&VAR_2->mdct, VAR_5->mdct_coef[VAR_4+1],
                               VAR_2->windowed_samples);
        }
    }
}
