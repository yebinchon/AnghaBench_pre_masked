
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conv_idx; int conv_buf; int cepstrum_buf; int kernel_buf; int kernel_tmp_buf; int dump_buf; int analysis_buf; int * cepstrum_irdft; int * cepstrum_rdft; int * fft_ctx; int * irdft; int * rdft; int * analysis_irdft; int * analysis_rdft; } ;
typedef TYPE_1__ FIREqualizerContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(FIREqualizerContext *VAR_0)
{
    FUNC_2(VAR_0->analysis_rdft);
    FUNC_2(VAR_0->analysis_irdft);
    FUNC_2(VAR_0->rdft);
    FUNC_2(VAR_0->irdft);
    FUNC_0(VAR_0->fft_ctx);
    FUNC_2(VAR_0->cepstrum_rdft);
    FUNC_2(VAR_0->cepstrum_irdft);
    VAR_0->analysis_rdft = VAR_0->analysis_irdft = VAR_0->rdft = VAR_0->irdft = ((void*)0);
    VAR_0->fft_ctx = ((void*)0);
    VAR_0->cepstrum_rdft = ((void*)0);
    VAR_0->cepstrum_irdft = ((void*)0);

    FUNC_1(&VAR_0->analysis_buf);
    FUNC_1(&VAR_0->dump_buf);
    FUNC_1(&VAR_0->kernel_tmp_buf);
    FUNC_1(&VAR_0->kernel_buf);
    FUNC_1(&VAR_0->cepstrum_buf);
    FUNC_1(&VAR_0->conv_buf);
    FUNC_1(&VAR_0->conv_idx);
}
