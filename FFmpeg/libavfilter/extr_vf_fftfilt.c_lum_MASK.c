
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double** rdft_vdata; int* rdft_vlen; } ;
typedef TYPE_1__ FFTFILTContext ;



__attribute__((used)) static inline double FUNC_0(void *VAR_0, double VAR_1, double VAR_2, int VAR_3)
{
    FFTFILTContext *VAR_4 = VAR_0;
    return VAR_4->rdft_vdata[VAR_3][(int)VAR_1 * VAR_4->rdft_vlen[VAR_3] + (int)VAR_2];
}
