
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int plane; int n; int * hdata; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int ** fft; } ;
typedef int FFTComplex ;
typedef TYPE_2__ ConvolveContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ConvolveContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    FFTComplex *VAR_6 = VAR_5->hdata;
    const int VAR_7 = VAR_5->plane;
    const int VAR_8 = VAR_5->n;
    int VAR_9 = (VAR_8 * VAR_2) / VAR_3;
    int VAR_10 = (VAR_8 * (VAR_2+1)) / VAR_3;
    int VAR_11;

    for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++) {
        FUNC_1(VAR_4->fft[VAR_7][VAR_2], VAR_6 + VAR_11 * VAR_8);
        FUNC_0(VAR_4->fft[VAR_7][VAR_2], VAR_6 + VAR_11 * VAR_8);
    }

    return 0;
}
