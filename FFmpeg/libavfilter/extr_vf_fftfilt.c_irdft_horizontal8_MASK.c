
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* linesize; int ** data; } ;
struct TYPE_5__ {int** rdft_hdata; int* rdft_hlen; int* rdft_vlen; int * ihrdft; } ;
typedef TYPE_1__ FFTFILTContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static void FUNC_2(FFTFILTContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        FUNC_1(VAR_0->ihrdft[VAR_4], VAR_0->rdft_hdata[VAR_4] + VAR_5 * VAR_0->rdft_hlen[VAR_4]);

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
            *(VAR_1->data[VAR_4] + VAR_1->linesize[VAR_4] * VAR_5 + VAR_6) = FUNC_0(VAR_0->rdft_hdata[VAR_4][VAR_5
                                                                         *VAR_0->rdft_hlen[VAR_4] + VAR_6] * 4 /
                                                                         (VAR_0->rdft_hlen[VAR_4] *
                                                                          VAR_0->rdft_vlen[VAR_4]), 0, 255);
}
