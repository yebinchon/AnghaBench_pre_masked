
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ im; int re; } ;
struct TYPE_10__ {int depth; int (* import_row ) (TYPE_3__*,int *,int const) ;TYPE_1__* planes; } ;
struct TYPE_9__ {int planewidth; int planeheight; int b; int o; int nox; int noy; int data_linesize; int fft; TYPE_3__* vdata; TYPE_3__* hdata; } ;
typedef TYPE_1__ PlaneContext ;
typedef TYPE_2__ FFTdnoizContext ;
typedef TYPE_3__ FFTComplex ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (float*,TYPE_3__*,int const) ;
 int FUNC_4 (TYPE_3__*,int *,int const) ;

__attribute__((used)) static void FUNC_5(FFTdnoizContext *VAR_0,
                         uint8_t *VAR_1, int VAR_2,
                         float *VAR_3, int VAR_4, int VAR_5)
{
    PlaneContext *VAR_6 = &VAR_0->planes[VAR_5];
    const int VAR_7 = VAR_6->planewidth;
    const int VAR_8 = VAR_6->planeheight;
    const int VAR_9 = VAR_6->b;
    const int VAR_10 = VAR_6->o;
    const int VAR_11 = VAR_9 - VAR_10;
    const int VAR_12 = VAR_6->nox;
    const int VAR_13 = VAR_6->noy;
    const int VAR_14 = (VAR_0->depth + 7) / 8;
    const int VAR_15 = VAR_6->data_linesize / sizeof(FFTComplex);
    FFTComplex *VAR_16 = VAR_6->hdata;
    FFTComplex *VAR_17 = VAR_6->vdata;
    int VAR_18, VAR_19, VAR_20, VAR_21;

    VAR_4 /= sizeof(float);
    for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
        for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
            const int VAR_22 = FUNC_0(VAR_9, VAR_8 - VAR_19 * VAR_11);
            const int VAR_23 = FUNC_0(VAR_9, VAR_7 - VAR_18 * VAR_11);
            uint8_t *VAR_24 = VAR_1 + VAR_2 * VAR_19 * VAR_11 + VAR_18 * VAR_11 * VAR_14;
            float *VAR_25 = VAR_3 + VAR_4 * VAR_19 * VAR_9 + VAR_18 * VAR_9 * 2;
            FFTComplex *VAR_26, *VAR_27 = VAR_16;

            for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
                VAR_0->import_row(VAR_27, VAR_24, VAR_23);
                for (VAR_21 = VAR_23; VAR_21 < VAR_9; VAR_21++) {
                    VAR_27[VAR_21].re = VAR_27[VAR_9 - VAR_21 - 1].re;
                    VAR_27[VAR_21].im = 0;
                }
                FUNC_2(VAR_6->fft, VAR_27);
                FUNC_1(VAR_6->fft, VAR_27);

                VAR_24 += VAR_2;
                VAR_27 += VAR_15;
            }

            VAR_27 = VAR_16;
            for (; VAR_20 < VAR_9; VAR_20++) {
                for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
                    VAR_27[VAR_21].re = VAR_27[(VAR_9 - VAR_20 - 1) * VAR_15 + VAR_21].re;
                    VAR_27[VAR_21].im = VAR_27[(VAR_9 - VAR_20 - 1) * VAR_15 + VAR_21].im;
                }
            }

            VAR_26 = VAR_16;
            VAR_27 = VAR_17;
            for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
                for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++)
                    VAR_27[VAR_21] = VAR_26[VAR_21 * VAR_15 + VAR_20];
                FUNC_2(VAR_6->fft, VAR_27);
                FUNC_1(VAR_6->fft, VAR_27);
                FUNC_3(VAR_25, VAR_27, VAR_9 * sizeof(FFTComplex));

                VAR_27 += VAR_15;
                VAR_25 += VAR_4;
            }
        }
    }
}
