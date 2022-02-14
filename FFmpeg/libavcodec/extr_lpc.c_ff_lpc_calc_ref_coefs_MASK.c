
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int blocksize; int windowed_samples; int (* lpc_compute_autocorr ) (int ,int ,int,double*) ;int (* lpc_apply_welch_window ) (int const*,int ,int ) ;} ;
typedef TYPE_1__ LPCContext ;


 int VAR_0 ;
 int FUNC_0 (double*,int,double*,int *) ;
 int FUNC_1 (int const*,int ,int ) ;
 int FUNC_2 (int ,int ,int,double*) ;

int FUNC_3(LPCContext *VAR_1,
                          const int32_t *VAR_2, int VAR_3, double *VAR_4)
{
    double VAR_5[VAR_0 + 1];

    VAR_1->lpc_apply_welch_window(VAR_2, VAR_1->blocksize, VAR_1->windowed_samples);
    VAR_1->lpc_compute_autocorr(VAR_1->windowed_samples, VAR_1->blocksize, VAR_3, VAR_5);
    FUNC_0(VAR_5, VAR_3, VAR_4, ((void*)0));

    return VAR_3;
}
