
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int plane; int n; TYPE_2__* vdata; TYPE_2__* hdata; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int ** ifft; } ;
struct TYPE_9__ {int im; int re; } ;
typedef TYPE_2__ FFTComplex ;
typedef TYPE_3__ ConvolveContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ConvolveContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    FFTComplex *VAR_6 = VAR_5->hdata;
    FFTComplex *VAR_7 = VAR_5->vdata;
    const int VAR_8 = VAR_5->plane;
    const int VAR_9 = VAR_5->n;
    int VAR_10 = (VAR_9 * VAR_2) / VAR_3;
    int VAR_11 = (VAR_9 * (VAR_2+1)) / VAR_3;
    int VAR_12, VAR_13;

    for (VAR_12 = VAR_10; VAR_12 < VAR_11; VAR_12++) {
        FUNC_1(VAR_4->ifft[VAR_8][VAR_2], VAR_7 + VAR_12 * VAR_9);
        FUNC_0(VAR_4->ifft[VAR_8][VAR_2], VAR_7 + VAR_12 * VAR_9);

        for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
            VAR_6[VAR_13 * VAR_9 + VAR_12].re = VAR_7[VAR_12 * VAR_9 + VAR_13].re;
            VAR_6[VAR_13 * VAR_9 + VAR_12].im = VAR_7[VAR_12 * VAR_9 + VAR_13].im;
        }
    }

    return 0;
}
