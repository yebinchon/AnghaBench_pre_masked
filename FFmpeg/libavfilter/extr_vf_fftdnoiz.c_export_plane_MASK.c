
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int depth; int (* export_row ) (int *,int *,int const,float const,int const) ;TYPE_1__* planes; } ;
struct TYPE_4__ {int planewidth; int planeheight; int b; int o; int nox; int noy; int data_linesize; int ifft; int * vdata; int * hdata; } ;
typedef TYPE_1__ PlaneContext ;
typedef TYPE_2__ FFTdnoizContext ;
typedef int FFTComplex ;


 int const FUNC_0 (int const,int const) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,float*,int const) ;
 int FUNC_4 (int *,int *,int const,float const,int const) ;

__attribute__((used)) static void FUNC_5(FFTdnoizContext *VAR_0,
                         uint8_t *VAR_1, int VAR_2,
                         float *VAR_3, int VAR_4, int VAR_5)
{
    PlaneContext *VAR_6 = &VAR_0->planes[VAR_5];
    const int VAR_7 = VAR_0->depth;
    const int VAR_8 = (VAR_7 + 7) / 8;
    const int VAR_9 = VAR_6->planewidth;
    const int VAR_10 = VAR_6->planeheight;
    const int VAR_11 = VAR_6->b;
    const int VAR_12 = VAR_6->o;
    const int VAR_13 = VAR_12 / 2;
    const int VAR_14 = VAR_11 - VAR_12;
    const int VAR_15 = VAR_6->nox;
    const int VAR_16 = VAR_6->noy;
    const int VAR_17 = VAR_6->data_linesize / sizeof(FFTComplex);
    const float VAR_18 = 1.f / (VAR_11 * VAR_11);
    FFTComplex *VAR_19 = VAR_6->hdata;
    FFTComplex *VAR_20 = VAR_6->vdata;
    int VAR_21, VAR_22, VAR_23, VAR_24;

    VAR_4 /= sizeof(float);
    for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++) {
        for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
            const int VAR_25 = VAR_21 == 0 ? 0 : VAR_13;
            const int VAR_26 = VAR_22 == 0 ? 0 : VAR_13;
            const int VAR_27 = VAR_21 == 0 ? VAR_11 : FUNC_0(VAR_14, VAR_9 - VAR_21 * VAR_14 - VAR_25);
            const int VAR_28 = VAR_22 == 0 ? VAR_11 : FUNC_0(VAR_14, VAR_10 - VAR_22 * VAR_14 - VAR_26);
            float *VAR_29 = VAR_3 + VAR_4 * VAR_22 * VAR_11 + VAR_21 * VAR_11 * 2;
            uint8_t *VAR_30 = VAR_1 + VAR_2 * (VAR_22 * VAR_14 + VAR_26) + (VAR_21 * VAR_14 + VAR_25) * VAR_8;
            FFTComplex *VAR_31, *VAR_32 = VAR_20;

            VAR_31 = VAR_19;
            for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
                FUNC_3(VAR_32, VAR_29, VAR_11 * sizeof(FFTComplex));
                FUNC_2(VAR_6->ifft, VAR_32);
                FUNC_1(VAR_6->ifft, VAR_32);
                for (VAR_24 = 0; VAR_24 < VAR_11; VAR_24++) {
                    VAR_31[VAR_24 * VAR_17 + VAR_23] = VAR_32[VAR_24];
                }

                VAR_32 += VAR_17;
                VAR_29 += VAR_4;
            }

            VAR_31 = VAR_19 + VAR_26 * VAR_17;
            for (VAR_23 = 0; VAR_23 < VAR_28; VAR_23++) {
                FUNC_2(VAR_6->ifft, VAR_31);
                FUNC_1(VAR_6->ifft, VAR_31);
                VAR_0->export_row(VAR_31 + VAR_25, VAR_30, VAR_27, VAR_18, VAR_7);

                VAR_31 += VAR_17;
                VAR_30 += VAR_2;
            }
        }
    }
}
