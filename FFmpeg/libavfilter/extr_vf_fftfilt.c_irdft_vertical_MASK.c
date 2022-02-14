
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* rdft_hlen; int* rdft_vlen; int ** rdft_vdata; int ** rdft_hdata; int * ivrdft; } ;
typedef TYPE_1__ FFTFILTContext ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(FFTFILTContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->rdft_hlen[VAR_2]; VAR_3++)
        FUNC_0(VAR_0->ivrdft[VAR_2], VAR_0->rdft_vdata[VAR_2] + VAR_3 * VAR_0->rdft_vlen[VAR_2]);

    for (VAR_3 = 0; VAR_3 < VAR_0->rdft_hlen[VAR_2]; VAR_3++)
        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
            VAR_0->rdft_hdata[VAR_2][VAR_4 * VAR_0->rdft_hlen[VAR_2] + VAR_3] =
            VAR_0->rdft_vdata[VAR_2][VAR_3 * VAR_0->rdft_vlen[VAR_2] + VAR_4];
}
